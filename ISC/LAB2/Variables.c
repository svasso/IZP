#include <stdio.h>
int func2(int a, int b)
{
    b = b - a;
    printf("(5) -> %d, %d\n", a, b);
    return b;
}
int func1(int a, int b)
{
    printf("(4) -> %d, %d\n", a, b);
    a = func2(a, b);
    printf("(6) -> %d, %d\n", a, b);
    return a + b;
}
int main(int argc, char** argv)
{
    int a = 2;
    int b = 5;
    
    printf("(1) -> %d, %d\n", a, b);
    {
        int a = 4;
        printf("(2) -> %d, %d\n", a, b);
    }
    {
        int a = 4;
        b = 8;
        printf("(3) -> %d, %d\n", a, b);
    }
    a = func1(a, b);
    printf("(7) -> %d, %d\n", a, b);
    
    return 0;
}

