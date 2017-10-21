#include <stdio.h>
int func2(int* a)
{
    int b = 6;
    printf("(5):%d,%d\n", *a, b);
    *a = 8;
    printf("(6):%d,%d\n", *a, b);
    return *a+1;
}   
int func1(int a, int b)
{
    printf("(4):%d,%d\n", a, b);
    b = func2(&a);
    printf("(7):%d,%d\n", a, b);
    return a+1;
}
int main(int argc, char** argv)
{
    int a = 0;
    int b = 5;
    printf("(1):%d,%d\n", a, b);
    {
        int *c = &a;
        *c = 4;
        b = 7;
        printf("(2):%d,%d\n", a, b);
    }
    printf("(3):%d,%d\n", a, b);
    a = func1(a, b);
    printf("(8):%d,%d\n", a, b);

    return 0;
}

