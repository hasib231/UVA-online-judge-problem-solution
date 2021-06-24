//still show compiler error in uva judge
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char s1[210],s2[210];
    scanf("%d",&t);
    while(t--){
    int len1=0,len2=0,len3=0,i,j,empty=0;
    scanf("%s %s",&s1,&s2);
    strrev(s1);
    strrev(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1>len2){
        len3=len1;
        empty=len3-len2;}
    else{
        len3=len2;
        empty=len3-len1;
    }
    int arr[len3];
    int arr1[len3];
    int arr2[len3];

    for(i=0;i<len3;i++){
        arr1[i]=0;
        arr2[i]=0;
    }

    if(len1>len2){
    for(i=0;i<len3;i++){
        arr1[i]=s1[i]-48;
    }
    for(i=empty,j=0;i<len3;i++){
        arr2[i]=s2[j]-48;
        j++;
    }
    }
    else{
       for(i=empty,j=0;i<len3;i++){
        arr1[i]=s1[j]-48;
        j++;
    }
    for(i=0;i<len3;i++){
        arr2[i]=s2[i]-48;
    }
    }

    int k=0,n=0,check1=0;

        for(i=len3-1;i>=0;i--){
                n=arr1[i]+arr2[i];
                if(check1==1)
                {
                    n=n+1;
                    check1=0;
                }

                if(n>9){
                    n=n%10;
                    check1=1;
                }
                arr[k]=n;
                k++;
                n=0;

    }
    int check_zero=0;
    if(check1==1)
    {
        arr[k]=1;
    for(i=0;i<=k;i++){
            if(arr[i]!=0){
                check_zero=1;
            }
            if(check_zero==1){
        printf("arr1[%d]= %d\n",i,arr[i]);
            }
    }
    }
    else{
    for(i=0;i<k;i++){
            if(arr[i]!=0){
                check_zero=1;
            }
            if(check_zero==1){
        printf("arr0[%d]=%d\n",i,arr[i]);
    }
    }
    }
    printf("\n");
}
return 0;
}
