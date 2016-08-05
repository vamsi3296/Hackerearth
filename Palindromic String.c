#include<stdio.h>
#include<string.h>
char arr[101];
int main()
{
    int flag = 0;   // 1 = TRUE, 0 = FALSE
    scanf("%s",arr);
    int c = strlen(arr);
    for(int i=0;i<c;i++)
    {
        if(arr[i] != arr[c-1-i])
        {
            printf("NO\n");
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("YES", flag);
    return 0;
}
