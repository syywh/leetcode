// work.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"

int main()
{
	int i;
	char buffer[33];
	printf("Enter a number: ");
	scanf_s("%d", &i);
	_itoa_s(i, buffer, 10);
	printf("decimal: %s\n", buffer);
	_itoa_s(i, buffer, 16);
	printf("hexadecimal: %s\n", buffer);
	_itoa_s(i, buffer, 2);
	printf("binary: %s\n", buffer);
	while (1) {}
    return 0;
}

