#include<iostream>
using namespace std;
int gcd(int n,int m)
{
	if(m==0)
	{
		return n;	
	}
	gcd(m,n%m);
}
int lcm(int n,int m)
{
	return(n/gcd(n,m)*m);
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<lcm(n,m);
}
