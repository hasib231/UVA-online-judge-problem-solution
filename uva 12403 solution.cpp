#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    char str[10];
    int t,n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(strcmp(str,"donate")==0){
            cin>>n;
            sum=sum+n;
        }
        else{
            cout<<sum<<endl;
        }


    }
    return 0;
}
