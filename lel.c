#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void foo0(void){puts("lelmarine");}
void foo1(void){puts("kekistan");}
void foo2(void){puts("roflcopter");}
void foo3(void){puts("lollerskates");}
void foo4(void){puts("lmaoplane");}
void foo5(void){puts("rorroscope");}

#define CONCAT(a, b) a##b
#define FOO(i) &CONCAT(foo, i),

void (*foos[])(void) = {
	&foo0,
	#include "magic.h"
};

int main(void)
{
	srand(time(NULL));
	int i = rand() % 6;
	foos[i]();
}
