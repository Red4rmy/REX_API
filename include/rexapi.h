void forward(int power);

void backward(int power);

void turnLeft(int power);

void turnRight(int power);

void strafeLeft(int power);

void strafeRight(int power);

void stop();

///////////////////////////////////////////////////////////////////////////////////////////////

void tank4Forward(int power);

void tank4Backward(int power);

void tank4TurnLeft(int power);

void tank4TurnRight(int power);

void tank4Stop();

///////////////////////////////////////////////////////////////////////////////////////////////

void tank6Forward(int power);

void tank6Backward(int power);

void tank6TurnLeft(int power);

void tank6TurnRight(int power);

void tank6Stop();

///////////////////////////////////////////////////////////////////////////////////////////////

void holoForward(int power);

void holoBackward(int power);

void holoTurnLeft(int power);

void holoTurnRight(int power);

void holoStrafeLeft(int power);

void holoStrafeRight(int power);

void holoStop();

///////////////////////////////////////////////////////////////////////////////////////////////

void HUForward(int power);

void HUBackward(int power);

void HUTurnLeft(int power);

void HUTurnRight(int power);

void HUStrafeLeft(int power);

void HUStrafeRight(int power);

void HUStop();

///////////////////////////////////////////////////////////////////////////////////////////////

void XForward(int power);

void XBackward(int power);

void XTurnLeft(int power);

void XTurnRight(int power);

void XStrafeLeft(int power);

void XStrafeRight(int power);

void XStop();

///////////////////////////////////////////////////////////////////////////////////////////////

void mecanumForward(int power);

void mecanumBackward(int power);

void mecanumTurnLeft(int power);

void mecanumTurnRight(int power);

void mecanumStrafeLeft(int power);

void mecanumStrafeRight(int power);

void mecanumStop();

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

void driveOperatorControl(float factor);

///////////////////////////////////////////////////////////////////////////////////////////////

void tank4Operator(float factor);

void tank6Operator(float factor);

void holoOperator(float factor);

void HUOperator(float factor);

void XOperator(float factor);

void mecanumOperator(float factor);
///////////////////////////////////////////////////////////////////////////////////////////////
// Types of sensors and their integer "values"
#define EMPTY	  		0
#define GYROSCOPE       1
#define ENCODER			2
#define OTHER			3



///////////////////////////////////////////////////////////////////////////////////////////////

//Types of drives and their integer "values"

#define NO_DRIVE_TYPE  	0
#define TANK_4			1
#define TANK_6			2
#define HOLONOMIC		3
#define HU_DRIVE		4
#define MECANUM			5
#define X_DRIVE 		6


//Joystick value variables

extern int joy1_channel1;
extern int joy1_channel2;
extern int joy1_channel3;
extern int joy1_channel4;
extern int joy2_channel1;
extern int joy2_channel2;
extern int joy2_channel3;
extern int joy2_channel4;
extern int joy1_channel5;
extern int joy1_channel6;
extern int joy1_channel7;
extern int joy1_channel8;
extern int joy2_channel5;
extern int joy2_channel6;
extern int joy2_channel7;
extern int joy2_channel8;

//IME values

extern int RFcount;
extern int LFcount;
extern int RBcount;
extern int LBcount;
extern int RFvel;
extern int LFvel;
extern int RBvel;
extern int LBvel;
//tasks which get global variables.

extern void joystickGet();


