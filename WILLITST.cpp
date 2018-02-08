#include<bits/stdc++.h>
using namespace std;
int isPowerOfTwo (unsigned long long int x)
{
 
  return x && (!(x&(x-1)));
}
int main()
{
    unsigned long long int t,ans;
    cin>>t;
    ans=isPowerOfTwo(t);
   if(ans==1)
   {
       cout<<"TAK"<<endl;
   }
   else if(ans==0)
   {
       cout<<"NIE"<<endl;
   }
    return 0;
}
