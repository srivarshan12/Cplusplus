#include <iostream>
#include<string.h>
using namespace std;
int main()
{
 int n,q;
 cin>>n;
    string strings[n];
    
 for(int i=0;i<n;i++)
    {
        cin>>strings[i];
    }   
 cin>>q;
 string queries[q];
int result[q];
    
 for(int i=0;i<q;i++)
    {
        cin>>queries[i];
        result[i]=0;
    }   

//cout<<endl;
for(int i=0;i<q;i++)
{
    for(int j=0;j<n;j++)
    {
        if(queries[i]==strings[j])
        {
        result[i]++;
//        cout<<strings[j]<<" "<<queries[i]<<" "<<result[i]<<endl;
		        
        }    
    }
}

 for(int i=0;i<q;i++)
    {
//        cin>>queries[i];
        cout<<result[i]<<endl		;
    }   
}

