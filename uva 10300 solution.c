#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int n,a,b,c,x=0,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        x=a*c;
        sum=sum+x;
    }
    printf("%d\n",sum);
    }
    return 0;

}
