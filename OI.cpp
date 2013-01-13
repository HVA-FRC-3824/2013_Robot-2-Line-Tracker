// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DisplayButtons.h"
#include "Commands/Drivetowall.h"
#include "Commands/Followline.h"
#include "Commands/Searchforline.h"
#include "Commands/ShowGyroValue.h"
#include "Commands/TeleopJoystickDrive.h"
#include "Commands/TeleopXboxDrive.h"
#include "Commands/Turnleft.h"
#include "Commands/Turnright.h"
#include "Commands/UpdateTurnPIDValues.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() 
{   
   turnRight = new Turnright();

   // Process operator interface input here.
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
   
	// Construct the turn right command so that the PID values can be changed.
    turnRight = new Turnright();
    
	// Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	xboxJoystick = new Joystick(3);
	
	xboxButtonA = new JoystickButton(xboxJoystick, 1);
	xboxButtonA->WhileHeld(new TeleopXboxDrive());
	leftJoystick = new Joystick(2);
	
	leftJoystickTrigger = new JoystickButton(leftJoystick, 1);
	leftJoystickTrigger->WhenPressed(new Turnleft());
	rightJoystick = new Joystick(1);
	
	rightJoystickTrigger = new JoystickButton(rightJoystick, 1);
	rightJoystickTrigger->WhenPressed(turnRight);
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	SmartDashboard::PutData("Teleop Joystick Drive", new TeleopJoystickDrive());
	SmartDashboard::PutData("Teleop Xbox Drive", new TeleopXboxDrive());
	SmartDashboard::PutData("Follow line", new Followline());
	SmartDashboard::PutData("Search for line", new Searchforline());
	SmartDashboard::PutData("Drive to wall", new Drivetowall());
	SmartDashboard::PutData("Turn left", new Turnleft());
	SmartDashboard::PutData("Turn right", turnRight);
	SmartDashboard::PutData("Display Buttons", new DisplayButtons());
	SmartDashboard::PutData("Show Gyro Value", new ShowGyroValue());
	SmartDashboard::PutData("Update Turn PID Values", new UpdateTurnPIDValues());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getXboxJoystick() {
	return xboxJoystick;
}
Joystick* OI::getLeftJoystick() {
	return leftJoystick;
}
Joystick* OI::getRightJoystick() {
	return rightJoystick;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
