#include<stdio.h>
int l,n,arr[2];
int main()
{
    scanf("%d",&l);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int j = 0;
        while(j < 2 && scanf("%d",&arr[j]) == 1)
        {
            j++;
        }
        int w = arr[0];
        int h = arr[1];
        if(w >= l && h >= l)
        {
            if(w == h)
            {
                printf("ACCEPTED\n");
            }
            else if(w != h)
            {
                printf("CROP IT\n");
            }
        }
        else
            printf("UPLOAD ANOTHER\n");
    }
}
