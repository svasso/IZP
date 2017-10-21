#include <stdio.h>

void compute(int a, int b, int* sum, int* sub, int* mul, int* div)
{
    *sum = a + b;
    *sub = a - b;
    *mul = a * b;
    *div = a / b;
}

int main(int argc, char** argv)
{

    int a, b, c, d;
    
    compute(15, 3, &a, &b, &c, &d);
    
    printf("%d, %d, %d, %d\n", a, b, c, d);

    return 0;
}

