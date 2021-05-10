#include<stdio.h>
int main()
{
    int t,n,i,l=1;
    scanf("%d",&t);
    while(t--){
    int high=0,low=0;

    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1;i<n;i++)
    {
        if(x[i-1]<x[i])
        {
            high++;
        }
        else if(x[i-1]>x[i])
        {
            low++;
        }
    }
    printf("Case %d: %d %d\n",l,high,low);
    l++;
    }
    return 0;
}
