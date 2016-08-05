#include<stdio.h>
int f,a=1;
int main()
{
    scanf("%d",&f);
    for(int i=1;i<=f;i++)
    {
        a = i * a;
    }
    printf("%d", a);
}
