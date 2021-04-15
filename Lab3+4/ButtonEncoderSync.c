//drive() function
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
	}	//end repeat until
	
}	//end drive function

task main()
	
	random_num=random(99);
	random_num++; //to prevent 0 as an answer for power
	
	
	displayCenteredTextLine(1, "Pressed button:");
	// Loop forever
	while (true)
	{
		// Possible values for getButtonPress() are:
		// buttonNone 	= 0,
		// buttonUp 		= 1,
		// buttonEnter 	= 2,
		// buttonDown 	= 3,
		// buttonRight 	= 4,
		// buttonLeft 	= 5,
		// buttonBack 	= 6,
		// buttonAny		= 7
		if (getButtonPress(buttonUp))
			{
				displayCenteredBigTextLine(10, "Up");
				distance=10;
			}	
		else if (getButtonPress(buttonEnter))
			{
				displayCenteredBigTextLine(40, "Enter");
				distance=40;
			}	
		else if (getButtonPress(buttonDown))
			{	
				displayCenteredBigTextLine(60, "Down");
				distance=60;
			}	
		else if (getButtonPress(buttonRight))
				{
					displayCenteredBigTextLine(80, "Right");
					distance=80;
				}	
		else if (getButtonPress(buttonLeft))
			displayCenteredBigTextLine(4, "Left");
		else if (getButtonPress(buttonAny))
			displayCenteredBigTextLine(4, "Any");
		else
			displayCenteredBigTextLine(4, "");

		// Wait 20 ms, this gives us 50 readings per second
		sleep(20);
	}
	return;
			
		//Drive at random speed for specified distance
		drive(0, distance, random_num);

}
