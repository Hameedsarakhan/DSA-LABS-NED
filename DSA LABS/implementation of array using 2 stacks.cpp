//LAB 6 
// IMPLEMENTATION OF TWO STACKS USING SINGLE ARRAY
#include <iostream>
using namespace std;
int size=5;
int array[5];
int top1=-1;
int top2=size;

void push1(int x, int array[])
{if (top1+1==top2){
	cout<<"stack1 overflow"<<endl;
}

else
{
	top1++;
	array[top1]=x;
}
}
void push2(int x, int array[])
{
	if (top1+1==top2)
	{
		cout<<"stack2 overflow"<<endl;
	}
	else
	{
		top2--;
		array[top2]=x;
	}
}
int pop1()
{
	if (top1==-1)
	{
		cout<<"stack1 underflow"<<endl;
		return -1;
	}
	else
	{
		int popped1=array[top1];
		top1--;
		return popped1;
	}
}
int pop2()
{
	if (top2==size)
	{
		cout<<"stack2 underflow"<<endl;
		return -1;
	}
	else
	{
		int popped2= array[top2];
		top2++;
		return popped2;
	}
}
void traverse(int array[],int size)
{

for(int i =0;i<size;i++)
{cout<<array[i]<<endl;
}

}

int main()
{
	push1(1,array);
	push1(2,array);
	push1(3,array);
	push1(4,array);
	push1(5,array);
	
	
	
	
	traverse(array,size);
	push1(64,array);
	cout<<endl;
	cout<<"the popped element is"<<pop1()<<endl;
	cout<<"the popped element is"<<pop1()<<endl;
	
	
}




































