#include<bits/stdc++.h>

using namespace std;

int main()

{
    int ar[10001],n,i=0,l;

    while(cin>>n)

    {
        ar[i]=n;

        sort(ar,ar+i+1);

        if(i%2==0)
        {
            cout<<ar[i/2]<<endl;
        }

        else
        {
            l=ar[i/2]+ar[i/2+1];
            cout<<l/2<<endl;
        }

        i++;
    }

return 0;

}
