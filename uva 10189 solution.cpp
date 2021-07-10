#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char ara[100][100];
    int m,n,i,j,x=1;
    while(1)
    {
        cin>>n>>m;
        if(m==0 && n==0)
        {
            break;
        }
        if(x!=1)
        {
            cout<<endl;
        }
        getchar();
        for(i=0;i<n;i++)
        {

                cin>>ara[i];
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(ara[i][j]=='*')
                {
                    continue;
                }
                int k=0;

                if(i+1<n && ara[i+1][j]=='*'){k++;}
                if(i+1<n && j+1<m && ara[i+1][j+1]=='*'){k++;}
                if(j+1<m && ara[i][j+1]=='*'){k++;}
                if(i-1>=0 && j+1<m && ara[i-1][j+1]=='*'){k++;}
                if(i-1>=0 && ara[i-1][j]=='*'){k++;}
                if(i-1>=0 && j-1>=0 && ara[i-1][j-1]=='*'){k++;}
                if(j-1>=0 && ara[i][j-1]=='*'){k++;}
                if(i+1<n && j-1>=0 && ara[i+1][j-1]=='*'){k++;}

                ara[i][j]=k+'0';
            }

        }
        cout<<"Field #"<<x<<":"<<endl;
        x++;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<ara[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
