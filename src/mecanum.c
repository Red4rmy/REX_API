#include"main.h"
#include"settings.h"
void mecanumForward(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, power);
}

void mecanumBackward(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, -power);
}

void mecanumTurnLeft(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, -power);
}

void mecanumTurnRight(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, power);
}

void mecanumStrafeLeft(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, power);
}

void mecanumStrafeRight(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, -power);
}

void mecanumStop()
{
	motorSet(RIGHT_FRONT, 0);
	motorSet(LEFT_FRONT, 0);
	motorSet(RIGHT_BACK, 0);
	motorSet(LEFT_BACK, 0);
}

///////////////////////////////////////////////////////////////////////////////////////////////

void mecanumOperator(float factor)
{
	motorSet(RIGHT_FRONT,factor*(joy1_channel3-joy1_channel1-joy1_channel4));
	motorSet(RIGHT_BACK,factor*(joy1_channel3-joy1_channel1+joy1_channel4));
	motorSet(LEFT_FRONT,-factor*(joy1_channel3+joy1_channel1+joy1_channel4));
	motorSet(LEFT_BACK,-factor*(joy1_channel3+joy1_channel1-joy1_channel4));
}
