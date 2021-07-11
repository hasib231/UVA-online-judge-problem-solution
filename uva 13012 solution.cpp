#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t,a,b,c,d,e;
    while(scanf("%d",&t)!=EOF)
    {
        int n=0;
        cin>>a>>b>>c>>d>>e;
        if(a==t){n++;}
        if(b==t){n++;}
        if(c==t){n++;}
        if(d==t){n++;}
        if(e==t){n++;}
        cout<<n<<endl;

    }
    return 0;
}
