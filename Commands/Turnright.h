// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef TURN_RIGHT_H
#define TURN_RIGHT_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Turnright: public Command 
{
private:
   float m_startGyroAngle;
   float m_setPoint;
   float m_threshold;
   bool m_inRange;
   PIDController *m_PIDcontroller;
   Timer *m_timer;

public:
	Turnright();
	~Turnright();
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
