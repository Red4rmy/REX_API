#include"main.h"
#include"settings.h"

void forward(int power)
{
	switch(DRIVE_TYPE)
	{
	case TANK_4:
		tank4Forward(power);
		break;
	case TANK_6:
		tank6Forward(power);
		break;
	case HOLONOMIC:
		holoForward(power);
		break;
	case HU_DRIVE:
		HUForward(power);
		break;
	case MECANUM:
		mecanumForward(power);
		break;
	case X_DRIVE:
		XForward(power);
		break;
	}
}

void backward(int power)
{
	switch(DRIVE_TYPE)
	{
	case TANK_4:
		tank4Backward(power);
		break;
	case TANK_6:
		tank6Backward(power);
		break;
	case HOLONOMIC:
		holoBackward(power);
		break;
	case HU_DRIVE:
		HUBackward(power);
		break;
	case MECANUM:
		mecanumBackward(power);
		break;
	case X_DRIVE:
		XBackward(power);
		break;
	}
}

void turnLeft(int power)
{
	switch(DRIVE_TYPE)
	{
	case TANK_4:
		tank4TurnLeft(power);
		break;
	case TANK_6:
		tank6TurnLeft(power);
		break;
	case HOLONOMIC:
		holoTurnLeft(power);
		break;
	case HU_DRIVE:
		HUTurnLeft(power);
		break;
	case MECANUM:
		mecanumTurnLeft(power);
		break;
	case X_DRIVE:
		XTurnLeft(power);
		break;
	}
}

void turnRight(int power)
{
	switch(DRIVE_TYPE)
	{
	case TANK_4:
		tank4TurnRight(power);
		break;
	case TANK_6:
		tank6TurnRight(power);
		break;
	case HOLONOMIC:
		holoTurnRight(power);
		break;
	case HU_DRIVE:
		HUTurnRight(power);
		break;
	case MECANUM:
		mecanumTurnRight(power);
		break;
	case X_DRIVE:
		XTurnRight(power);
		break;
	}
}

void strafeLeft(int power)
{
	switch(DRIVE_TYPE)
	{
	case HOLONOMIC:
		holoStrafeLeft(power);
		break;
	case HU_DRIVE:
		HUStrafeLeft(power);
		break;
	case MECANUM:
		mecanumStrafeLeft(power);
		break;
	case X_DRIVE:
		XStrafeLeft(power);
		break;
	}
}

void strafeRight(int power)
{
	switch(DRIVE_TYPE)
	{
	case HOLONOMIC:
		holoStrafeRight(power);
		break;
	case HU_DRIVE:
		HUStrafeRight(power);
		break;
	case MECANUM:
		mecanumStrafeRight(power);
		break;
	case X_DRIVE:
		XStrafeRight(power);
		break;
	}
}

void stop()
{
	switch(DRIVE_TYPE)
	{
	case TANK_4:
		tank4Stop();
		break;
	case TANK_6:
		tank6Stop();
		break;
	case HOLONOMIC:
		holoStop();
		break;
	case HU_DRIVE:
		HUStop();
		break;
	case MECANUM:
		mecanumStop();
		break;
	case X_DRIVE:
		XStop();
		break;
	}
}
