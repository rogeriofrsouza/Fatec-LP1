#include <stdio.h>

int main(void)
{	
	unsigned char cNum;
	int iNum;

	cNum = 0;
	iNum = 0;

	while (iNum <= 260)
	{	
		printf("%d %d\n", cNum, iNum);
		
		cNum++;
		iNum++;
	}

	return 0;
}
