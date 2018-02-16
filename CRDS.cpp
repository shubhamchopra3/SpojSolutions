#include<bits/stdc++.h>
using namespace std;


int main()

{
unsigned long long int t;
cin>>t;
while(t--)
{
    unsigned long long int n;
    unsigned long long int sum=0;
    cin>>n;
sum=(n*(n+1)/2)%1000007;
unsigned long long int ans;
ans=(3*sum)%1000007;
ans=ans-n;
cout<<ans<<endl;
    
    
    
    
}
return 0;
}
