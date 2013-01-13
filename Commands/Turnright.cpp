// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Turnright.h"
#include <math.h>
#define P_DEFAULT                   5.0f
#define I_DEFAULT                   0.0f
#define D_DEFAULT                   0.0f
#define DEGREES_180         1.0f
#define DEGREES_090         0.5f
Turnright::Turnright()
{
   // initialize PID controller
   // Note: There is no range of the input because there is no min/max range of the gyro.
   // and setting the range of the output is unnesscesary because it defaults to -1 to 1.
   
   // set the turn tolerance
   // Note: cannot use SetTolerance because the min and max of the input have not been set.
   // must instead use set abs tolerance which takes a distance as it parameter
   
   m_PIDcontroller = new PIDController(P_DEFAULT, I_DEFAULT, D_DEFAULT, Robot::orientation->gyro,
                                              Robot::drivetrain);
   SetThreshold(DEGREES_090 / 20.0f);
   
   // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
   Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
Turnright::Turnright(float p, float i, float d)
{
   printf("***** Turn Right Initialized\n");
   m_PIDcontroller = new PIDController(p, i, d, Robot::orientation->gyro,
                                              Robot::drivetrain);
   SetThreshold(DEGREES_090 / 20.0f);
   
   // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void Turnright::Initialize()
{
   printf("***** In void Turnright::Initialize()\n");
   
   // read gyro angle
   m_startGyroAngle = Robot::orientation->gyro->GetAngle();
   m_setPoint = m_startGyroAngle + DEGREES_090;
   
   // tell the PID controller to target angle
   m_PIDcontroller->SetSetpoint(m_setPoint);
   
   // run the PID controller
   m_PIDcontroller->Enable();
   
   printf("***** Out void Turnright::Initialize()\n");
}
// Called repeatedly when this Command is scheduled to run
void Turnright::Execute() 
{
   // do nothing since PID is running in its own thread
   
   printf("**** In void Turnright::Execute()\n");
  
   // show the turn angle error
   SmartDashboard::PutNumber("PID Error", GetPIDError());
   
   printf("**** Out void Turnright::Execute()\n");
}
// Make this return true when this Command no longer needs to run execute()
bool Turnright::IsFinished() 
{
   printf("**** In bool Turnright::IsFinished()\n");
   
   // return true when on target
	return GetOnTarget();
}
// Called once after isFinished returns true
void Turnright::End() 
{
   printf("**** In void Turnright::End()\n");
 
   // show the first and final angle
   
   // stop the PID 
	m_PIDcontroller->Disable();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Turnright::Interrupted() 
{
   printf("**** In void Turnright::Interrupted()\n");
   // stop the PID 
   m_PIDcontroller->Disable();  
}
float Turnright::GetPIDError()
{
  return m_setPoint - Robot::orientation->gyro->GetAngle();
}
bool Turnright::GetOnTarget()
{
   return fabs(GetPIDError()) < m_threshold;
}
void Turnright::SetThreshold(float threshold)
{
   m_threshold = threshold;
}

void Turnright::SetPID(float p, float i, float d)
{
   printf("Set PID %f, %f, %f\n", p, i, d);
   m_PIDcontroller->SetPID(p, i, d);
}

Turnright::~Turnright()
{
   delete m_PIDcontroller;
}
