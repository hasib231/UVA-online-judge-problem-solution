#include<iostream>

using namespace std;

int main()
{
    int t,i,ara[5],n;
    cin>>t;
    while(t--)
    {
        int count_zero=0;
        for(i=0;i<5;i++)
        {
            cin>>ara[i];
        }
        for(i=1;i<5;i++)
        {
            n=ara[i-1]+1;
            if(ara[i]!=n)
            {
                count_zero++;
            }
        }

        if(count_zero>0)
        {
            cout<<"N"<<endl;
        }
        else{
            cout<<"Y"<<endl;
        }

    }
    return 0;
}
