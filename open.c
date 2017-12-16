#include "stdio.h"
#include "fcntl.h"

int main(int argc, char const *argv[])
{
	int a;
	a = open("who1.c",O_RDONLY);
	printf("a == %d\n",a);
	int b;
	b = open("pwd.c",O_RDONLY);
	printf("b == %d\n",b);
	printf("%d\n",O_SEARCH);
	return 0;
}