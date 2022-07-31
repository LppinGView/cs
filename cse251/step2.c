#include <stdio.h>
#include <math.h>

/*
* Name： lipingping
* This is my first CSE 251 c program！！!
*/
int main()
{
	double volume, diameter , hypot;
	int games;
	int wins = 11;
	int losses = 2;
	double radius = 7.88;
	double height = 12.231;
	double near = 10;
    double far = 22.5;
	
	volume = radius * radius * M_PI * height;
	games = wins + losses;
	hypot = sqrt(near * near + far * far);
	
    double bottleVolume = 1700;  /* Milliliters */
    double cupVolume = 350;      /* Milliliters */
    int numCups;

    numCups = bottleVolume / cupVolume;
    printf("Number of cups: %d\n", numCups);
	
	printf("My first C program\n");
	printf("Aren't you impressed\n");
	printf("The cylinder has a radius of %+3.1f and a height of %+3.1f\n", radius, height);
	printf("MSU had an %d-%d season in 2010!\n", wins, losses);
	printf("volume is %3.2f\n", volume);
	printf("games is %d\n", games);
	printf("hypot is %3.2f\n", hypot);
}
