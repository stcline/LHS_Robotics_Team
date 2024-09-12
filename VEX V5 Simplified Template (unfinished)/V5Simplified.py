
# ---------------------------------------------------------------------------- #
# 	Module:  V5Simplified.py                                                   #
#                                                                              #
# 	Description:  VEX V5 Starter Module - Simplified VEX V5 Module to help     #
#                 students get accustomed to programming VEX Components.       #
# ---------------------------------------------------------------------------- #

from vex import *

brain = Brain()
controller = Controller()

def settings():
    pass

def help():
    print("Commands")

class Controller:

    def dpad():

        while True:

            if controller.buttonDown.pressing():
                return "Down"

            elif controller.buttonUp.pressing():
                return "Up"

            elif controller.buttonLeft.pressing():
                return "Left"

            elif controller.buttonRight.pressing():
                return "Right"

            else:
                return None
    
    def faceButtons():
        while True:

            if controller.buttonA.pressing():
                return "A"

            elif controller.buttonB.pressing():
                return "B"

            elif controller.buttonX.pressing():
                return "X"

            elif controller.buttonY.pressing()():
                return "Y"

            else:
                return None

    def Joystick():
        pass

    def L1_R1():
        pass

    def L2_R2():
        pass

class Motor:
    def MotorSetup():
        pass

class Sensor:
    pass
