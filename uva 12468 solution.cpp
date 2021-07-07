#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int m,n,ans1,ans2,maxx,minn,final_ans;
    while(1){
        cin>>m>>n;
        if(m==-1 && n==-1){
            break;
        }
        ans1=abs(m-n);

        maxx=max(m,n);
        minn=min(m,n);
        ans2=(100-maxx)+minn;

        final_ans=min(ans1,ans2);

        cout<<final_ans<<endl;


    }
    return 0;
}
