#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&t);
    int ara[200000];
    while(t--){
            int max=-200000,max_dif=-200000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n-1;i++){
            if(ara[i]>max){
                max=ara[i];
            }
            if(max-ara[i+1]>max_dif){
                max_dif=max-ara[i+1];
            }


    }

    printf("%d\n",max_dif);

    }
    return 0;

}
