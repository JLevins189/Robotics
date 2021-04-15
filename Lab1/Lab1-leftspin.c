#pragma config(Motor,  motorB,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
#pragma config(Motor,  motorC,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	// Move forward at full power for 5 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(5000);			//Wait for 5 seconds before continuing on in the program.

	//Pivot to the left
	setMotorSpeed(leftMotor, -100);	//Set the leftMotor (motor1) to full power reverse (-100)
	setMotorSpeed(rightMotor, 100);//Set the rightMotor (motor6) to full power forward (100)
	sleep(1000);			//Wait for 1 second before continuing on in the program.
}