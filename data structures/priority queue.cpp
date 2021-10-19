#include<iostream>
 using namespace std;
void push1(int);
void enqueue();
void display();
int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;
int main()
{
    int n;
    cin>>n;
  cout<<"Enter the number of values to be inserted:"<<endl;
cout<<"Enter the values to be inserted in priority queue:"<<endl;
cout<<"The priority queue elements are:"<<endl;
    for(int i=1;i<=n;i++)
    {
     enqueue();
    }
            display();
  return 0;       
}
void enqueue()
{
  int data, i;
cin>>data;
    push1(data);
    count++;
}
void push1(int data)
{
    st1[++top1] = data;
}
void display()
{
    int i,j,temp;
 
    for (i = 0;i <= top1;i++)
    {
      for(j=i+1;j<=top1;j++)
      {
        if(st1[i]<st1[j])
        {
         temp=st1[i];
          st1[i]=st1[j];
          st1[j]=temp;
        }
        
      }
    }
  for(int i=0;i<=top1;i++)
  {
    cout<<st1[i]<<" ";
  }
}
