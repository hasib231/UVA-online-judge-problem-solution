#include<iostream>
using namespace std;
int main()
{
    int n,k,p,i,j=1,t;
    cin>>t;
    while(t--)
    {

    cin>>n>>k>>p;

    while(p--)
    {
        k++;
        if(k==n+1)
        {
            k=1;
        }

    }
    cout<<"Case "<<j<<": "<<k<<endl;
    j++;
    }
    return 0;
}
