#include<iostream>

using namespace std;

int main()
{
    int t,i,ara[13],k=1;
    cin>>t;
    while(t--)
    {
        int count_zero=0;
        for(i=0;i<13;i++)
        {
            cin>>ara[i];
            if(ara[i]==0)
            {
                count_zero++;
            }
        }
        cout<<"Set #"<<k<<": ";

        if(count_zero>0)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        k++;
    }
    return 0;
}
