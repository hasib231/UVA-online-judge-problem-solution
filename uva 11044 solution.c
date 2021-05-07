#include<stdio.h>
int main()
{
    int a,b,c,i,n;

    scanf("%d",&n);

    for(i=0;i<n;i++){

    scanf("%d %d",&a,&b);
    c = (a/3)*(b/3);
    printf("%d\n",c);
    }
    return 0;
}
