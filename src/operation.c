/*
 * operation.c
 *
 *  Created on: Feb 22, 2015
 *      Author: Anton
 */
#include"main.h"
#include"settings.h"

void driveOperatorControl(float factor)
{
	switch(DRIVE_TYPE)
	{
	case(TANK_4):
		tank4Operator(factor);
			break;
	case(TANK_6):
		tank6Operator(factor);
			break;
	case(HOLONOMIC):
		holoOperator(factor);
			break;
	case(HU_DRIVE):
		HUOperator(factor);
			break;
	case(MECANUM):
		mecanumOperator(factor);
			break;
	case(X_DRIVE):
		XOperator(factor);
			break;
	}
}
