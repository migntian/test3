#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int count=14;
    alarm(1);
	while(count--)
	{
		printf("count = %d\n",count);
	}
    return 0;
}
