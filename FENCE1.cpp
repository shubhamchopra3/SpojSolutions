#include<bits/stdc++.h>
#define pi 3.14159265359
using namespace std;

int main()

{
long long int n;
while(1)
{
   
    cin>>n;
    if(n==0)
    {
        break;
    }
    double ans;
    ans= (n*n)/(2*pi);
   printf("%.2lf",ans);
   cout<<endl;
}
return 0;
}
