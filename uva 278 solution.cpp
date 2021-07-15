#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char ch;
    int t,m,n;
    double d,e;
    cin>>t;
    while(t--)
    {

        cin>>ch>>m>>n;

        if(ch=='r')
        {
            if(m<=n)
            {
                cout<<m<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
        }
        else if(ch=='k')
        {
            d=n;
            cout<<ceil(m*d/2)<<endl;
        }
        else if(ch=='Q')
        {
            if(m<=n)
            {
                cout<<m<<endl;
            }
            else
            {
                cout<<n<<endl;
            }
        }
        else if(ch=='K')
        {
            if(m%2!=0)
            {
                d=n;
                e=m;
                cout<<ceil(e/2)*ceil(d/2)<<endl;
            }
            else if(m%2==0)
            {
                m--;
                d=n;
                e=m;
                cout<<ceil(e/2)*ceil(d/2)<<endl;
            }
        }


    }
    return 0;
}
