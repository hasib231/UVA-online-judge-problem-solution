#include<stdio.h>
int main()
{
    char s[10][100];
    int n[10],i,t,k=1;
    scanf("%d",&t);
    while(t--){
            int max=0;
    for(i=0;i<10;i++){
        scanf("%s %d",s[i],&n[i]);
    }
    for(i=0;i<10;i++){
            if(max<n[i]){
                max=n[i];
            }
    }
    printf("Case #%d:\n",k);
    for(i=0;i<10;i++){
        if(n[i]==max){
            printf("%s\n",s[i]);
        }
    }
    k++;
    }
    return 0;

}
