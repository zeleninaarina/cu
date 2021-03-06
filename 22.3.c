// 22.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int bit(int num);
int main(void)
{
	int num, count;
	while (scanf("%i", &num) == 1)
	{
		count = bit(num);
		printf("%i \n", count);
	}
	return 0;
}
int bit(int num)
{
	int mask = 1;
	int count = 0;
	while (num > 0)
	{
		count += num & mask;
		num >>= 1;
	}
	return count;
}