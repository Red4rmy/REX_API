#include"main.h"
#include"settings.h"
void HUForward(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, power);
}

void HUBackward(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, -power);
}

void HUTurnLeft(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, -power);
}

void HUTurnRight(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, power);
}

void HUStrafeLeft(int power)
{
	motorSet(STRAFE, -power);
}

void HUStrafeRight(int power)
{
	motorSet(STRAFE, power);
}

void HUStop()
{
	motorSet(RIGHT_FRONT, 0);
	motorSet(LEFT_FRONT, 0);
	motorSet(RIGHT_BACK, 0);
	motorSet(LEFT_BACK, 0);
	motorSet(STRAFE, 0);
}

///////////////////////////////////////////////////////////////////////////////////////////////

void HUOperator(float factor)
{
	motorSet(RIGHT_FRONT,factor*(-joy1_channel3+joy1_channel1));
	motorSet(LEFT_FRONT,factor*(joy1_channel3+joy1_channel1));
	motorSet(RIGHT_BACK,factor*(-joy1_channel3+joy1_channel1));
	motorSet(LEFT_BACK,factor*(joy1_channel3+joy1_channel1));
	motorSet(STRAFE, factor*(-joy1_channel4+joy1_channel1));
}
