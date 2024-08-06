#include <stdio.h>
int main(void)
{
	double fahrenheit, celsius;
	printf("Enter a Fahrenheit temperature: ");
	scanf("%lf", &fahrenheit);
	celsius = fahrenheit - 32.0;
	celsius = celsius * 5.0 / 9.0;
	printf("That equals %f degrees Celsius.", celsius);
	Return 0;
}
