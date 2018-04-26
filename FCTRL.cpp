#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int t,i,z;
   long long int a;
   cin>>t;
   for(z=0;z<t;z++)
   {
   	cin>>a;
   
   	long long int q=5,k=1,count=0,n=0;
   	while(a>=n)
   	{
   	
   		n=pow(q,k);
   	//	cout<<" value of n is "<<n<<endl;
   		count = count + floor(a/n);
   	//	cout<<count<<" "<<k<<endl;
   		k++;
   	}
   	cout<<count<<endl;
   }
	return 0;
}
