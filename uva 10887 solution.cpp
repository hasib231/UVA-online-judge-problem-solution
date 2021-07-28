#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main()
{
    int t,a,b,k=1,cnt,i,j;
    string str,str1[1501],str2[1501];
    cin>>t;
    while(t--)
    {
        cnt=0;
        map <string,int> mp;

        mp.clear();

        cin>>a>>b;
        getchar();
        for(i=0;i<a;i++)
        {
            getline(cin,str1[i]);

        }
        for(j=0;j<b;j++)
        {
            getline(cin,str2[j]);

        }

        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                str=str1[i]+str2[j];

                if(mp[str]==0){
                    mp[str]=1;
                    cnt++;
                }
            }
        }



        cout<<"Case "<<k<<": "<<cnt<<endl;
        k++;

    }
    return 0;
}
