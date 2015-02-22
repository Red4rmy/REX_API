#include"main.h"
#include"settings.h"

void holoForward(int power)
{
	motorSet(RIGHT, -power);
	motorSet(LEFT, power);
}

void holoBackward(int power)
{
	motorSet(RIGHT, power);
	motorSet(LEFT, -power);
}

void holoTurnLeft(int power)
{
	motorSet(RIGHT, -power);
	motorSet(FRONT, -power);
	motorSet(LEFT, -power);
	motorSet(BACK, -power);
}

void holoTurnRight(int power)
{
	motorSet(RIGHT, power);
	motorSet(FRONT, power);
	motorSet(LEFT, power);
	motorSet(BACK, power);
}

void holoStrafeLeft(int power)
{
	motorSet(FRONT, -power);
	motorSet(BACK, power);
}

void holoStrafeRight(int power)
{
	motorSet(FRONT, power);
	motorSet(BACK, -power);
}

void holoStop(int power)
{
	motorSet(RIGHT, 0);
	motorSet(FRONT, 0);
	motorSet(LEFT, 0);
	motorSet(BACK, 0);
}

///////////////////////////////////////////////////////////////////////////////////////////////

void holoOperator(float factor)
{
	motorSet(RIGHT, factor*(-joy1_channel3+joy1_channel1));
	motorSet(FRONT, factor*(joy1_channel4+joy1_channel1));
	motorSet(LEFT, factor*(joy1_channel3+joy1_channel1));
	motorSet(BACK, factor*(-joy1_channel4+joy1_channel1));
}

