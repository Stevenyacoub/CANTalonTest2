#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Subsystems/SingleMotor.h"

// Initialize a single static instance of all of your subsystems to NULL
SingleMotor* CommandBase::motor = NULL;
OI* CommandBase::oi = NULL;


CommandBase::CommandBase(const std::string &name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	motor = new SingleMotor();
	oi = new OI();

}
