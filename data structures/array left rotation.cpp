    #include<iostream>
    using namespace std;
    int main(){
        int size,rot;
        cin>>size;
        cin>>rot;
        int a[size];
        for(int i=0;i<size;i++)
        {
            cin>>a[i];
        }
        
   int length_of_array = size;
   int new_arr[size];
   int new_index;
   for(int i = 0; i < length_of_array; i++)
	{
		new_index = (i + rot) % length_of_array;
//  		cout<<new_index<<"=("<<i <<"+"<< rot<<") %"<< length_of_array<<endl;
		
//		cout<<new_index<<endl;
		new_arr[i] = a[new_index];
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<new_arr[i]<<" ";
	}        
        
        
}


