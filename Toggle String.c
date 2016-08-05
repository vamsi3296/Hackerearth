#include<stdio.h>
#include<ctype.h>
#include<string.h>
char str[100];
int i,c;
int main()
{
    printf("Input: ");
    scanf("%s", str);
    c = strlen(str);
    for(i=0;i<c;i++)
    {
        if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("%s",str);
}

