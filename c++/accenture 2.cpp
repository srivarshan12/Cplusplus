//Password Validation 
//
//
//You are given a function: 
//
//int CheckPassword(char str[ ], int n);
//
//
//
//The function accepts string 'std of size int as argument Implement the function which returns 1 if given string 'str' is a valid password else 0. 
//
//'str' is a valid password if it satisfies below conditions: 
//
//At least 4 characters 
//At least one numeric digit 
//At least one Capital letter 
//Must not have space or slash (/) 
//Starting character must not be a number 
//Assumption: Input string will not be empty.





#include<bits/stdc++.h>
using namespace std;
void CheckPassword(char str[ ], int n){
	bool noofchar=false;
	
	bool onedigit=false;
	bool onecaps=false;
	bool spaceorslash= true;
	bool numstart= true;
	
	noofchar     = (n>=4);
	if(str[0]>='0' && str[0]<='9'){
		numstart=false;
	}
	
	for(int i=0;i<n;i++)
	{
		if(str[i]==' ' || str[i]=='/')
		{
			spaceorslash=false;
		}
		if(str[i]>'0' && str[i]<'9')
		{
			onedigit=true;
		}
		if(str[i]>='A' && str[i]<='Z')
		{
			onecaps=true;
		}
		
	}
	
	if(onedigit && onecaps && noofchar && numstart && spaceorslash)
	{
		cout<<"correct";
	}
	else{
		cout<<"Incorrect";
	}
}
int main(){
	char str[100];
	gets(str);
	int n;
	for(n=0;n<str[n]!=0;n++);
	CheckPassword(str,n);
	
}
