#include <string.h>
#include <stdio.h>

int add(int arg1, int arg2)
{
    return arg1+arg2;
}

int div(int arg1, int arg2)
{
    if(arg2 == 0)
        return 0;
    else
        return arg1/arg2;
}

int main(int argc, char **argv)
{
    
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	
	
	if((strcmp(argv[2], "+")) == 0)
	{
		printf("%d\n", add(a,b));
	}
	else if((strcmp(argv[2], "/")) == 0)
	{
		printf("%d\n", div(a,b));
	}
}

