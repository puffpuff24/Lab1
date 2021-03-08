#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "tasks.h"

void main()
{
	
	int iTaskNumber = 0;

	printf("Please, enter task number (from 1 to 11): ");
	scanf("%i", &iTaskNumber);

	if (iTaskNumber == 1)
	{
		Tasks::FirstTask();
	}
	else if (iTaskNumber == 2)
	{
		Tasks::SecondTask();
	}
	else if (iTaskNumber == 3)
	{
		Tasks::ThirdTask();
	}
	else if (iTaskNumber == 4)
	{
		Tasks::FourthTask();
	}
	else if (iTaskNumber == 5)
	{
		Tasks::FifthTask();
	}
	else if (iTaskNumber == 6)
	{
		Tasks::SixthTask();
	}
	else if (iTaskNumber == 7)
	{
		Tasks::SeventhTask();
	}
	else if (iTaskNumber == 8)
	{
		Tasks::EighthTask();
	}
	else if (iTaskNumber == 9)
	{
		Tasks::NinthTask();
	}
	else if (iTaskNumber == 10)
	{
		Tasks::TenthTask();
	}
	else if (iTaskNumber == 11)
	{
		Tasks::EleventhTask();
	}
	else
	{
		printf("Invalid task number\n");
	}
}