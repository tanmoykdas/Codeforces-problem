#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],b,c,i,j,d,e,f;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                b=i;
                c=j;
                break;
            }
        }
    }
    d=2-b;
    e=2-c;
    d=abs(d);
    e=abs(e);
    f=d+e;
    printf("%d",f);
}