#include<stdio.h>
int main()
{
    int k,m,n,x,y;
    while(1)
    {
        scanf("%d",&k);
        if(k==0){
            break;
        }
        scanf("%d %d",&m,&n);
        while(k--)
        {
            scanf("%d %d",&x,&y);
            if(m==x || n==y){
                printf("divisa\n");
            }
            else if(m<x && n<y){
                printf("NE\n");
            }
            else if(m>x && n<y){
                printf("NO\n");
            }
            else if(m<x && n>y){
                printf("SE\n");
            }
            else if(m>x && n>y){
                printf("SO\n");
            }
        }
    }
    return 0;
}
