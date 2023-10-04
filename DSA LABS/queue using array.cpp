//QUEUE 
//ENQUEUE AND DEQUEUE
#include<iostream>
using namespace std;
int front=-1,rear=-1;
//prototypes
void enqueue(int queue[],int item,int size);
void dequeue(int queue[],int size);
void enqueue_peek(int queue[]);
void dequeue_peek(int queue[]);

int main()
{int queue[3];
int size=3;
cout<<"enqueue operation"<<endl;
cout<<"elements inserted"<<endl;
enqueue(queue,1,size);
enqueue(queue,2,size);
enqueue(queue,3,size);
enqueue(queue,4,size);
cout<<"dequeue operation"<<endl;
cout<< "elements inserted"<<endl;
dequeue(queue,size);
dequeue(queue,size);
dequeue(queue,size);
dequeue(queue,size);
return 0;

}
//enqueue
void enqueue(int queue[],int item,int size)
{
	if((front== 0 && rear==size-1)||(front==rear+1))
	{
		cout<<"queue overflow"<<endl;
		return;
	}
	else if (front==-1)
	{
		rear=0;
		front=0;
	}
	else if (rear==size-1)
	{
		rear=0;
	}
	
	else
	{rear+=1;
	}
	queue[rear]=item;
	enqueue_peek(queue);	
}
//dequeue
void dequeue(int queue[],int size)
{
	if((front==-1 && rear==-1))
	{
		cout<<"queue underflow"<<endl;
		return;
	}
	else if (front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if (front==size-1)
	{
		front=0;
	}
	else
	{front+=1;
	}
	dequeue_peek(queue);	
}



void enqueue_peek(int queue[])
{
	for(int i=0;i<=rear;i++)
	{cout<<queue[i]<<endl;
	}
}

void dequeue_peek(int queue[])
{
	for(int i=rear;i>=front;i--)
	{cout<<queue[i]<<endl;
	}
}


























