#include <stdio.h>

/* 02/18/2020 CLASSWORK */

int main(void) {
	int c = 0;
	while (c < 127) {
		if (c >= 'a' && c <= 'z') {
		putchar(c - 32);
		}
	        else {
		putchar(c);
		}
		c++;
	}
}
