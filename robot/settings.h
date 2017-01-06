#ifndef ROBOT_SETTINGS
#define ROBOT_SETTINGS

    //*** BEGIN ROBOT SETTINGS ***

		/* Non-programmers can edit this section to *
		 *   change robot behaviour without any     *
		 *   major programming required.            */

		/* These boolean values will flip axes.                 *
		 *   If the robot moves the wrong way when using the    *
		 *     analog stick, you will need to invert that axis. *
		 *   Just change the values from true/false to fix it.  */
		const bool INVERT_AXIS_1 = false; // Strafe left/right
		const bool INVERT_AXIS_3 = true; // Clockwise/Counterclockwise rotation
		const bool INVERT_AXIS_4 = false; // Move forwards/backwards

		// Enable or disables sensetivity.
		const bool ENABLE_SENSETIVITY = true;

		/* Amount analog stick must be moved
		 *   before motion will begin. */
		const int THRESHOLD = 15;

		/* Changes the sensetivity factor for analog sticks. *
		 *   Should be an integer greater than zero, but     *
		 *     less than one.                                */
		const int CTRL_SENSETIVITY = (1/15500); // default value: (1/15500)


		//*** END ROBOT SETTINGS ***

		/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*
		 *!! IF YOU ARE NOT A TEAM PROGRAMMER: !!*
		 *!!     DO NOT MODIFY CODE BELOW!     !!*
		 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

		const char MOTOR_MAX = 127;
    //const char MOTOR_HALF = MOTOR_MAX/2;
    const char MOTOR_OFF_COAST = 1;
    const char MOTOR_OFF = 0;

#endif
