/**
 * @file Ptr_not_costant_data_costant.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief Puntator not costant and data costant in c
 *
 * @ingroup Ptr_not_costant_data_costant
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>

void printChar(const char *sPtr);

int main()
{
	char s[] = "Hello Davide";

	puts("The string is: ");
	printChar(s);
	puts("");

	return 0;
}

void printChar(const char *sPtr)
{
	for(;*sPtr != '\0'; ++sPtr)
	{
		printf("%c", *sPtr);
	}
}