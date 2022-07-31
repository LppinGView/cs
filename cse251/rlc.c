#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/*
* Simple program to compute the resonant frequency of
* an RLC circuit
*/
int main()
{
    bool valid = false;  /* Until we know otherwise */
	float l; /* Inductance in millihenrys */
	float c; /* Capacitance in microfarads */
	double frequency, piDou, utils;
	
    /* Test to see if the user entered an invalid value */    
    while(!valid){
    	printf("Input Capacitance (microfarads): ");
		scanf("%f", &c);	
		printf("Input Inductance (millihenrys): ");
		scanf("%f", &l);
    
    	if(l < 0)
		{
		    printf("You moron, you entered a negative inductance!\n");
		    valid = false;
		}
		else if(l == 0)
		{
		    printf("You are really dumb, you entered zero.\n");
		    valid = false;
		}
		else{
			valid = true;
		    printf("Okay, I guess that's reasonable\n");
		}
    }
        
	if(valid){
		piDou = 2 * M_PI;
		utils = sqrt(1000000 * 1000);
		frequency = utils / (sqrt(c * l) * piDou); /* Convert radians per sec to Hertz */
		printf("Resonant Frequency is %.3f\n", frequency);
	}     

}
