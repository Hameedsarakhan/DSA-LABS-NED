//LAB 5
// STACK DATA STRUCTURE
//IMPLEMENTATION OF PUSH AND POP DATA STRUCTURE WITHOUT USING PRE BUILT FUNCTIONS
#include <iostream>
using namespace std;
const int size=3;

class stack
{ public:
	//data members
	int top;
	int pop;
	// s is stack name
	int s[size];
	//constructor
	
	stack()
	{ top=-1;
	}
	//functions
	void push(int value)
	{
		//size-1 issliye kia hay kyu k 0 sey start hy
		if(top>size-1)
		{ cout<<"stack overflow"<<endl;
			
		}
		else{
			top=top+1;
			s[top]=value;
			cout<<value;
		}		
	}
	//function
	int popping()
	{
		if(top==-1){
			cout<<"underflow"<<endl;
		}
		else
		//pop k variable k ander jo value delete krney walay hayn wo daal di aur return kradi takein pata chlay kia delete kia hay
		{pop=s[top];
		top=top-1;
		//yahan return he kreingy warna address show hoga
		return pop;
		}
	}
	//function
	int empty()
	{
		if(top==-1){
			return -1;
		}
		else{return 0;
		}
	}

};
//class end
int main()
{ stack obj;
cout<<"stack"<<endl;
obj.push(1);
obj.push(2);
obj.push(3);
obj.push(4);
obj.push(5);
cout<<"popped elements are"<<endl;
//jb tk stack khali na hojaye tb tk pop krtey raho
while(!obj.empty())
{ cout<<obj.popping()<<endl;
}
obj.popping();

}












