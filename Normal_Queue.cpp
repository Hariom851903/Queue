#include <iostream>
using namespace std;
int queue[5];
int top=-1,rear=0,Max=5;
int isfull()
{
 if((top==Max-1 && rear==0)|| (rear==top))
 {
   return 1;
 }
  else{
    return 0;
  }
}
int isempty()
{
  if(top==-1 && rear==0)
  {
    return 1;
  }
  else{
    return 0;
  }
}
void push(int data)
{
    if(isfull())
    {
      cout<<"Overflow"<<endl;
    }
  else if(top==Max-1 && rear>0)
    {
    top=0;
    queue[top]=data;  
  }
  else{
    top++;
     queue[top]=data;
  }
}
int pop()
{
  if(isempty())
  {
    cout<<"Empty"<<endl;
  }
  else if(top>rear )
  {
    return queue[rear];
    }
}
  void display()
  {
    if(isempty())
    {
      cout<<"NO ELEMENTS IN QUEUE"<<endl;
    }
    else
    {
     for(int i=(rear+1);i<=top;i++)
       {
         cout<<queue[i]<<" ";
       }
      cout<<endl;
    }
}

int main() {
    int ch,val;
     cout<<"1) Push()"<<endl;
      cout<<"2) Pop()"<<endl;
       cout<<"3) Display()"<<endl;
         cout<<"4) Exit()"<<endl;
       do
         {
           cout<<"Enter Your choice=";
           cin>>ch;
           switch(ch)
           { 
             case 1:
               {
                 cout<<"Pushed value in queue=";
                 cin>>val;
                 push(val);
                 break;
               }
             case 2:
               {
                 cout<<"Delete value is="<<pop()<<endl;
                 rear++;
                 break;
               }
             case 3:
               {
                     display();
                 break;
               }
             case 4:
               {
                   cout<<"exit";
                   break;
               }
             default:
               {
                 
               cout<<"Invaild choice";
                 }
             }
         }while(ch!=4);
}
