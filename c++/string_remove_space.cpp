#include<bits/stdc++.h>
using namespace std;
void removespace(string str)
{
	stringstream s(str);
	string word="";
	string str1="";
	while(s >> word)
	{
		str1=str1+word;
	}
	cout<<str1;
}
int main(){
	cout<<"Enter string: ";
	string str;
	getline(cin,str);
	removespace(str);
}
