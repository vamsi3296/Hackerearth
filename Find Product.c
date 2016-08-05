#include<stdio.h>
#include<string.h>
#include<math.h>
unsigned longint arr[10001];
int i=0,n;
unsigned long int a =1,m=1000000007;
int main()
{
    scanf("%d",&n);
    while(i < n && scanf("%d",&arr[i]) == 1)
    {
        i++;
    }
    for(int j=0;j<n;j++)
    {
         a = ((a * arr[j]) % m );
    }
    printf("%d", a);
}
