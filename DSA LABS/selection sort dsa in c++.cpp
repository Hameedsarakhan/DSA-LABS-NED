//LAB 4 SELECTION SORT
#include<iostream>
using namespace std;
void traversal(int array[],int N);
void selectionsort(int array[],int N);
int main ()
{
int N;
cout<<"enter the no of elements u want in an array";
cin>>N;
int array[N];
for(int i=0;i<N;i++){
	cout<<"enter elements";
cin>>array[i];
//traversal(int array[],int N);
}
cout<<"now sorting the array"<<endl;
//FUNCTION CALLING K ANDER DATA TYPE NHI DETAY
//FOR LOOP K ANDER ; LAGATEY HAYN
selectionsort(array, N);
traversal(array,N);
return 0;
}
//FUNCTION DEFINITIONS
void traversal(int array[],int N)
{
for(int k=0;k<N;k++)
{cout<<array[k]<<endl;
}
}
void selectionsort(int array[],int N)
{
	for(int i=0;i<N;i++)
	{int min=i;
	for(int j=i+1;j<N;j++)
	{
		if (array[j]< array[min]);
		min=j;
	}
	//j k ander i dadldia aur i k ander j
		if(min!=i)
	{int temp=array[min];
	array[min]=array[i];
	array[i]=temp;
	}
	
		
	}
	

	
	
	
	
}


















