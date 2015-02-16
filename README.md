# Object-Tracking-Bot
Bot that tracks objects using OpenCV with Python, and runs on a Raspberry Pi and an Arduino

Optionally send laser pointer coordinates via serial to Arduino, to control servos etc.

Current version:
* Python 2.7.5```(Use installer package)```
* OpenCV 2.4.5```(Paste cv2.pyd into Python27\Lib\site-packages\)```
* NumPy 1.6.1```(Use installer package for Python 2.7)```
* pySerial 2.7```(Use installer package for Python 2.7)```- Optional

## Quick Start
```python track_object.py```

## Use with Arduino
* Remove ```#``` from lines ```9``` and ```199``` in ```track_object.py```
* Replace ```COM16``` with your Arduino device port
* Upload ```ArduinoParser.ino``` sketch to Arduino and keep cable connected to computer
* Run ```python track_object.py```
