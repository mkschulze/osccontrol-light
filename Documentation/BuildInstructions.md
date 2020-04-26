osccontrol-light - Build Instructions
=====================================

In the following we provide potentially incomplete and outdated build
instructions for the different platforms. If you experience any
problems, or your platform is not listed here, please consider
creating an issue or a pull request on GitHub that describes, or
resolves the problem.

Setting up JUCE/Projucer
------------------------

To get rid of a splash-screen in the plugin UI, and the unsolicited
collection of usage data from within the Projucer, you have to either
own a JUCE license, or built the Projucer as 

Arch Linux
----------

Make sure the following packages are installed.
- `zenity`
- `yaml-cpp`
- `steinberg-vst36` (AUR)

