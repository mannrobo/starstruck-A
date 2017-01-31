


/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*
 *!! IF YOU ARE NOT A TEAM PROGRAMMER: !!*
 *!!     DO NOT MODIFY CODE BELOW!     !!*
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/



int negate(int value) {
	return (-1 * value);
}

void setDrive(int Y1, int X1, int X2) {

	// Compute values and send to motors
	motor[driveFrontRight] = Y1 - X1 + X2;
	motor[driveFrontLeft]  = Y1 + X1 + X2;
	motor[driveBackRight]  = Y1 + X1 - X2;
	motor[driveBackLeft]   = Y1 - X1 - X2;

}

int analogShift(int inputValue) {

	if (abs(inputValue) < THRESHOLD) {
		return MOTOR_OFF;
	} else if (!ENABLE_SENSETIVITY) {
		return inputValue;
	}

	int result = (1/(15500 - SENSE_MOD)) * (pow(inputValue, 3));
	return result;
	if (result < negate(MOTOR_MAX)) {
		return negate(MOTOR_MAX);
	}	else if (result > MOTOR_MAX) {
		return MOTOR_MAX;
	}	else {
		return result;
	}

}

void driveControl() {

	// Y1 & Ch4
	int drvY1 = analogShift( ((!INVERT_AXIS_4) ? (vexRT[Ch4]) : (negate(vexRT[Ch4]))) );

	// X1 & Ch3
	int drvX1 = analogShift( ((!INVERT_AXIS_3) ? (vexRT[Ch3]) : (negate(vexRT[Ch3]))) );

	// X2 & Ch1
	int drvX2 = analogShift( ((!INVERT_AXIS_1) ? (vexRT[Ch1]) : (negate(vexRT[Ch1]))) );

	setDrive(drvY1, drvX1, drvX2);

}

void setArm(int value) {
	motor[arm1] = value;
	motor[arm2] = value;
	motor[arm3] = value;
}

void armControl() {

	if (vexRT[Btn6U] == 1) {
		setArm(MOTOR_MAX);
		} else if (vexRT[Btn6D] == 1) {
		setArm(negate(MOTOR_MAX));
		} else {
		setArm(MOTOR_OFF);
	}

}

void setWrist(int value) {
	motor[wrist] = value;
}

void wristControl() {

	if (vexRT[Btn5D] == 1 || vexRT[Btn5U] == 1){
		setWrist(MOTOR_MAX);
		} else {
		setWrist(MOTOR_OFF);
	}

}

void halt() {
	setWrist(MOTOR_OFF);
	setArm(MOTOR_OFF);
	setDrive(MOTOR_OFF, MOTOR_OFF, MOTOR_OFF);
}

bool killSwitch() {
	if (vexRT[Btn7D] == 1 && vexRT[Btn8D] == 1) {
		killSwitchState = true;
		halt();
	} else if (vexRT[Btn7U] == 1 && vexRT[Btn8U] == 1) {
		killSwitchState = false;
	}

	return killSwitchState;
}
