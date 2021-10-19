#include<iostream>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	if(b==0)
	{
		return a;
	}
	gcd(b,a%b);
}
ll lcm(int arr[],int n)
{
	ll ans=arr[0];
	for(int i=1;i<n;i++)
	{
		ans=(ans*arr[i])/gcd(ans,arr[i]);
	}
	return ans;
}
int main(){
	ll n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<lcm(arr,n);
}
