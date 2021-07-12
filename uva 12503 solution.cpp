#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //getchar();
        int ans=0,i,ara[n];
        string str,str2;

        for(i=0;i<n;i++)
        {
            cin>>str;
            if(str=="LEFT")
            {
            ans--;
            ara[i]=-1;
            }
            else if(str=="RIGHT")
            {
            ans++;
            ara[i]=1;
            }
            else
            {
                cin>>str2>>k;
                k--;
                ans=ans+ara[k];
                ara[i]=ara[k];
            }

        }
        cout<<ans<<endl;


    }
    return 0;

}
