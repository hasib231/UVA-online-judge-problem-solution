#include<iostream>

using namespace std;

int main()
{
    int t,i,ara[10];
    cout<<"Lumberjacks:"<<endl;
    cin>>t;
    while(t--)
    {
        int so=0,bo=0;
        for(i=0;i<10;i++)
        {
            cin>>ara[i];
        }

        for(i=0;i<9;i++)
        {
            if(ara[i]<ara[i+1])
            {
                so++;
            }
            if(ara[i]>ara[i+1])
            {
                bo++;
            }
        }

        if(so==9 || bo==9)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }

    }
    return 0;
}
