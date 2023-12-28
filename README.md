# InvertedMaze
## The Inverted Maze 


### Overview
The Inverted Maze is a project that shows three different viewings of the same maze. In order to change the view there are three buttons that would be the different difficulties, with a normal viewing, inverted, and inverted and backwards being the three options from left to right in this order. Because the maze isn't shown, but rather a screen that can sometimes show a warped view of the maze, it makes this a fun minigame that can be challenging but accessible for all ages. The main components of this project include: the Maze, Adafruit Itsy Bitsy 32u4 microcontroller board, a webcam, and a screen.





### How to Use
The Inverted Maze is pretty simple by design, not requring any code outside of the buttons on Arduino. There is a computer setup below the maze to run the webcam video. The computer is also setup to run the necessary program on startup, called OBS Studio. This is a platform for screencasting and streaming that is used to broadcast the video from the webcam pointed at the Maze onto the screen. 

####  OBS Studio 
OBS Studio is needed to broadcast the video, but also for the change in the viewing. Each view point is what is called a 'Scene', in this case 4 are needed, 3 for each view point and 1 for the Welcome/Idle screen. In order to set the change in scenes without pressing each different one in OBS a hotkey for each scene is needed, which can be found under Settings-> Hotkeys. Once the hotkeys were established, with 1, 2, 3 for each viewpoint, the the scenes can be changed remotely.  
For information on how to Download OBS Studio: https://snapcraft.io/obs-studio
For information on scenes and how to edit or add them: https://obsproject.com/wiki/Sources-Guide



#### Setting up the Arduino
The Arduino is needed for the button press actually changing the screens, the main point of interest of the Inverted Maze. In order to do this three switches are connected to the board, which are pressed by the buttons themselves being pressed. The Arduino emulates a keyboard being pressed once the switch is, which also changes the viewpoints because of the previously established hotkeys.  
Overview of the Itsy Bitsy: https://learn.adafruit.com/introducting-itsy-bitsy-32u4/overview
How to setup Itsy Bitsy on Arduino: https://learn.adafruit.com/introducting-itsy-bitsy-32u4/arduino-ide-setup
