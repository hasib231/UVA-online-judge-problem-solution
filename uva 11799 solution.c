#include<stdio.h>
int main()
{
    int i,n,t,j=1;
    scanf("%d",&t);
    while(t--){

    scanf("%d",&n);
    int x[n];
    int max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    max=x[0];
    for(i=1;i<n;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }
    }
    printf("Case %d: %d\n",j,max);

    j++;
    }
    return 0;

}
