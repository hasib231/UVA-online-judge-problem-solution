#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int n,m,m2,i,j,dif,cdif,t=1;
    while(1){

    cin>>n;
    if(n==0){
        break;
    }
    cout<<"Case "<<t<<":"<<endl;
    t++;
    int ara[n];

    for(i=0;i<n;i++){
        cin>>ara[i];
    }

    cin>>m;
    while(m--){
    cin>>m2;
    dif=ara[0]+ara[1];

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
              cdif=ara[i]+ara[j];

              if(abs(dif-m2)>abs(cdif-m2)){
                 dif=cdif;
                 }
            }

        }
        cout<<"Closest sum to "<<m2<<" is "<<dif<<"."<<endl;
    }
    }
    return 0;

}
