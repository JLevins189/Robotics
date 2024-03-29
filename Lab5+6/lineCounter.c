#pragma config(Sensor, S4,     color,          sensorEV3_Color)
#pragma config(Motor,  motorB,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
#pragma config(Motor,  motorC,          leftMotor,     tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive(long nMotorRatio, float dist, long power)
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
	int counter = 0;
	while(1==1){

		while(SensorValue(color)>30){
				drive(0,0.5,50);
			}
		counter++;
		displayTextLine(4, "%d",counter);
		setMotorSpeed(leftMotor, 0);
		setMotorSpeed(rightMotor, 0);
		sleep(500);
		while(SensorValue(color)<30){
			drive(0,0.5,50);
		}
	}



}
