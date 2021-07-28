#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,n,ct;
    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
        {
            break;
        }

        ct=0;
        map <int,int> mp;

        for(i=0;i<a;i++)
        {
            cin>>n;
            mp[n]=1;
        }
        for(i=0;i<b;i++)
        {
            cin>>n;
            if(mp[n]==1){
                ct++;
            }
        }
        cout<<ct<<endl;


    }
    return 0;
}
