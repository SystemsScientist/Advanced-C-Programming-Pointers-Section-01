#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num;            // declare variable num
    int *numPtr;        // declare pointer variable numPtr
    int num2;           // declare variable num2

    num = 100;          // assign 100 to num variable
    numPtr = &num;      // assign numPtr to point to num variable
    num2 = *numPtr;

    printf("num = %d, numPtr = %p, address of num = %p, num2 = %d\n", num, numPtr, &num, num2);

    return 0;
}
