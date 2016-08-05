#include<stdio.h>
#include<string.h>
char str[100];
int i,j;
int main()
{
    printf("String input \n");
    gets(str);
    i = strlen(str);
    printf("%d\n", i);
    for(j=0;j<i;j++)
    {
        printf("%c\n", str[j]);
    }
}

