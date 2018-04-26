#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
		cin>>n;
	while(n)
	{
		
		if(n==0)
		{
			break;
		}
		string s;
		cin>>s;
		int rows;
		rows=(s.length())/n;
	
		char a[rows][n];
		int k=0;
		for(int i=0;i<rows;i++)
		{
			if(i%2==0)
				{for(int j=0;j<n;j++)
				a[i][j]=s[k++];
				}
				
			else
			{
				for(int j=n-1;j>=0;j--)
					a[i][j]=s[k++];
			}
			
		}
		for(int l=0;l<n;l++)
		{
			for(int m=0;m<rows;m++)
			{
				cout<<a[m][l];
			}
		}
		cout<<endl;
		cin>>n;
	}
	return 0;
}
