void drive(long nMotorRatio, long dist, long power)
void turn90(long nMotorRatio, long power)
task main()
{
	//Intialise Variables
	int i=0;
	int perimeter=240;
	long side=perimeter/4;
	int rand_number;

	rand_number=random(1)

	if(rand_number=0)
	{
		for(i=0;i<3;i++)
		{

			//Forward 3 times
			drive(0,side,50);

			//Turn 3 times
			turn90(100,40);

		}	//end for

	}	//end if
	else
	{
		for(i=0;i<3;i++)
		{

			//Forward 3 times
			drive(0,side,50);

			//Turn 3 times
			turn90(-100,40);

		}	//end for

		//Final move forward
		drive(0,side,50);

	}	//end else


}
