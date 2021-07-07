#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[10];
    int t=1;
    while(1){
            cin>>str;
        if(str[0]=='*'){
            break;
        }
        cout<<"Case "<<t<<": ";
        t++;
        if(strcmp(str,"Hajj")==0){
            cout<<"Hajj-e-Akbar"<<endl;
        }
        else if(strcmp(str,"Umrah")==0){
            cout<<"Hajj-e-Asghar"<<endl;
        }

    }
    return 0;

}
