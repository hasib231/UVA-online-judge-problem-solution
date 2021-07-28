#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,m,n,x,y,d;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        list <int> l;
        list <int>::iterator it;
        cin>>m>>n;
        while(m--)
        {
            cin>>x;
            l.push_back(abs(x));

        }

        while(n--)
        {
            cin>>y;
            it=find(l.begin(),l.end(),abs(y));
            if(it!=l.end()){
            l.erase(it);
            }
            else{
                cnt++;
            }


        }

        d=l.size();
        cout<<"ans = "<<d+cnt<<endl;
    }
    return 0;
}
