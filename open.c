#include "stdio.h"
#include "fcntl.h"

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

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
	int e;
	e = lseek(4,1,SEEK_CUR);
	printf("%d\n",e);

	int fd;
	if ((fd = creat("file.hole",FILESEC_MODE)) < 0)
	{
		err_sys("creat error");
	}

	if (write(fd,buf1,10) != 10)
	{
		err_sys("buf1 write error");
	}

	if (lseek(fd,16384,SEEK_SET) == -1)
	{
		err_sys("lseek error");
	}

	if (write(fd,buf2,10) != 10)
	{
		err_sys("buf2 write error");
	}
	// if (lseek(STDIN,0,SEEK_CUR) == -1)
	// {
		// printf("can not seek\n");
	// }
	// else{
		// printf("seek ok\n");
	// }

	// int d;
	// d = close(3);
	// printf("%d\n",d);
	return 0;
}