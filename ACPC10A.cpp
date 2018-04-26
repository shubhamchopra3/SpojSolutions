#include <iostream>
using namespace std;

int main() {
	
int t;
while(1)
{
	float a,b,c,d[3],m[3];
	string type;
	cin>>a>>b>>c;
	if(a==0 && b==0 && c==0)
	{
		break;
	}

m[0]=b/a;
m[1]=c/b;
d[0]=b-a;
d[1]=c-b;
if(m[0]==m[1])
{
cout<<"GP"<<" "<<c*m[0]<<endl;
}
else if(d[0]==d[1])
{
cout<<"AP"<<" "<<c+d[0]<<endl;	
}



}

return 0;
}
