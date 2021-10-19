#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter number as strings: ";
	cin>>s;
	stringstream ss(s);
	int x=0;
	ss>>x;
	cout<<x;
	return 0;
}
