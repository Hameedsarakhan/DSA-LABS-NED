//INSERTION, DELETION AND TRAVERSAL
//LAB 2 ARRAYS
#include<iostream>
using namespace std;
//prototypes of funtions
void traversal(int array[],int size);
void insertion(int array[],int&size,int index,int element);
void deletion(int array[],int&size,int del,int k);

int main ()
{int index,element,size,del,p,k;
cout<<"enter the size"<<endl;
cin>>size;
int array[size];
cout<<"enter the elements"<<endl;
for (int i=0;i<size;i++)
{
cin>>array[i];
}
cout<<"traversal"<<endl;
//traversal function calling 
traversal(array,size);

//INSERTION
cout<<"enter the no of elements u want to insert"<<endl;
cin>>p;
//for loop to take input
for (int j=0;j<p;j++)
{cout<<"enter the element u want to insert and index as well";
cin>>element;
cin>>index;
//function call of insertion
insertion(array,size,index,element);
}
cout<<"displaying after insertion"<<endl;
traversal(array,size);

//deletion
cout<<"enter no of element u want to delete"<<endl;
cin>>k;
for (int a=0; a<k;a++)
{cin>>del;
deletion(array,size,del,k);
}
cout<<"after deletion"<<endl;
traversal(array,size);


return 0;
}
//FUNCTION DEFINITIONS
void traversal(int array[], int size)
{
	for (int i=0;i<size;i++){
		cout<<array[i]<<"";
	}
	cout<<endl;
}
void insertion(int array[],int&size,int index,int element)
{int j=size;
while(j>=index){
	//iss mein ek aur extra space bn rahi hy tou start mein insert krna hoga tou 4 iterations
	array[j+1]=array[j];
	j=j-1;
}
array[index]=element;
size=size+1;
}

void deletion(int array[],int & size,int del, int k)
{
	int j =del;
	while(j<size)
	//iss mein start wala delete krna hoga tou 3 iterations lageingi
	{array[j]=array[j+1];
	j++;
	}
size=size-1;}


