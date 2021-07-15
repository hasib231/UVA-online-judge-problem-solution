#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int m,n,i;
    double d;
    while(cin>>m>>n)
    {
        int sum=0,k=1;
        if(m==0 && n==0)
        {
            break;
        }
        else if(m==1)
        {
            cout<<n<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        }
        else if(n==1)
        {
            cout<<m<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        }
        else if(m==2)
        {
            for(i=0;i<n;i++){
                if(k==1||k==2){
                sum=sum+2;
                }
                k++;
                if(k==5)
                {
                    k=1;
                }
                }
                cout<<sum<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        }
        else if(n==2)
        {
            for(i=0;i<m;i++){
                if(k==1||k==2){
                sum=sum+2;
                }
                k++;
                if(k==5)
                {
                    k=1;
                }
                }
                cout<<sum<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        }
        else{
        d=n;
        cout<<ceil(m*d/2)<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        }

    }
    return 0;
}
