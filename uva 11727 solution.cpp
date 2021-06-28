#include<iostream>
using namespace std;

int main()
{
    int a,b,c,t,j=1;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;

    if(a>b&&a<c || a>c&&a<b)
    {
        cout<<"Case "<<j<<":"<<" "<<a<<endl;
    }

    else if(b>a&&b<c || b<a&&b>c)
    {
        cout<<"Case "<<j<<":"<<" "<<b<<endl;
    }
    else
    {
        cout<<"Case "<<j<<": "<<c<<endl;
    }

    j++;
    }
    return 0;
}

