#import <AVFoundation/AVFoundation.h>
@interface Torch : NSObject
{
    BOOL currentState;
    AVCaptureSession *torchSession;
}

- (void)torchOnWithLevel:(float)level;
- (void)setTorch:(bool)state;
- (BOOL)getTorch;
- (float)getTorchLevel;
- (BOOL)hasPermission;

- (void)initCam;
- (void)cleanupCam;

@property (nonatomic, retain) AVCaptureSession *torchSession;

@end

@implementation Torch

@synthesize torchSession;

- (id)init
{
    self = [super init];
    currentState = NO;
    torchSession = nil;
    return self;
}

- (void)dealloc
{
    [self cleanupCam];
//    [super dealloc];
}

- (BOOL) getTorch
{
    return !([self getTorchLevel] == 0);
}

- (float) getTorchLevel
{
    AVCaptureDevice *device = [AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeVideo];
    if ([device hasTorch] && [device hasFlash])
    {
        return [device torchLevel];
    }
    return 0;
}

- (void) torchOnWithLevel: (float)level
{
    AVCaptureDevice *device = [AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeVideo];
    if (device.torchAvailable)
    {
        [device lockForConfiguration:nil];
        [device setTorchModeOnWithLevel:level error:nil];
        [device unlockForConfiguration];
    }
}

- (void) setTorch: (bool)state
{
    AVCaptureDevice *device = [AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeVideo];
    if ([device hasTorch] && [device hasFlash])
    {
        [device lockForConfiguration:nil];
        if (state)
        {
            [device setTorchMode:AVCaptureTorchModeOn];
            [device setFlashMode:AVCaptureFlashModeOn];
            currentState = YES;
        }
        else
        {
            [device setTorchMode:AVCaptureTorchModeOff];
            [device setFlashMode:AVCaptureFlashModeOff];
            currentState = NO;
        }
        [device unlockForConfiguration];
    }
}

- (bool) hasPermission
{
    AVAuthorizationStatus authStatus = [AVCaptureDevice authorizationStatusForMediaType:AVMediaTypeVideo];
    if(authStatus == AVAuthorizationStatusAuthorized)
    {
        return true;
    }
    return false;
}

- (void) initCam
{
    AVCaptureDevice *device = [AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeVideo];
    AVCaptureDeviceInput *flashInput = [AVCaptureDeviceInput deviceInputWithDevice:device error: nil];
    AVCaptureVideoDataOutput *output = [[AVCaptureVideoDataOutput alloc] init];
    AVCaptureSession *session = [[AVCaptureSession alloc] init];
    
    [session beginConfiguration];
    [device lockForConfiguration:nil];
    [session addInput:flashInput];
    [session addOutput:output];
    [device unlockForConfiguration];
//    [output release];
    [session commitConfiguration];
    [session startRunning];
    [self setTorchSession:session];
//    [session release];
}

- (void) cleanupCam
{
    if (torchSession != nil) {
        [self.torchSession stopRunning];
        self.torchSession = nil;
    }
}
@end


static Torch *torch = nil;
extern "C"
{
    void _Init()
    {
        if (torch == nil)
            torch = [[Torch alloc] init];
        
        [torch initCam];
    }
    void _Cleanup()
    {
        if (torch == nil)
            torch = [[Torch alloc] init];
        
        [torch cleanupCam];
    }
    
    bool _HasPermission() {
        if (torch == nil)
            torch = [[Torch alloc] init];
        return [torch hasPermission];
    }
    void _SetTorch(bool state)
    {
        if (torch == nil)
            torch = [[Torch alloc] init];
        
        [torch setTorch:state];
    }
    void _TorchOnWithLevel(float level)
    {
        if (torch == nil)
            torch = [[Torch alloc] init];
        
        [torch torchOnWithLevel:level];
    }
    bool _GetTorch()
    {
        if (torch == nil)
            torch = [[Torch alloc] init];
        
        return [torch getTorch];
    }
    float _GetTorchLevel()
    {
        if (torch == nil)
            torch = [[Torch alloc] init];
        
        return [torch getTorchLevel];
    }
}