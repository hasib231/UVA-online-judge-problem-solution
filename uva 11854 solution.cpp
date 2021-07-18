#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,mx1,mx2,mn1,mn2;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        {
            break;
        }

        mx1=max(a,b);
        mn1=min(a,b);
        mx2=max(mx1,c);
        mn2=min(mx1,c);

        if(((mn1*mn1)+(mn2*mn2))==(mx2*mx2))
        {
            cout<<"right"<<endl;
        }
        else{
            cout<<"wrong"<<endl;
        }

    }
    return 0;
}
