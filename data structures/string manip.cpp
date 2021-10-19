/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
#include<string>
using namespace std;
int sum=0;
string temp="";
int a=0;
void addtostring(char c)
{   
    temp.append(1,c);
}

int main()
{   string s;
cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(isdigit(s[i]))
        {
            int n=s[i]-'0';
            sum=sum+n;
        }
        else{
            // cout<<typeid(s[i]).name();
            addtostring(s[i]);
            
            
        }
    }
    cout<<sum<<endl;
    cout<<temp;
    
}

