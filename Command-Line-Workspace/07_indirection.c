/*
 * Author: Matt Johnson
 * Subject: indirection (or dereferencing)
 * Purpose:
 * Date: 05/31/2023
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;
	int *numPtr;
	int num2;

	num = 100;
	numPtr = &num;
	num2 = *numPtr;

	printf("num = %d, numPtr = %p, address of num = %p, num2 = %d\n", num, numPtr, &num, num2);

	return 0;
}
