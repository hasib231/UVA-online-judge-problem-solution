#include<stdio.h>
int main()
{
    int n,a,t,i,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    scanf("%d",&n);

    a = (((((n*567)/9)+7492)*235)/47)-498;
    b = (a/10)%10;
    if(b<0)
    {
        b = b*-1;
    }
    printf("%d\n",b);


}
return 0;

}
