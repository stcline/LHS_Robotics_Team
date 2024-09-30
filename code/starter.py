'''
This script controls a VEX V5 robot.
Use this as a starting point for your code.
'''

# Import the necessary libraries
from vex import *

# Brain should be defined by default
brain=Brain()

# Controller should be defined by default
controller=Controller()

# Robot configuration code

# wait for rotation sensor to fully initialize
wait(30, MSEC)

def play_vexcode_sound(sound_name):
    # Helper to make playing sounds from the V5 in VEXcode easier and
    # keeps the code cleaner by making it clear what is happening.
    print("VEXPlaySound:" + sound_name)
    wait(5, MSEC)

# add a small delay to make sure we don't print in the middle of the REPL header
wait(200, MSEC)

# clear the console to make sure we don't have the REPL in the console
print("\033[2J")

# Code that runs the robot
while True:
    pass