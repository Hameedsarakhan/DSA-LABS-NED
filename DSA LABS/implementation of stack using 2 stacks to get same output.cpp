//TO GET SAME STRING USING STACK(using 2 stacks)
//string input kr rahay wo ek ek kr k push horaha stack 1 mein phir stack 1 sey delete hokr stack 2 mein jaraha aur wahan sey delete hokr
//print kia
//LIFO
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	//stack1 and 2 are names
	//2 stacksbanali
	stack<char>stack1;
	stack<char>stack2;
	string var;
	
	cout<<"enter string"<<endl;
	cin>>var;
	cout<<"input"<<endl;
	for(int i=0;i<var.length();i++)
	{
		//jo string input kia hay wo var ki length tk ek ek kr k input hoga aur stack 1  mein push hota jayega 
		cout<<var[i];
		stack1.push(var[i]);
		cout<<endl;
	}
	//jb tk stack1 empty na hojaye tb tk stack1 k top pey jo jo hy wo push hota raha stack 2 mein aur stack 1 ko pop krtey rahay
	while(!stack1.empty())
	{ stack2.push(stack1.top());
	stack1.pop();
	
	}
	// jb tk stack 2 empty na hojaye tb tk stack 2 k top walay elements ek ek kr k print hojaeingey
	cout<<"output"<<endl;
	while(!stack2.empty())
	{ cout<<stack2.top();
	stack2.pop();
	}
	return 0;
}
