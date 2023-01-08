#include <iostream>
using namespace std;
#define N 6
int front=-1,rear1=-1,rear2=N;
int front2=N,arr[N];
bool isfull()
{
   if(front==front2-1)  
   {
     return 1;
   }
  else
   {
     return 0;
   }
}
  
void insert_beg(int data)
{
  if(isfull())
  {
    cout<<"overflow"<<endl;
  }
  else{
    front++;
    arr[front]=data;
  }
}
void insert_end(int data)
{
  if(isfull())
  {
    cout<<"overflow"<<endl;
  }
  else{
    front2--;
    arr[front2]=data;
  }
}
void pop_beg()
{
  if(front==-1 && front2!=N)
  {
     cout<<"Do you want to delete element from the Last: please Choice"<<endl;
  }
  else if(front2==N && front!=-1){
    cout<<"Do you want to delete element from the Front"<<endl;
  }
  else if(front==-1 && front2==N){
    cout<<"Queue is Empty"<<endl;
  }
else{
  rear1++;
  cout<<"delet Element is="<<arr[rear1]<<endl;
  } 
}
void pop_end()
{
  if(front==-1 && front2!=N)
  {
     cout<<"Do you want to delete element from the Last: please Choice"<<endl;
  }
  else if(front2==N && front!=-1){
    cout<<"Do you want to delete element from the Front"<<endl;
  }
  else if(front==-1 && front2==N){
    cout<<"Queue is Empty"<<endl;
  }
else{
  rear2--;
  cout<<"delet Element is="<<arr[rear2]<<endl;
  } 
}

void insert_end1(int data)
{
  if(isfull())
  {
    cout<<"overflow"<<endl;
  }
  else{
    front2--;
    arr[front2]=data;
  }
}
void display()
{
  if(front==-1 && front2==N){
    cout<<"Queue is Empty"<<endl;
  }
  else{
  cout<<"Elemet from the begoning:";
  for(int i=rear1+1;i<=front;i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<endl;
    cout<<"Elemet from the end:";
   for(int i=rear2-1;i>=front2;i--)
    {
      cout<<arr[i]<<" ";
    }   
    cout<<endl;
}
}
int main() {
      int n;
  while(true){
      int choice;
      cout<<"enter choice"<<endl;
      cout<<"1:  insert_beg"<<endl;
      cout<<"2 : insert_end"<<endl;
      cout<<"3 :pop_beg"<<endl;
      cout<<"4 :pop_end"<<endl;
      cout<<"5 :display"<<endl;
      cin>>choice;
      switch(choice){
        case 1:
          cout<<"enter num :";
          cin>>n;
          insert_beg(n);
          break;  
        case 2:
          cout<<"enter num :";
          cin>>n;
          insert_end1(n);
          break; 
        case 3:
           pop_beg();
        break;
        case 4:
           pop_end();
        break;
        case 5:
        display();
        break;
        default:
        exit(1);
        
      }
    }
}
