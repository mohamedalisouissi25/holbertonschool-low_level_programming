#include <stdio.h>

void prints_beat(void) __attribute__ ((constructor));

/**
  * prints_beat - function before main
  */

void prints_beat(void)

	{
		printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");
	}
