//Remove the given word from a string - Write a program to remove the given word from the input string.
// If a substring is not present in the input string, then print the input string as it is.

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,substr;
	cout<<"Enter string: ";
	getline(cin,s);
	cout<<"Enter substring to be removed: ";
	cin>>substr;
	stringstream ss(s);
	string word="";
	string word1="";
		
	string s1="";
	s="";
//	cout<<typeid(ss).name();
	while(ss>>word)
	{	
//		cout<<typeid(word).name();
		word1=word;
		if(strcmp(substr,word1));
		{
			
			cout<<word1<<endl;	
			s=s+word+" ";	
		}
	}
//	cout<<s;
}
