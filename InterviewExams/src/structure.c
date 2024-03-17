/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct dis
{
	int inch;
	int feet;
};

int main()
{
	struct dis distance1 = {12, 0};
	struct dis distance2 = {5, 34};
	struct dis distance3 ;

	distance3.inch = distance1.inch + distance2.inch;
	distance3.feet = distance1.feet + distance2.feet;

	printf("Distance in inch is: %d\n", distance3.inch);
	printf("Distance in feet is: %d\n", distance3.feet);

    return 0;
}

