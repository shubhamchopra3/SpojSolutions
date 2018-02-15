#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int t;
	cin>>t;
	while(t--)
	{
	  long long int a,b,s;
	  cin>>a>>b>>s;
	  long long int n;
	  n=(2*s)/(a+b);
	    long long int d;
	    d=(b-a)/(n-5);
	    long long int a1;
	    a1= a - 2*d;
	    cout<<n<<endl;
	    long long int arr[n];
	    arr[0]=a1;
	    for(long long int i=1;i<n;i++)
	    {
	        arr[i]=arr[i-1]+d;
	    }
	     for(long long int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;

}
