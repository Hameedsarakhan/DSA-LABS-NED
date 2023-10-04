// FINAL PRACTICAL
//SE-21012 SEC A
#include<iostream>
using namespace std;
int binarysearchfirst(int arr[], int n, int item )
//where i is the first index and j is the last index
{int i=0, j=n-1, ans=-1, mid;
while(i<=j)
{

	mid=(i+j)/2;
	if (arr[mid]==item)
	{
	ans=mid;
	j=mid-1;
	}
	else if (arr[mid]<item)
	{ 
	i = mid+1;
	}
	else{
	j=mid-1;
	}
}
return ans;
}

int binarysearchlast(int arr[], int n, int item )
{int i=0, j=n-1, ans=-1, mid;
while(i<=j)
{
	mid=(i+j)/2;
	if (arr[mid]==item)
	{
	ans=mid;

	i=mid+1;
	}
	else if (arr[mid]<item)
	{i=mid+1;
	}
	else{
	j=mid-1;
	}
}
return ans;
}



int binarysearchloc(int arr[],int size, int item)
{
	int occ;
	int firstocc=binarysearchfirst(arr,size,item);
	int lastocc=binarysearchlast(arr,size,item);
	
	if(firstocc==-1)
	{return 0;
	}
		occ=lastocc- firstocc +1;
	
    return occ;
}
int main()
{// this is an array of repeated numbers
	int arr[]={2,5,5,5,6,68,9,9,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int item;
	cout<<"Enter no to find"<<endl;
	cin>>item;
	
	int occurences=binarysearchloc(arr,size,item);
	cout<<item<<"occurs"<<occurences<<"times"<<endl;
	int firstloc=binarysearchfirst(arr,size,item);
	if(firstloc==-1 &&  occurences==0)
	{cout<<item<<"not present"<<endl;
	}
	else{
		cout<<item<<"first loc is"<<firstloc<<endl;
	}
	return 0;
}



















