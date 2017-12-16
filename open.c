#include "stdio.h"
#include "fcntl.h"

int main(int argc, char const *argv[])
{
	int a;
	a = open("who1.c",O_RDONLY);
	printf("a == %d\n",a);
	int c;
	c = creat("test.c",O_RDONLY);
	printf("%d\n",c);
	int b;
	b = open("test.c",O_RDONLY);
	printf("b == %d\n",b);
	int d;
	d = close(3);
	printf("%d\n",d);
	return 0;
}