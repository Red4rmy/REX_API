#include"main.h"
#include"settings.h"
void tank6Forward(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_MID, -power);
	motorSet(LEFT_MID, power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, power);
}

void tank6Backward(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_MID, power);
	motorSet(LEFT_MID, -power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, -power);
}

void tank6TurnLeft(int power)
{
	motorSet(RIGHT_FRONT, -power);
	motorSet(LEFT_FRONT, -power);
	motorSet(RIGHT_MID, -power);
	motorSet(LEFT_MID, -power);
	motorSet(RIGHT_BACK, -power);
	motorSet(LEFT_BACK, -power);
}

void tank6TurnRight(int power)
{
	motorSet(RIGHT_FRONT, power);
	motorSet(LEFT_FRONT, power);
	motorSet(RIGHT_MID, power);
	motorSet(LEFT_MID, power);
	motorSet(RIGHT_BACK, power);
	motorSet(LEFT_BACK, power);
}

void tank6Stop()
{
	motorSet(RIGHT_FRONT, 0);
	motorSet(LEFT_FRONT, 0);
	motorSet(RIGHT_MID, 0);
	motorSet(LEFT_MID, 0);
	motorSet(RIGHT_BACK, 0);
	motorSet(LEFT_BACK, 0);
}

///////////////////////////////////////////////////////////////////////////////////////////////

void tank6Operator(float factor)
{
	motorSet(RIGHT_FRONT,-factor*joy1_channel2);
	motorSet(LEFT_FRONT,factor*joy1_channel3);
	motorSet(RIGHT_BACK,-factor*joy1_channel2);
	motorSet(LEFT_BACK,factor*joy1_channel3);
	motorSet(RIGHT_MID,-factor*joy1_channel2);
	motorSet(LEFT_MID,factor*joy1_channel3);
}
