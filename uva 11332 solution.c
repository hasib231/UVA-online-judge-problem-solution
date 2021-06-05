#include<stdio.h>

int SummingDigits(int y)
{
    int a=0,b=0,c=0,x=0;
    x=y;
    a=y/10;
    b=a*10;
    c=x-b;
    return c;
}
int digits(int l)
{
    int d,sum=0;
    while(l!=0){
    d=SummingDigits(l);
    sum=sum+d;
    l=l/10;}
    return sum;

}
int main()
{
    int n,m;
    while(1){

    scanf("%d",&n);
    if(n==0){break;}
    while(1){

        m=digits(n);
        if(n<=9){
            printf("%d\n",n);
            break;
        }
        n=m;
        }
    }

return 0;
}





