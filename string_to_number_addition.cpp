//get string as input and find the sum of all numbers present in the string; 


#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cout<<"Enter string: ";
	cin>>str;
	int x=0,sum=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>'0' && str[i]<='9')
			sum=sum+(str[i]-'0');		
	}
		cout<<sum;
}
