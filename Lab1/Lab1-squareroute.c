#pragma config(Motor,  motorB,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
#pragma config(Motor,  motorC,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	//Forward1
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(3000);			//Wait for 3 seconds before continuing on in the program.

	//Turn
	setMotorSpeed(leftMotor, 70);	//Set the leftMotor (motor1) to 70% power forward 
	setMotorSpeed(rightMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	sleep(0500);			//Wait for half a second before continuing on in the program.

	//Stop
	setMotorSpeed(rightMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	setMotorSpeed(leftMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	sleep(500);

	//Forward2
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(3000);			//Wait for 3 seconds before continuing on in the program.

	//Turn
	setMotorSpeed(leftMotor, 70);	//Set the leftMotor (motor1) to 70% power forward 
	setMotorSpeed(rightMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	sleep(0500);			//Wait for half a second before continuing on in the program.

	//Stop
	setMotorSpeed(rightMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	setMotorSpeed(leftMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	sleep(500);

	//Forward3
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(3000);			//Wait for 3 seconds before continuing on in the program.

	//Turn
	setMotorSpeed(leftMotor, 70);	//Set the leftMotor (motor1) to 70% power forward 
	setMotorSpeed(rightMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	sleep(0500);			//Wait for half a second before continuing on in the program.

	//Stop
	setMotorSpeed(rightMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	setMotorSpeed(leftMotor, 0); 	//Set the rightMotor (motor6) to 0 to allow turn
	sleep(500);

	//Forward4
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(3000);			//Wait for 3 seconds before continuing on in the program.


}
