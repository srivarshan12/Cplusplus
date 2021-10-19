//palindrome

#include<bits/stdc++.h>
using namespace std;

string palindrome(string str)
{
	int n=str.length();
	for(int i=0;i<n/2;i++)
{
	if(str[i]==str[n-i-1])
	{
		return "yes";
	}
	return "no";
}

}




int main(){
	string str;
	cout<<"Enter string: ";
	cin>>str;
	cout<<palindrome(str);
	
}
