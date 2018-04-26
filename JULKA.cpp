#include <boost/multiprecision/cpp_int.hpp>
#include <bits/stdc++.h>
using namespace std;
namespace mp = boost::multiprecision;

int main() {
	int t=10;
	while(t--)
	{
		mp::cpp_int n,k,sum1,sum2;
		cin>>sum1>>sum2;
		
		k=(sum1+sum2)/2;
		n=sum1-k;
		if(n<0)
		n=0;
		cout<<k<<endl;
		cout<<n<<endl;
	}
	return 0;
}
