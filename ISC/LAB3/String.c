#include <stdio.h>


int main(int argc, char** argv)
{

    char string[] = "Nejaky retezec";
    
    int i;
    for(i = 0; i < string[i] != '\0'; ++i)
    {
        if(string[i] >= 'a' && string[i] <= 'z')
            string[i] -= 32;
    }
    
    printf("%s\n", string);

    return 0;
}

