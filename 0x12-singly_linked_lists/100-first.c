#include<stdio.h>

/**
 * myStartupFun - Function executed before main().
 *
 * This function is attributed with the constructor attribute
 * so that it is executed before the main function.
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - Implementation of myStartupFun.
 *
 * This function prints out a specific message.
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
