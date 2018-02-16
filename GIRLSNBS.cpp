#include<bits/stdc++.h>
using namespace std;

int main()

{
long long int g;
long long int b;
while(1)
{
   
    cin>>g>>b;
    if(g==-1 && b==-1)
    {
        break;
    }
   long long int maxnum,minnum;
   maxnum=max(g,b);
   minnum=min(g,b);
  minnum=minnum+1;
  float ans=(float)maxnum/(float)minnum;
 ans=ceil(ans);
 cout<<ans<<endl;
}
return 0;
}
