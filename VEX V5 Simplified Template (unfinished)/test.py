

import V5Simplified
from vex import *

brain = Brain()
controller = Controller()

aButton = Controller.faceButtons()

if aButton == 'A':
    print('Success')
else:
    print('Misread')

help()

