#include <stdio.h>

int putchar(int ic) {
	char c = (char) ic;
	printf(&c, sizeof(c));
	return ic;
}
