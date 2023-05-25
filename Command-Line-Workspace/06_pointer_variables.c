/*
 * Author: Matt Johnson
 * Subject: pointer variables
 * Purpose: execute pointer variables
 * Date: 05/24/2023
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;	// declare variable num
	int *numPtr;	// declare pointer variable numPtr
	int num2;	// declare variable num2

	num = 100;	// assign 100 to num variable
	numPtr = &num;	// assign numPtr to point to num variable
	num2 = *numPtr;

	printf("num = %d, numPtr = %p, address of num = %p, num = %d\n", num, numPtr, &num, num2);

	return 0;
}
