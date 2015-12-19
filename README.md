# LightLeft-iOS
An xcode project for the iOS version of LightLeft, a flashlight app for larpers and other live-action gamers.

An Android version of LightLeft is available for free on the Google Play store.

https://play.google.com/store/apps/details?id=com.DozenEyes.LightLeft

Due to Apple's moratorium on new apps that work primarily as flashlight controllers, iOS distribution is a bit more complicated. Fortunately, it is free!

**Installation**

Installing iOS software requires a Macintosh computer.

Other than that, you will need:
- Xcode 7.x
- An iOS device running iOS 8.x or higher, registered to the computer you are running Xcode on.
- Unity 5.3.1 (other versions may work, we just haven't tested them)

To start with, download this project archive and extract it. We'll call the location you extract it to **[ProjectFolder]**

**The Unity Part**

Grab the Unity installer for 5.3.1: http://unity3d.com/get-unity/download?thank-you=update&download_nid=24110&os=Mac

- Install Unity Editor and the iOS Package
- Start Unity and create a new empty project. You can use the default name. It won't matter.
- Go to **File->Build Settings...**
- In the Platform list, select **iOS** and press the **Switch Platform** Button
- In the right-hand column, **Run in Xcode as** should be set to **Release** and none of the boxes should be checked.
- Press the **Build** button. Give the build a name and hit the **Save** button to start building.
- When the build completes, navigate to **[BuildName]/Libraries/**
- Copy **libiPhone-lib.a** and paste it into **[ProjectFolder]/Libraries/**

Once you've done this, you can safely delete that empty Unity project, or even all of Unity! All we needed was that 800MB library file.

**The Xcode Part**

- Have your iOS device plugged into your computer via USB
- Open **[ProjectFolder]/Unity-iPhone.xcodeproj**
- In the upper left corner, you should see a (triangular) Play button, a (square) Stop button, and then a dropdown that says **Unity-iPhone** and your iOS device name.
- *If it says "Generic iOS device" select your real iOS device from the dropdown. If your iOS device isn't in the list, make sure it's registered to your machine.*
- Hit the (triangular) Play button to start the build and install process.

Once the installation is complete, it will automatically launch the app on your iOS device.

This build will operate for 365 days before you need to install it from Xcode again.

Happy gaming!
