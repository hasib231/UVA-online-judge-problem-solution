#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    int ara[3100],ara2[3100];
    while(cin>>n)
    {
        bool ct=true;

        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        for(i=0;i<n-1;i++)
        {
            ara2[i]=abs(ara[i]-ara[i+1]);
        }
        sort(ara2, ara2 + n-1);

        for(i=0;i<n-1;i++)
        {
            if(ara2[i]!=i+1)
            {
                ct=false;
                break;
            }
        }
        if(ct)
        {
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }
    }
    return 0;
}
