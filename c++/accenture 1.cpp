#include<bits/stdc++.h>
using namespace std;

int OperationsBinaryString(char *str){
	int len=0;
	int ans=str[0]-'0';
	
	for(len=0; str[len]!='\0'; len++);	
	for(int i=1;i<len;i=i+2)
	{
		int j=i+1;
		if(str[i]=='C')
		{
			ans= ans ^ str[j]-'0';
		}
		if(str[i]=='A')
		{
			ans= ans && str[j]-'0';
		}
		if(str[i]=='B')
		{
			ans= ans || str[j]-'0';
		}
	}
	return ans;
}



int main(){
	char str[100];
	cin>>str;
	cout<<OperationsBinaryString(str);
}
