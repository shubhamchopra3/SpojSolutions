#include <iostream>
using namespace std;

int main() {
	
int t;
while(1)
{
cin>>t;
if(t==0)
{
	break;
}
int ans;
ans= t*(t+1)*(2*t+1);
ans=ans/6;
cout<<ans<<endl;
}

	return 0;
}
