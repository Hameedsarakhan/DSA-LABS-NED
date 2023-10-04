//LAB 3 LINEAR AND BINARY SEARCH
#include<iostream>
using namespace std;
//prototype
void search(int item,int loc, int arr[]);
int main()
{int loc=0, item;
//array initialize kara
int arr[10]={2,4,6,8};
cin>>item;
//array k last index pey sewrch krney wala item insert kradia
arr[4]=item;
search(item,loc,arr);
return 0;
}
//function definition
void search(int item,int loc, int arr[])
{
	while (arr[loc]!=item)
	{
		loc+=1;
	}
	//ek time aesa ayega k loc = hotey hotey array k akhir pey chli jayegi magar element nhi mileyga
	if (loc==4)
	{
		cout<<"item not found"<<endl;
	}
	else{
		cout<<"item is found at location"<<loc<<endl;
	}
}










