


/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*
 *!! IF YOU ARE NOT A TEAM PROGRAMMER: !!*
 *!!     DO NOT MODIFY CODE BELOW!     !!*
 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/


void autonBasic() {
	setDrive(0, -100, 0);
	sleepHaltPause(2);

	setArm(negate(MOTOR_MAX));
	sleepHaltPause(1);

	setMantis(negate(MOTOR_MAX));
	sleepThenHalt(1.25);
	//autonPause();

	//setDrive(0, 80, 0);
	//sleepThenHalt(1);
	//autonPause();

	//setDrive(0, -80, 0);
	//sleepThenHalt(1.3);
}

void autonFence() {
	setArm(negate(MOTOR_MAX));
	sleepThenHalt(.5);
	setDrive(0, 100, 0);
	sleepHaltPause(2);
	//setDrive(0,0,-60);
	//sleepHaltPause(.5);
	setArm(negate(MOTOR_MAX));
	sleepThenHalt(1.3);
	setMantis(negate(MOTOR_MAX));
	sleepThenHalt(.5);
	//setDrive(0, -60, 0);
	//sleepThenHalt(.25);
	//setDrive(0, 0, 100);
	//sleepThenHalt(5);
	//setDrive(100, 0, 0);
	//sleepThenHalt(2);
}

void autonPreLoadLoop() {
	setDrive(0,100,0);
	sleepThenHalt(1);
	setArm(negate(MOTOR_MAX));
	sleepThenHalt(1.2);
}

void autonRun(const string selection) {
	if (selection == "basic") {
		autonBasic();
	} else if (selection == "fence") {
		autonFence();
	} else {
		autonBasic();
	}
}

void autonOverrideDetection() {
	if (AUTON_DEBUG && (vexRT[Btn7L] == 1 && vexRT[Btn8R])) {
		autonRun(AUTON_MODE);
		permanentHalt();
	}
}
