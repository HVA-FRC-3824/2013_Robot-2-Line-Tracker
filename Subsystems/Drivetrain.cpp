// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Drivetrain.h"
#include "../Robotmap.h"
#include "../Commands/TeleopJoystickDrive.h"
Drivetrain::Drivetrain() : Subsystem("Drivetrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	leftside = RobotMap::drivetrainLeftside;
	rightside = RobotMap::drivetrainRightside;
	robotDrive = RobotMap::drivetrainRobotDrive;
	drivetrainGyro = RobotMap::drivetrainDrivetrainGyro;
	opticalsensor = RobotMap::drivetrainOpticalsensor;
	rangeFinder = RobotMap::drivetrainRangeFinder;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Drivetrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new TeleopJoystickDrive());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Drivetrain::TankDrive(Joystick *left, Joystick *right) {
   robotDrive->TankDrive(left, right);
}
void Drivetrain::TankDrive(float left, float right) {
   robotDrive->TankDrive(left, right);
}
void Drivetrain::PIDWrite(float output)
{
   // set the chassis motors to the PID output to turn
   robotDrive->TankDrive(-output, output);
}
