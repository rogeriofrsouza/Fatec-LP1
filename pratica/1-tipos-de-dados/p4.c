#include <stdio.h>

int main(void)
{	
	char v1;
	short int v2;
	long int v3;
	int v4;
	float v5;

	printf("char: %lu\nshort int: %lu\nlong int: %lu\nint: %lu\nfloat: %lu\ndouble: %lu\n", sizeof(v1), sizeof(v2),
																																													sizeof(v3), sizeof(v4),
																																													sizeof(v5), sizeof(double));

	return 0;
}
