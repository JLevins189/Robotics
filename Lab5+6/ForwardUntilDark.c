#pragma config(Sensor, S4 ,     color,          sensorEV3_Color)
#pragma config(Motor,  motorB,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
#pragma config(Motor,  motorC,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive(long nMotorRatio, long dist, long power)
{
	resetMotorEncoder(rightMotor);
	resetMotorEncoder(leftMotor);
	setMotorTarget(leftMotor, dist*20, 50);
	setMotorTarget(rightMotor, dist*20, 50);
	repeatUntil(getMotorEncoder(leftMotor) >= getMotorTarget(leftMotor) ||getMotorEncoder(rightMotor) >= getMotorTarget(rightMotor))
	{
		setMotorSyncEncoder(leftMotor, rightMotor, nMotorRatio, 30*dist, power);
		sleep(1);
}
}

task main()
{
	//makes the loop run forever so will resume on white surface
	while(1==1){
		//checks if the sensor value is greater than 20
		while(SensorValue(color)>20){
			drive(0,1,50);
		}
	}
}