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
	int yr;
	int day;
	int month;
}date1,date2;

void funAssignToStruct(struct Date * ptr, int a, int b, int c);
/*
int main(void) {

	date1.yr = 2004;
	date1.day = 4;
	date1.month = 12;

	printf("Year = %d\t Month = %d\t Day = %d\n", date2.yr,date2.month, date2.day );
	funAssignToStruct(&date2, 2024, 3, 1);

	printf("Year = %d\t Month = %d\t Day = %d\n", date2.yr,date2.month, date2.day );

	return EXIT_SUCCESS;
}
*/
void funAssignToStruct(struct Date * ptr, int a, int b, int c)
{
	ptr -> yr = a;
	ptr -> month = b;
	ptr -> day = c;
}
