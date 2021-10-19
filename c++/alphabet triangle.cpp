#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch='A';
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<ch++;
		}
		ch--;
		for(int m=1;m<i;m++)
		{
			cout<<--ch;
		}
		cout<<endl;
		ch='A';
	}
	return 0;
}
