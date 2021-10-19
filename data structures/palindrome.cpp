#include<bits/stdc++.h>
using namespace std;
int result;
void checkpalindrome(int n)
{	int temp,sum=0,r;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<temp<<" is palindrome";
		result=temp;
	}
	else{
		cout<<temp<<" is not palindrome";
	}
}
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
//	cin>>m;

	while(m>=0)
	{
	checkpalindrome(n);
	cout<<endl;
	n++;
	m--;
	
	}	
	cout<<result;
	
}
