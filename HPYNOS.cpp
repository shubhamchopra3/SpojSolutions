#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int i=0,b=0,x,c=1;
    

    while(a[i]!='\0')
    {
            b= b + (a[i] - 48) * (a[i]-48);

            i++;
    }



    while(b>9)
    {     x=0;
        while(b>0)
        {    x=(b%10) * (b%10) +x;
             b=b/10;

        }
        b=x;
        c++;

    }
    if(b==1)
        printf("%d",c);
    else
        printf("-1");

    return 0;


}
