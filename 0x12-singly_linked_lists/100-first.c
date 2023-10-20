#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * mystarfunc - prints a message before main output.
 */
void __attribute__ ((constructor)) mystarfunc()
{
	printf(" You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
