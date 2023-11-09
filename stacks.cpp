#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("C:/prog files/input.txt","r",stdin);
	freopen("C:/prog files/output.txt","w",stdout);
	#endif
}

class Stack{
    int top;
    int *arr;
    int size;
    public:
        Stack(int n)
        {
            this->size = n;
            arr = new int[size];
            top = -1;
        }

        void push(int ele)
        {
            if(top == size-1)
            {
                cout<<"Stack Overflow";
                return;

            }
            else
            {
                top++;
                arr[top] = ele;

            }
        }

        void pop()
        {
            if(top == -1)
            {
                cout<<"Stack Underflow";
                return;
            }
            else
            {
                top--;
            }
        }

        bool isEmpty()
        {
            return top == -1;
        }

        int Top()
        {
            if(top == -1)
            {
                cout<<"No elements to acess";
                return -1;
            }
            else
            {
                return arr[top];
            }
        }
};

int main()
{
    Takeinput();
       
}
