#include<bits/stdc++.h>
using namespace std;
 map<long long int,long long int> a;
   
long long int states(long long int n)
{
    long long int result;
   if(a[n]!=0)
   return a[n];
   
    if(n<=4)
    {
        a[n]=n;
        return a[n];
    }
    else{
         result=states(n/2)+states(n/3)+states(n/4);
         if(result>n)
         a[n]=result;
         else
         {
         a[n]=n;
         result=n;
         }
         return result;
    }
    
}

int main()
{
  
  
   long long int n,ans;
   while(cin>>n)
   {
       ans =states(n);
       if(ans>n)
       cout<<ans<<endl;
       else cout<<n<<endl;
   }
    
    
    
    return 0;
}
