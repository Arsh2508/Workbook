#include <stdio.h>

int main()
{
	float weight = 0;
	float height = 0;
	printf("Enter your weight in kilograms: ");
	do{
		scanf("%f", &weight);
	}while(weight <= 0);

	printf("Enter you height in meters: ");
	do{
		scanf("%f", &height);
	}while(height <= 0);

	float BMI = weight/(height*height);

	printf("BMI = %g / %g * %g = %.2f\n", weight, height, height, BMI);
	return 0;
}
