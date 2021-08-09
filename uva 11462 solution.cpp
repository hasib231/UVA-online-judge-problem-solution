#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i;
    while(cin>>n,n)
    {

        int ara[n];
        for(i=0;i<n;i++){
            cin>>ara[i];
        }
        sort(ara,ara+n);
        for(i=0;i<n-1;i++){
            cout<<ara[i]<<" ";
        }
        cout<<ara[n-1]<<endl;
    }
    return 0;
}
