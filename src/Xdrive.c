#include"main.h"
#include"settings.h"
void XForward(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, power);
}

void XBackward(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, -power);
}

void XTurnLeft(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, -power);
}

void XTurnRight(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, power);
}

void XStrafeLeft(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, power);
}

void XStrafeRight(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, -power);
}

void XStop()
{
	motorSet(RIGHT_FRONT, 0);
	motorSet(LEFT_FRONT, 0);
	motorSet(RIGHT_BACK, 0);
	motorSet(LEFT_BACK, 0);
}

///////////////////////////////////////////////////////////////////////////////////////////////

void XOperator(float factor)
{
	motorSet(RIGHT_FRONT,factor*(joy1_channel3-joy1_channel1-joy1_channel4));
	motorSet(RIGHT_BACK,factor*(joy1_channel3-joy1_channel1+joy1_channel4));
	motorSet(LEFT_FRONT,-factor*(joy1_channel3+joy1_channel1+joy1_channel4));
	motorSet(LEFT_BACK,-factor*(joy1_channel3+joy1_channel1-joy1_channel4));

}
