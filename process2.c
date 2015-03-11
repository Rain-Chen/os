#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	if (fork() == 0)
	{
		/* 子进程 */
		for (;;)
		{
			printf("This is child process\n");
		}
	}else{
		/* 父进程 */
		for (int i = 0; i < 1000; i++)
		{
			printf("This is parent process\n");
		}
	}
	return 0;
}
