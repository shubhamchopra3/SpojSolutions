#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(int j=0;j<n;j++)
	{
		cin>>b[j];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int k=0;k<n;k++)
	{
		c[k]=a[k]*b[k];
	}
	for(int l=0;l<n;l++)
	{
		sum=sum+c[l];
	}
	cout<<sum<<endl;
	
	
}
	return 0;
}
