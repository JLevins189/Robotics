

#pragma config(Motor,  motorA,           ,             tmotorEV3_Large, openLoop, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, openLoop, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, openLoop, driveRight, encoder)
#pragma config(Motor,  motorD,           ,             tmotorEV3_Large, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void swing90DegreesLeft(){
	sleep(000);
	setMotorSpeed(rightMotor, 45);	//imbalance of power due to no PID
	setMotorSpeed(leftMotor, -50);	used to turn left
	sleep(600);
}
void swing90DegreesRight(){
	sleep(000);
	setMotorSpeed(leftMotor, 50);	//the opposite of the turn left function
	setMotorSpeed(rightMotor, -45);	
	sleep(625);
}
void moveBackwardsFor1second(){
	sleep(000);
	setMotorSpeed(leftMotor, -65);		//synchronised values to go straight
	setMotorSpeed(rightMotor, -50);
	sleep(1000);
}
void turn90DegreesLeft(){
	setMotorSpeed(leftMotor, 0);		//no power needed for turn
	setMotorSpeed(rightMotor, 75);		//slower speed for better accuracy
	sleep(620);
}
void turn90DegreesRight(){
	setMotorSpeed(rightMotor, 0);		//opposite of turn left
	setMotorSpeed(leftMotor, 85);
	sleep(640);
}
void moveForwardFor1second(){
	sleep(000);
	setMotorSpeed(leftMotor, 65);		//same as reverse with positive values
	setMotorSpeed(rightMotor, 50);
	sleep(1000);
}
task main()
{
	//function calls
turn90DegreesLeft();
turn90DegreesRight();
moveForwardFor1second();
swing90DegreesLeft();
swing90DegreesRight();
moveBackwardsFor1second();



}
