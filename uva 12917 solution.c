#include<stdio.h>
int main()
{
    int p,h,o,cal,ans;
    while(scanf("%d %d %d",&p,&h,&o)!=EOF)
    {
        cal=o-h;

        if(p<=cal)
        {
            printf("Props win!\n");
        }
        else
        {
            printf("Hunters win!\n");
        }
    }
    return 0;
}
