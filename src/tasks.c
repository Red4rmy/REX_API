/*
 * tasks.c
 *
 *  Created on: Feb 22, 2015
 *      Author: Anton
 */
#include"main.h"
#include"settings.h"


int joy1_channel1;
int joy1_channel2;
int joy1_channel3;
int joy1_channel4;
int joy2_channel1;
int joy2_channel2;
int joy2_channel3;
int joy2_channel4;
int joy1_channel5;
int joy1_channel6;
int joy1_channel7;
int joy1_channel8;
int joy2_channel5;
int joy2_channel6;
int joy2_channel7;
int joy2_channel8;

void joystickGet()
{
joy1_channel1 = joystickGetAnalog(1,1);
joy1_channel2 = joystickGetAnalog(1,2);
joy1_channel3 = joystickGetAnalog(1,3);
joy1_channel4 = joystickGetAnalog(1,4);
joy2_channel1 = joystickGetAnalog(2,1);
joy2_channel2 = joystickGetAnalog(2,2);
joy2_channel3 = joystickGetAnalog(2,3);
joy2_channel4 = joystickGetAnalog(2,4);
joy1_channel5 = joystickGetDigital(1,5,JOY_UP)+(2*joystickGetDigital(1,5,JOY_DOWN));
joy1_channel6 = joystickGetDigital(1,6,JOY_UP)+(2*joystickGetDigital(1,6,JOY_DOWN));
joy1_channel7 = joystickGetDigital(1,7,JOY_UP)+(2*joystickGetDigital(1,7,JOY_DOWN))
+(4*joystickGetDigital(1,7,JOY_RIGHT))+(8*joystickGetDigital(1,7,JOY_LEFT));
joy1_channel8 = joystickGetDigital(1,8,JOY_UP)+(2*joystickGetDigital(1,8,JOY_DOWN))
+(4*joystickGetDigital(1,8,JOY_RIGHT))+(8*joystickGetDigital(1,8,JOY_LEFT));
joy2_channel5 = joystickGetDigital(2,5,JOY_UP)+(2*joystickGetDigital(2,5,JOY_DOWN));
joy2_channel6 = joystickGetDigital(2,6,JOY_UP)+(2*joystickGetDigital(2,6,JOY_DOWN));
joy2_channel7 = joystickGetDigital(2,7,JOY_UP)+(2*joystickGetDigital(2,7,JOY_DOWN))
+(4*joystickGetDigital(2,7,JOY_RIGHT))+(8*joystickGetDigital(2,7,JOY_LEFT));
joy2_channel8 = joystickGetDigital(2,8,JOY_UP)+(2*joystickGetDigital(2,8,JOY_DOWN))
+(4*joystickGetDigital(2,8,JOY_RIGHT))+(8*joystickGetDigital(2,8,JOY_LEFT));
}

int tRF;
int tLF;
int tRB;
int tLB;
int RFcount;
int LFcount;
int RBcount;
int LBcount;
int RFvel;
int LFvel;
int RBvel;
int LBvel;
void IMEGet()
{
	imeGet(RIGHT_BACK_IME, &RBcount);
	imeGet(RIGHT_FRONT_IME, &RFcount);
	imeGet(LEFT_BACK_IME, &LBcount);
	imeGet(LEFT_FRONT_IME, &LFcount);
	imeGetVelocity(RIGHT_BACK_IME, &tRB);RBvel = tRB / 24.5;
	imeGetVelocity(RIGHT_FRONT_IME, &tRF);RFvel = tRF / 24.5;
	imeGetVelocity(LEFT_BACK_IME, &tLB);LBvel = tLB / 24.5;
	imeGetVelocity(LEFT_FRONT_IME, &tLF);LFvel = tLF / 24.5;
}

//THIS HAS TO BE DONE IN A SMARTER WAY, possibly each switch its own function.
void sensorSetup()
{
	switch(DIG1)
	{

	}
	switch(DIG2)
	{

	}
	switch(DIG3)
	{

	}
	switch(DIG4)
	{

	}
	switch(DIG5)
	{

	}
	switch(DIG6)
	{

	}
	switch(DIG7)
	{

	}
	switch(DIG8)
	{

	}
	switch(DIG9)
	{

	}
	switch(DIG10)
	{

	}
	switch(DIG11)
	{

	}
	switch(DIG12)
	{

	}

	switch(ANALOG1)
	{

	}
	switch(ANALOG2)
	{

	}
	switch(ANALOG2)
	{

	}
	switch(ANALOG3)
	{

	}
	switch(ANALOG4)
	{

	}
	switch(ANALOG5)
	{

	}
	switch(ANALOG6)
	{

	}
	switch(ANALOG7)
	{

	}
	switch(ANALOG8)
	{

	}
}
