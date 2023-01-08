#include <iostream>
using namespace std;
#define N 5
int front=-1,rear=-1,arr[N];
void push(int data)
{
  if ((front == 0 && rear == N-1) || (rear == (front-1)%(N-1)))
  {
    cout<<"Queue is Overflow"<<endl;
  }
  else if(front == -1)
  {     /* Insert First Element */
         front = rear = 0; 
        arr[rear] = data; 
   }
   else if (rear == N-1 && front != 0) 
   { 
        rear = 0; 
        arr[rear] = data; 
    } 
    else 
   {  
        rear++; 
        arr[rear] = data; 
    }
  }  
void pop()
{
  if (front == -1) {
      cout<<"Queue Underflow"<<endl;
      return ;
   }
   cout<<"Element deleted from queue is : "<<arr[front]<<endl;
   if (front == rear) 
   {
      front = -1;
      rear = -1;
   }
   else 
   {
      if (front == N - 1)
      { 
         front = 0;
        } 
      else
      { 
         front = front + 1;
        }  
  }
}
void display() {
      int f = front, r = rear;
      if (front == -1) {
         cout<<"Queue is empty"<<endl;
         return;
      }
      cout<<"Queue elements are :"<<endl;
      if (f <= r)
      {
         for(int i=f;i<=r;i++)
           {
             cout<<arr[i]<<" ";
           }  
      }
       else
      {
         for(int i=f;i<=N-1;i++)
        {
             cout<<arr[i]<<" ";
        }  
         f = 0;
        for(int i=f;i<=r;i++)
        {
            cout<<arr[i]<<" ";
        }
      }
      cout<<endl;
}
int main() {
   int ch, val;
   cout<<"1)Insert\n";
   cout<<"2)Delete\n";
   cout<<"3)Display\n";
   cout<<"4)Exit\n";
   do {
      cout<<"Enter choice : "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:
            cout<<"Enter Element "<<endl;
            cin>>val;
            push(val);
            break;
         case 2:
            pop();
            break;
         case 3:
            display();
            break;
         case 4:
            cout<<"Exit\n";
            break;
       default:
           cout<<"invaild choice"; 
        }
     }
     while(ch!=4);
  } 
