#include <stdio.h>
#include <string.h>


void StrDiff(char word1[42],char word2[42]) {
for ( i = 0; i < 42; i++) {
  if (strcmp(word1,word2)==0)
    {
    continue;

    }
      else break;
  }

}

void AlphaDiff(char alpha1,char alpha2) {
  if (getchar(alpha1)==getchar(alpha2)) {
    printf("%c\n",&alpha1 );
  }
}

int main(int argc,char *argv[]) {

char arr[42][101];

int i = 0;
int j = 0;
while ((scanf("%s", arr[i]) != EOF)&&(i < 42)) {
  printf("%s\n", arr[i]);
  i++; //do 40

}



return 0;
}
