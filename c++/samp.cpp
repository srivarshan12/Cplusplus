#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	int n=str.length();
	for(int i=n;i>=0;i--)
	{
		cout<<str[i];
	}
}
