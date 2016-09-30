#include <stdio.h>
void mystery3(int a, int b) {
	if (~(a & b) == (~a | b))
		printf("It worked!\n");
}
