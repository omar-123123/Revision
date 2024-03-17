/*
 ============================================================================
 Name        : InterviewExams.c
 Author      : A. Khalifa
 Version     :v 0.1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Date
{
	int x;
	int y;
	int z;
};

void returnThreeNumbers (struct Date * ptr, int x, int y, int z);
/*
int main(void) {

	struct Date a;
	a.x = 1;
	a.y = 2;
	a.z = 3;
	printf("Before: x = %d\ty = %d\tz = %d\n",a.x,a.y,a.z);
	returnThreeNumbers(&a, 5,6,7);
	printf("After:  x = %d\ty = %d\tz = %d\n",a.x,a.y,a.z);

	return EXIT_SUCCESS;
}
*/
void returnThreeNumbers (struct Date * ptr, int x, int y, int z)
{
	ptr ->x = x;
	ptr -> y = y;
	ptr -> z = z;
}
