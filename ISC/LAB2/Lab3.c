#include "stdio.h"

int add (int a, int b)
{
    return a+b;
}

int div (int a, int b)
{
    if (b==0)
    {
        printf("Division by 0 is not defined, returning 0\n");
        return 0;
    }
    else//not really needed beacuse of the return 0;
    {
        return a/b;
    }
}

int main (int argc, char** argv)
{
    int a,b;
    char c;
    scanf(" %c",&c);
    scanf("%d",&a);
    scanf("%d",&b);

    if (c=='+')
    {
        printf("%d\n",add(a,b));
    }
    else if (c=='/')
    {
        printf("%d\n",div(a,b));
    }
    else
    {
        printf("Unknown operation, use + for addition or / for division\n");
    }

    return 0;
}

