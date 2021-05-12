#include<stdio.h>
int main()
{
    int n,x,i,j=1;
    while(1)
    {
        int a=0,b=0;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x>0)
            {
                a++;
            }
            else if(x==0)
            {
                b++;
            }
        }
        printf("Case %d: %d\n",j,a-b);
        j++;
    }
    return 0;
}
