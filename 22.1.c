// 22.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int chisl(char * pbin);
int main(void)
{
	char * pbin = "01001001";
	printf("%i\n", chisl(pbin));
	return 0;
}
int chisl(char * pbin)
{
	int d = 0;
	while (*pbin != '\0')
		d = (d << 1) + *pbin++ - '0';
	return d;
}