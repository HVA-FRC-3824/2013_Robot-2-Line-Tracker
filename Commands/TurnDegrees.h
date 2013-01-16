// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef TURN_DEGREES_H
#define TURN_DEGREES_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class TurnDegrees: public Command
{
private:
   float m_Pgain;   // static PID parameters to allow setting
   float m_Igain;   // from any class instance
   float m_Dgain;
   float m_turnDegrees;
   float m_startGyroAngle;
   float m_setPoint;
   float m_threshold;
   bool m_inRange;
   PIDController *m_PIDcontroller;
   Timer *m_timer;
   
public:
   TurnDegrees();
	TurnDegrees(float degrees);
	~TurnDegrees();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
   
   float GetPIDError();
   bool IsOnTarget();
   void SetThreshold(float threshold);
   void SetPID(float p, float i, float d);
};

#endif