#include<iostream>
using namespace std;



void merge(int *a,int lb,int ub, int mid)
{
	int i,j,k,b[ub-lb+1];
	i=lb;
	j=mid+1;
	k=0;
	
	while(i<=mid && j<=ub)
	{
		if( a[i]<=a[j] )
		{
			b[k]=a[i];
			k++;
			i++;
		}
		else{
			b[k]=a[j];
			k++;
			j++;
		}
		
	}
	while(i<=mid)
	{
			b[k]=a[i];
			k++;
			i++;
			
	}
	while(j<=ub)
	{
			b[k]=a[j];
			j++;
			k++;
	}

	
	for(int i=lb;i<=ub;i++)
	{
		a[i]=b[i-lb];
		
	}
	
}

void mergesort(int *a,int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid= (lb+ub) / 2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
	
		merge(a,lb,ub,mid);
		
	}
}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
  for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
    cout<<endl;
   mergesort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
  	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	
   return 0;
}
