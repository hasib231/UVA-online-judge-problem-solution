#include<stdio.h>
#include<string.h>

int findNameValue(char s[])
{

    int i,n,t=0,length=0,a=0,b=0,sum1=0,sum2=0;

    length=strlen(s);
    for(i=0;i<length;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            a=s[i]-64;
            sum1=sum1+a;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            b=s[i]-96;
            sum2=sum2+b;
        }
    }
    n=sum1+sum2;
    while(1)
    {
        while(n!=0){
                        t=t+(n%10);
                        n=n/10;
                }
                if(t/10==0)
                break;
                else{
                    n=t;
                    t=0;
                }
    }
    return t;
}

int main()
{
    char s[24];
    double percentage;
    while(gets(s)){

    double value1=findNameValue(s);
    gets(s);
    double value2=findNameValue(s);
    if(value1>value2){
        percentage=(value2*100)/value1;
        printf("%.2lf %%\n",percentage);
    }
    else{
        percentage=(value1*100)/value2;
        printf("%.2lf %%\n",percentage);
    }

    }
    return 0;

}



