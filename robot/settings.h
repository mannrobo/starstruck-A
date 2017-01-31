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
		const int SENSE_MOD = -500; // default: -500


		/*** END ROBOT SETTINGS ***/

		/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*
		 *!! IF YOU ARE NOT A TEAM PROGRAMMER: !!*
		 *!!     DO NOT MODIFY CODE BELOW!     !!*
		 *!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

		#include "constants.h"

		bool killSwitchState;

#endif
