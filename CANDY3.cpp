#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mp::cpp_int t;
    cin>>t;
    while(t--)
    {
    	mp::cpp_int sum=0;
    	int n;
    	cin>>n;
    	long long int a[n];
    	for(long long int i=0;i<n;i++)
    	{
    		cin>>a[i];
    		sum=sum+a[i];
    	}
    	if(sum%n==0)
    	{
    		cout<<"YES"<<"\n";
    		
    	}
    	else
    	{
    		cout<<"NO"<<endl;
    	}
    }
    
    
    
    
    
    return 0;
}
