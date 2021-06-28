#include<stdio.h>
#include<string.h>

int main()
{
    char c;
    int x=0;
    while(scanf("%c",&c)==1){
        if(c=='"'){
            if(x%2==0){
                printf("``");
                x++;
            }
            else if(x%2==1){
                printf("''");
                x++;
            }
        }
        else{
            printf("%c",c);
        }
    }
    return 0;
}

