#include <bits/stdc++.h>
 using namespace std;

int main()
{
   long long int n,k,window,t;
   long long int mindiff=INT_MAX;
cin>>t;
while(t--){
    cin>>n>>k;
   long long int a[n];
  
   for(long long int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
mindiff=a[k-1]-a[0];
   
    window=mindiff;
   for(long long int j=k;j<n;j++)
   {
       window=window+(a[j]-a[j-1])-(a[j-k+1]-a[j-k]);
       if(window<mindiff)
       {
           mindiff=window;
       }
   }
  cout<<mindiff<<endl;
}
    return 0;
}
