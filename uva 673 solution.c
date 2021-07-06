#include<stdio.h>
#include<string.h>

int main()
{
    char str[140],stack[140],ch,last_char;
    int len,i,t;
    scanf("%d",&t);
    getchar();
    while(t--){
            int top=0;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
            ch=str[i];
        if(ch=='\0'){
        printf("Yes\n");
        break;
        }
        else if(ch=='(' || ch=='['){
            stack[top]=ch;
            top++;
           }
        else if(ch==')'){
                last_char=stack[top-1];
            if(last_char=='('){
                top--;
               }
               else if(last_char!='('){
                        top++;
                       }
        }
        else if(ch==']'){
                last_char=stack[top-1];
            if(last_char=='['){
                top--;
               }
               else if(last_char!='['){
                        top++;
                       }
        }


    }
    if(top==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    }
}
