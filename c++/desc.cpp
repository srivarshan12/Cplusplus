#include <iostream>
using namespace std;

int main() 
{
   int m=6;
 	
  int a[m]={10,2,1,3,6,20};
  
  int temp=0;  
  
  int n=m/2;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      
		if(a[j]<a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
          
        }
    }
  }
  
    
//  for(int i=n+1;i>0;i--)
//  {
//    for(int j=n-i-1;j>=0;j--)
//    {
//      
//		if(a[j]<a[j+1])
//        {
//          temp=a[j];
//          a[j]=a[j+1];
//          a[j+1]=temp;
//          
//        }
//    }
//  }
   for(int i=0;i<m;i++)
  {
    cout<<a[i]<<" ";
  }
  
}
