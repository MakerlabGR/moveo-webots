// File:          moveo-controller.cpp
// Date:          2021-05-24
// Description:
// Author:        Panagiotis Theocharis
// Modifications:

#include <webots/Robot.hpp>
#include <webots/Motor.hpp>

// void delay(int ms) {
  // for (;;) {
  // }
// }

using namespace webots;

int main(int argc, char **argv) {

  Robot *robot = new Robot();

  int timeStep = (int)robot->getBasicTimeStep();

  Motor *shoulder = robot->getMotor("shoulder-motor");
  // Motor *arm = robot->getMotor("arm-motor");
  // Motor *forearm = robot->getMotor("forearm-motor");
  // Motor *wrist = robot->getMotor("wrist-motor");
  // Motor *hand = robot->getMotor("hand-motor");
  // Motor *gripperL = robot->getMotor("gripperL-motor");
  // Motor *gripperR = robot->getMotor("gripperR-motor");

  
  while (robot->step(timeStep) != -1) {

    shoulder->setPosition(10*3.14);
    robot->step(400*timeStep);
    shoulder->setPosition(0);
    robot->step(400*timeStep);
    
    // arm->setPosition(-1.4);
    // forearm->setPosition(-1.4);
    // robot->step(100*timeStep);
    // forearm->setPosition(1.4);
    // arm->setPosition(1.4);
    // robot->step(100*timeStep);
    // arm->setPosition(0);
    // robot->step(100*timeStep);

    // forearm->setPosition(0);
    // robot->step(100*timeStep);
    
    // wrist->setPosition(3.14);
    // robot->step(100*timeStep);
    // wrist->setPosition(0);
    // robot->step(100*timeStep);
    
    // hand->setPosition(-1.4);
    // robot->step(100*timeStep);
    // hand->setPosition(1.4);
    // robot->step(100*timeStep);
    // hand->setPosition(0);
    // robot->step(100*timeStep);
    
    // gripperL->setPosition(1.5);
    // gripperR->setPosition(1.5);
    // robot->step(100*timeStep);
    // gripperL->setPosition(-0.2);
    // gripperR->setPosition(-0.2);
    // robot->step(100*timeStep);
  };

  delete robot;
  return 0;
}
