<h1 align=center>Sixaxis</h1>

## <b>Description</b>
Trying to build a light SDL2 controller port for the playstation3 Sixaxis controller (Dualshock3). Simple DirectMedia Layer(SDL) is a cross-platform development library designed to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via OpenGL/Direct3D/Metal/Vulkan.
Ive played around with the controller using python and pygame before. [Pygame](https://github.com/pygame/pygame) is based on SDL and is implemented as a mixture of Python and C so ill be trying to replicate a similar build only in a much smaller scale: just the controller function.


## <b>Setup</b>
### 1. Install SDL
```bash
$ sudo apt-get install libsdl2-dev 
```
Check out there release binaries [here](https://www.libsdl.org/download-2.0.php)
### 2. Power on your controller by pressing the the PS3 button
Ps you need to have paired to the device before. (－‸ლ )

### 3. Compile test script
```bash
$ make
```
### 4. Run the executable
```bash
./build/joystick_test       
Opened Joystick 0
Name: Sony PLAYSTATION(R)3 Controller
Number of Axes: 6
Number of Buttons: 17
Number of Balls: 0
```

## <b>Resources</b>
- [SDL Tutorials](https://wiki.libsdl.org/Tutorials)


## <b>License</b>
[![license](https://img.shields.io/github/license/mashape/apistatus.svg?style=for-the-badge)](LICENSE)
