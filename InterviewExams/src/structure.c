/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define ARRAY_SIZE 2

typedef struct
{
	char name [20];
	int id;
	int grade;
}Student;

int insertFun (Student * ptrToStruct, int array_size);
void printArrStruct (Student * ptrToStruct, int array_size);

typedef enum
{
	FALSE = 0, TRUE = 1
}bool;


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	Student arr_struct [ARRAY_SIZE];
	insertFun(arr_struct, ARRAY_SIZE);
	printArrStruct(arr_struct, ARRAY_SIZE);
    return 0;
}

int insertFun (Student * ptrToStruct, int array_size)
{
	int retValue = FALSE;
	int i;
	for (i = 0; i< array_size; i++)
	{
		printf("Enter student number (%d) name: ", (i+1));
		scanf("%s", ((ptrToStruct + i)->name));
		printf("Enter student ID: ");
		scanf("%d", &((ptrToStruct + i) ->id));
		printf("Enter student grade: ");
		scanf("%d", &((ptrToStruct + i)->grade));
	}
	retValue = TRUE;
	return retValue;
}

void printArrStruct (Student * ptrToStruct, int array_size)
{
	int i;
	printf("=================================\n");
	for (i = 0; i< array_size; i++)
	{
		printf("Name of student n.%d is: %s\n",(i+1),((ptrToStruct + i)->name));
		printf("ID of student n.%d is: %d\n",(i+1),((ptrToStruct + i)->id));
		printf("Grade of student n.%d is: %d\n",(i+1),((ptrToStruct + i)->grade));
		printf("=================================\n");
	}
}
