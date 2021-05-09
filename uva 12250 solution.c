#include<stdio.h>
#include<string.h>
int main()
{
    char s[14];
    int i=1;
    while(scanf("%s",&s)!=EOF)
    {
        if(strcmp(s,"#")==0){
            break;}

        else if(strcmp(s,"HELLO")==0){
            printf("CASE %d: ENGLISH\n",i);
        }
        else if(strcmp(s,"HOLA")==0){
            printf("CASE %d: SPANISH\n",i);
        }
        else if(strcmp(s,"HALLO")==0){
            printf("CASE %d: GERMAN\n",i);
        }
        else if(strcmp(s,"BONJOUR")==0){
            printf("CASE %d: FRENCH\n",i);
        }
        else if(strcmp(s,"CIAO")==0){
            printf("CASE %d: ITALIAN\n",i);
        }
        else if(strcmp(s,"ZDRAVSTVUJTE")==0){
            printf("CASE %d: RUSSIAN\n",i);
        }
        else{
            printf("CASE %d: UNKNOWN\n",i);
        }
        i++;
    }
    return 0;
}
