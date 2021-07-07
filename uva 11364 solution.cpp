#include <iostream>

using namespace  std;

int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        int maxx=0, minn=99;
        cin>>m;
        while(m--)
        {
            cin>>n;

            if(n<minn)
            {
                minn=n;
            }
            if(n>maxx)
            {
                maxx=n;
            }

        }
        cout<<(maxx-minn)*2<<endl;
    }
}
