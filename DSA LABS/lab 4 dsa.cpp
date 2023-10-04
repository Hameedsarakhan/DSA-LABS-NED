//LAB 4
//BUBBLE SORT ALGORITHM
#include<iostream>
using namespace std;
void traversal(int array[],int N);
void sorting(int array[],int N);
int main ()
{int N;
{cout<<"enter the no of elements u want in an array";
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
 sorting(array, N);
 traversal(array,N);
return 0;
}
}
void traversal(int array[],int N)
{
for(int k=0;k<N;k++)
{cout<<array[k]<<endl;
}
}
void sorting(int array[], int N)
{int j=0;
for(int k=0;k<N-1;k++)
{int flag=0;
for(int j=0;j<N-k-1;j++){
	if(array[j]>array[j+1])
	{int temp;
	temp=array[j+1];
	array[j+1]=array[j];
	array[j]=temp;
	flag=1;
	
	}
}
	if (flag==0)
	{ break;
	
	}
	else{
		j=j+1;
	}
}
}
