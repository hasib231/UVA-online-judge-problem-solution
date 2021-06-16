#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    while(1){

    int length1=0,length2=0,i,j,count=0,wrong=0,t,a[26],b[26];
    scanf("%d",&j);
    if(j==-1){
        break;
    }
    scanf("%s",&s1);
    length1=strlen(s1);
    scanf("%s",&s2);
    length2=strlen(s2);

    for(i=0;i<26;i++){
        a[i]=b[i]=0;
    }

    for(i=0;i<length1;i++){
        t = s1[i]-'a';
        if(a[t]==0){
        a[t]=1;
        count++;
        }
    }

    for(i=0;i<length2;i++){
        if(wrong==7 || count==0){
            break;
        }
        t = s2[i]-'a';
        if(a[t]==1){
            a[t]=0;
            b[t]=1;
            count--;
        }
        else if(b[t]==0){
            wrong++;
            b[t]=1;
        }
    }
    printf("Round %d\n",j);
    if(count==0){

        printf("You win.\n");

    }
    else if(wrong==7){


        printf("You lose.\n");

    }
    else{

        printf("You chickened out.\n");

    }

    }
    return 0;
}
