#ifndef ROBOT_SETTINGS
#define ROBOT_SETTINGS

    /*** BEGIN ROBOT SETTINGS ***/

		/* Non-programmers CAN EDIT this section to *
		 *   change robot behaviour without any     *
		 *   major programming required.            */

	  /* PROBLEMS? Try setting values back to defaults. *
	   *   They are listed to the right of every value  *
	   *     in the green comment.                      *
	   *   Also, make sure there is a semicolon after   *
	   *     each value is declared/set.                */

	  /* CODE MUST BE RE-SENT TO THE ROBOT AFTER A CHANGE! *
	   *   To do so, open "starstruckCompetition.c" and    *
	   *     press the "Download to Robot" button.         *
	   *   Make sure the cortex is ON and connected to the *
	   *     computer via a USB cable.                     */

		/* These boolean values will flip axes.                 *
		 *   If the robot moves the wrong way when using the    *
		 *     analog stick, you will need to invert that axis. *
		 *   Just change the values from true/false to fix it.  */
		const bool INVERT_AXIS_1 = false; // default: false; srafe left/right
		const bool INVERT_AXIS_3 = true; // default: true; rotation CW/CCW
		const bool INVERT_AXIS_4 = false; // default: false; move forwards/backwards

		/* Amount analog stick must be moved
		 *   before motion will begin. */
		const int THRESHOLD = 15; // default: 15

		/* Turns sensetivity control on or off.       *
		 *   When enabled, a cubic function is used   *
		 *     to determine values, giving (ideally)  *
		 *     smoother drive acceleration & control. *
		 *   When disabled, a linear function is used *
		 *     to determine values instead.           */
		const bool ENABLE_SENSETIVITY = false; // default: false

		/* Changes the sensetivity factor for analog sticks. *
		 *   Possible values range from -13000 to 13000.     */
		const float SENSE_MOD = -500; // default: -500

		/* Changes the speed of the arm mechanism/gearbox *
		     Can be negative to reverse the motor         */
		const int ARM_SPEED = MOTOR_MAX; //default: MOTOR_MAX

		/* Changes the speed of the mantis mechanism/gearbox *
		     Can be negative to reverse the motor         */
		const int MANTIS_SPEED = MOTOR_MAX; //default: (MOTOR_MAX / 2)

		/* The length of time in seconds that the robot pauses *
		 *   between autonomous commands. 0 disables pause.    */
		const float AUTON_PAUSE = 2; //default: 2

		/* Sets the autonomous mode type */
		const string AUTON_MODE = "fence"; //default: "basic"

		/* Allow pressing of Btn7L & Btn8R to execute *
		 *   autonomous code during driver control.   */
		const bool AUTON_DEBUG = true; //default: false

		/*** END ROBOT SETTINGS ***/

		/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*
		 *!! IF YOU ARE NOT A TEAM PROGRAMMER: !!*
		 *!!     DO NOT MODIFY CODE BELOW!     !!*
		 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

		bool killSwitchState; // declaration only

#endif
