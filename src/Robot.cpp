#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"

class Robot: public IterativeRobot
{
private:
	void RobotInit()
	{
		CommandBase::init();
	}

	void DisabledInit()
	{
	}

	void DisabledPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
	}

	void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
	}

	void TeleopPeriodic()
	{
		SmartDashboard::PutNumber("CANTalon 0 Voltage", CommandBase::motor->getVoltage());
		SmartDashboard::PutNumber("CANTalon 0 Current", CommandBase::motor->getCurrent());
		SmartDashboard::PutNumber("CANTalon 0 Speed", CommandBase::motor->getSpeed());
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		LiveWindow::GetInstance()->Run();
	}
};

START_ROBOT_CLASS(Robot)

