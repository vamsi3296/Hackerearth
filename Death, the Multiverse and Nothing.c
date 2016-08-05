#include<stdio.h>

int n,i,mat[11];
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&mat[i]);
    }
    for(i=0;i<n;i++)
    {
        mat[i] = mat[i] - 1;
        printf("%d\n",mat[i]);
    }
}
