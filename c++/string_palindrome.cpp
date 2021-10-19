//program to check whether a string is palindrome

#include<bits/stdc++.h>
using namespace std;
string palindrome(string s,int n)
{
	for(int i=0;i<=n/2;i++)
	{
		if(s[i]!=s[n-1-i])
		{
			return "No palidrome";
		}
		return "Palindrome";
	}
}

int main(){
	string s="";
	getline(cin,s);
	int n=s.length();
	cout<<palindrome(s,n);
}
