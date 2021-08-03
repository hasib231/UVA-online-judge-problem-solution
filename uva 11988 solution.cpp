#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<string> lt;

    char str[100001],str1[100000];
    int i,len,len2,ct=0,bol=0;

    while(scanf("%s",str)!=EOF){


    len=strlen(str);
    str[len]='[';
    str[len+1]='\0';
    len2=strlen(str);

    str1[0]='\0';
    for(i=0; i<len2; i++)
    {

        if(str[i]!='[' && str[i]!=']')
        {
            str1[ct]=str[i];
            str1[ct+1]='\0';
            ct++;
        }
        else if(bol==1)
        {
            if(str1[0]!='\0'){
                lt.push_front(str1);
                str1[0]='\0';
                ct=0;
            }
        }
        else if(bol==2)
        {
            if(str1[0]!='\0'){
                lt.push_back(str1);
                str1[0]='\0';
                ct=0;
            }
        }
        else if(bol==0)
        {
            if(str1[0]!='\0'){
                lt.push_front(str1);
                str1[0]='\0';
                ct=0;
            }
        }

        if(str[i]=='[')
        {
            bol=1;
        }
        else if(str[i]==']')
        {
            bol=2;
        }
    }

    for(auto j=lt.begin(); j!=lt.end(); j++)
    {
        cout<<*j;
    }
    cout<<endl;
    lt.clear();
    }
    return 0;
}
