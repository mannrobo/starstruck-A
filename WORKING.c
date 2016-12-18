#pragma config(Motor,  port1,           arm1,          tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           driveFrontLeft, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           driveFrontRight, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           arm2,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           wrist,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           driveBackLeft, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           driveBackRight, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          arm3,          tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int X1, X2, Y1 = 0;
int threshold = 15;

void driveControl() {

  //Create "deadzone" for Y1/Ch3
	if(abs(vexRT[Ch3]) > threshold) {
		Y1 = vexRT[Ch3];
	}	else {
		Y1 = 0;
	}

	//Create "deadzone" for X1/Ch4
	if(abs(vexRT[Ch4]) > threshold) {
		X1 = vexRT[Ch4];
	}	else {
		X1 = 0;
	}

	//Create "deadzone" for X2/Ch1
	if(abs(vexRT[Ch1]) > threshold) {
		X2 = vexRT[Ch1];
	}	else {
		X2 = 0;
	}

	//Remote Control Commands
	motor[driveFrontRight] = Y1 - X1 - X2;
	motor[driveFrontLeft]  = Y1 + X1 + X2;
	motor[driveBackRight]  = Y1 + X1 - X2;
	motor[driveBackLeft]   = Y1 - X1 + X2;

}

void armControl() {
	if (vexRT[Btn7U] == 1) {
		motor[arm1] = 127;
		motor[arm2] = 127;
		motor[arm3] = 127;
	} else if (vexRT[Btn7D] == 1) {
		motor[arm1] = -127;
		motor[arm2] = -127;
		motor[arm3] = -127;
	} else {
		motor[arm1] = 0;
		motor[arm2] = 0;
		motor[arm3] = 0;
	}
}

void wristControl() {
	if (vexRT[Btn7L]){
		motor[wrist] = 127;
  } else {
    motor[wrist] = 0;
	}
}

task main() {
	while (true) {

		driveControl();
		wristControl();
		armControl();

	}
}