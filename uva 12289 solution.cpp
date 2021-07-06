#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char str[10];
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>str;
        if(str[0]=='o'&&str[1]=='n'||str[1]=='n'&&str[2]=='e'||str[0]=='o'&&str[2]=='e')
        {
            cout<<1<<endl;
        }
        else if(str[0]=='t'&&str[1]=='w'||str[1]=='w'&&str[2]=='o'||str[0]=='t'&&str[2]=='o')
        {
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
    return 0;
}
