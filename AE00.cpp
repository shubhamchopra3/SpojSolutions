#include <bits/stdc++.h>
using namespace std;

int main() {
int n,count=0;
cin>>n;
int t= floor(sqrt(n));

for(int i=1;i<=t;i++)
{
	count = count + (floor(n/i) - (i-1));
	
}
cout<<count<<endl;
	return 0;
}
