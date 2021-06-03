#include <iostream>
using namespace std;

// This is a stack implementation program
// for lesson https://www.youtube.com/watch?v=iAgr41bL09g
// for more lessons visit https://s4ifbn.com
// By Saif Bashar 2016

#define size 10

struct stack
{
    int top;
    int item[size];
} s;

void push(stack &, int);
int pop(stack &);
int full(stack);
int empty(stack);
void print(stack);

int main()
{
    s.top = -1;
    int choice, total, number;

    cout<<"1- push elements into the stack"<<endl;
    cout<<"2- pop elements from the stack"<<endl;
    cout<<"3- print stack elements"<<endl;
    cout<<"4- exit program"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    while(choice != 4)
    {
        if(choice == 1)
        {
            cout<<"how many elements to push? ";
            cin>>total;
            for(int i=1; i<=total; i++)
            {
                cout<<"pushing the element "<<i<<" ";
                cin>>number;
                push(s, number);
            }

        }   //end if for 1

        if(choice == 2)
        {
            cout<<"how many elements to pop? ";
            cin>>total;
            for(int i=1; i<=total; i++)
                pop(s);
        }   //end if for 2

        if(choice == 3)
            print(s);

        cout<<"Enter another choice: ";
        cin>>choice;
    } //end while

    return 0;
}

void push(stack &s, int number)
{
    if(full(s))
        cout<<"Stack is full"<<endl;
    else
        s.item[++(s.top)] = number;
}

int pop(stack &s)
{
    if(empty(s))
        cout<<"Stack is empty"<<endl;
    else
        return s.item[s.top--];
}

int full(stack s)
{
    if(s.top == size-1)
        return 1;
    else
        return 0;
}

int empty(stack s)
{
    if(s.top == -1)
        return 1;
    else
        return 0;
}

void print(stack s)
{
    while(s.top != -1)
    {
        cout<<s.item[s.top]<<endl;
        s.top--;
    }
}
