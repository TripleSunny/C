/* 
20180130 BMI Program
Author: Sunny Fu
*/

#include <stdio.h>
#include <stdlib.h>

float square(float);

int main(void)
{
	//Define variables: Height Weight Result
	int Height, Weight;
	float Result;

	//User input
	printf("Input your height(in cm): ");
	scanf("%d", &Height);
	printf("Input your weight(in kg): ");
	scanf("%d", &Weight);

	//Calculation
	Result = (float)(Weight/ square(Height/100.0));

	//Print Result
	printf("Your BMI is: %lf", Result);


	return(0);
}

float square(float a)
{
	return(a*a);
}