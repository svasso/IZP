#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc,char *argv[])
{

//vynulujem 2D pole zaznamov
    char arr[42][101];
    for (int a = 0; a<41; a++)
    {
        for (int b = 0; b<100; b++)
        {
            arr[a][b] = '\0';
        }
    }

//vynulujem pole vysledkov
    char result[42];
    for (int c = 0; c < 41; c++)
    {
        result[c] = '\0';
    }

//nacitam zaznamy do pola
    int i=0;
    while ((scanf("%s", arr[i]) != EOF)&&(i < 42))
    {
        i++;
    }

    if (argc < 2)   //ak nemame ziaden argument tak len vypiseme prve pismena nacitanych slov
    {
        char d = arr[0][0];
        int e = 0;
        printf("Enable: ");
        while ((((d <= 90) && (d >= 65)) || ((d <= 122) && (d >= 97))) && (e < 42) && (d > 0))
        {
            d = arr[e][0];
            e++;
            printf("%c", d);
        }
        return 0;
    }

    char tmp = argv[1][0];
    int t = 0;
    while ((((tmp <= 90) && (tmp >= 65)) || ((tmp <= 122) && (tmp >= 97))) && (t < 102))    //t < 43 preto lebo slova su dlzkovo obmedzene
    {
        tmp = argv[1][t];
        t++;
    }
    int arglen = t-1; //spocitam si dlzku argumentu
    argv[1][t+1] = '\0'; //pridam bin nulu na koniec, len pre istotu, asi nie je nutne
    int g = 0;
    int r = 0;
    for (int f = 0; f < 42; f++)   //teraz prechadzam vsetky zaznamy a porovnavam ich
    {
        while ((((argv[1][g] <= 90) && (argv[1][g] >= 65)) || ((argv[1][g] <= 122) && (argv[1][g] >= 97))) && (((arr[f][g] <= 90) && (arr[f][g] >= 65)) || ((arr[f][g] <= 122) && (arr[f][g] >= 97))) && (g < 101) && (f < 42) )
        {

            if (toupper(argv[1][g]) != toupper(arr[f][g]))
            {
                g = 0;    //ak sa nerovnaju, pokracujem dalsim slovom
                break;
            }

            if ((toupper(argv[1][g]) == toupper(arr[f][g])) && (toupper(argv[1][g+1]) == '\0') && (toupper(arr[f][g+1]) == '\0'))    //ak je perfect match, vypisem
            {
                printf("Found: ");
                for(int q = 0; q < arglen+1; q++)
                {
                    printf("%c", toupper(arr[f][q]));
                }
                return 0;
            }

            if ((toupper(argv[1][g]) == toupper(arr[f][g])) && (toupper(arr[f][g+1]) == '\0'))
            {
                g = 0;
                break;
            } //ak je slovo v adresari kratsie ako argument, tak viem ze sa nerovnaju a pokracujem dalsim slovom

            if ((toupper(argv[1][g]) == toupper(arr[f][g])) && (toupper(argv[1][g+1]) == '\0'))   //ak je argument kratsi ako slovo v adresari a nie je to perfect match, tak si zapisem nasledujuce pismeno slova v adresari a pokracujem dalsim slovom
            {
                if(strchr(result, toupper(arr[f][g+1])) == NULL)   //aby sme nemali duplikaty v resultoch
                {
                    result[r] = toupper(arr[f][g+1]);
                    r++;
                }
                g = 0;
                break;
            }

            g++;
        }
        g = 0;
    }
    if (r == 0)   //ak sme si neulozili ziadne pismena tak sme nic nenasli
    {
        printf("Not found");
        return 0;
    }

//este treba zoradit pole vysledkov podla abecedy - selection sort preto lebo pojdem odzaciatku aby som sa vyhol praci s bin. nulami kt su na konci
    int min, temp;
    for (int i=0; i < r; i++)
    {
        min = i;
        for (int j=i+1; j < r+1; j++)
        {
            if ((result[j] < result[min]) && (result[j] != '\0') && (result[min] != '\0'))  //musim si dat pozor na binarne nuly, tie ignorujem
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = result[i];
            result[i] = result[min];
            result[min] = temp;
        }
    }

    printf("Enable: %s", result);

    return 0;
}

