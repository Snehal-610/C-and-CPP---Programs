//I1.Write a Program to check the given year is leap year or not.
//Using nested loops
#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	printf("Enter year ::");
	scanf("%d",&y);
	
	if(y%4==0)
	{
		if(y%100==0)
		{
				if(y%400==0)
				{
				printf("Leap year");
				}
				else
				{
					printf("Not a leap year");
				}
		}
			else
			{
				printf("Leap year");
			}
	}
	else
	{
		printf("Not a leap year");
	}
}
