#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack <char> a;
		char c;
		string outstr;
		int len = s.length();
		for(int i=0;i<len;i++)
		{
			if(s[i]>='a' && s[i]<='z')
			{
			outstr=outstr+s[i];
			}
		else if(s[i]=='(')
			{
				a.push(s[i]);
			}
			else if(s[i]==')')
			{
				while(!a.empty() && a.top()!='(')
				{
					c=a.top();
					a.pop();
					outstr=outstr+c;
					
				}
				if(a.top()=='(')
				{
					c=a.top();
					a.pop();
				}
			}
			else
			{
				while(!a.empty() && prec(s[i])<=prec(a.top()))
				{
					c=a.top();
					outstr=outstr+c;
					a.pop();
				}
				a.push(s[i]);
			}
			
		}
		
		while(!a.empty())
		{
			c=a.top();
			outstr=outstr+c;
			a.pop();
		}
		cout<<outstr<<endl;
		
		
		
	}
	return 0;
}
