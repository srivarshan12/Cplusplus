#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=1;
//	int t=5;
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			cout<<" ";
		}
		
		for(int k=1;k<=i;k++)
		{
			cout<<n++;
		}
		n--;
		
		for(int l=1;l<i;l++)
		{
			cout<<--n;
		}
		
		cout<<endl;
		n=1;
	}
	return 0;
}
