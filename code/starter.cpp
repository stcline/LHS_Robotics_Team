
// VEX V5 C++ Project with Competition Template
#include "vex.h"
using namespace vex;
// Create a Brain object
vex::brain Brain;

//vex::motor motor1(vex::PORT1); // Initialize motor1 with the correct port number
vex::motor motor2(vex::PORT2); // Initialize motor2 with the correct port number
vex::controller Controller1; // Initialize Controller1
// attach a 3 wire limit switch to the Bumper port
vex::limit LimitSwitch = vex::limit(Brain.ThreeWirePort.B);

// Creates a competition object that allows access to Competition methods.
vex::competition Competition;

void pre_auton() {
// All activities that occur before competition start
// Example: setting initial positions
}

void autonomous() {
    // motor2.spin(vex::directionType::fwd, 50, vex::velocityUnits::pct);
    // Brain.Screen.print("Motor spinning forward");
    // vex::task::sleep(2000);
    // motor2.stop();
    // vex::task::sleep(2000);
    // motor2.spin(vex::directionType::rev, 50, vex::velocityUnits::pct);
    // Brain.Screen.print("Motor spinning reverse");
    // vex::task::sleep(2000);
    // motor2.stop();
    // vex::task::sleep(2000);
}

void drivercontrol() {
  // Place drive control code here, inside the loop
    while (true) {
      if (Controller1.ButtonA.pressing()) { // If button A is pressed
        //motor1.spin(vex::directionType::fwd, 50, vex::velocityUnits::pct); // Set motor1 to spin forward at 100% velocity
        motor2.spin(vex::directionType::fwd, 50, vex::velocityUnits::pct); // Set motor2 to spin forward at 100% velocity
      } else if (Controller1.ButtonB.pressing()) { // If button B is pressed
        //motor1.spin(vex::directionType::rev, 50, vex::velocityUnits::pct); // Set motor1 to spin in reverse at 100% velocity
        motor2.spin(vex::directionType::rev, 50, vex::velocityUnits::pct); // Set motor2 to spin in reverse at 100% velocity
      } else { // If the buttons are not pressed
        //motor1.stop(); // Stop motor1
        motor2.stop(); // Stop motor2
      }
      // If the limit switch is pressed (returns true), print "Limit switch pressed"
      if (LimitSwitch.pressing()) {
        Brain.Screen.print("Limit switch pressed");
        Brain.Screen.newLine();
        // If the limit switch is pressed, stop the motors
        //motor1.stop();
        motor2.stop();
        // Wait 2 seconds
        vex::task::sleep(2000);        
      }
    }
}

int main() {
    // Do not adjust the lines below

    // Set up (but don't start) callbacks for autonomous and driver control periods.
    Competition.autonomous(autonomous);
    Competition.drivercontrol(drivercontrol);

    // Run the pre-autonomous function.
    pre_auton();

    // Robot Mesh Studio runtime continues to run until all threads and
    // competition callbacks are finished.
}
