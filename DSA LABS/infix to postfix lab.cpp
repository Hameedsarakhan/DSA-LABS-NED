//INFIX EXP TO EQUIVALENT POSTFIX
#include<bits/stdc++.h>
using namespace std;

intprec(char c)
{
	if(c=='^')
	return 3;
	else if(c=='/'||c=='*')
	return 2;
	else if(c=='+'||c=='-')
	return 1;
	else
	return -1;
}
 void infixtopostfix(string s)
 {
 stack<char>stack;
 string p;
 for(int i=0;i<s.length();i++)
 {
 	char c=s[i];
 	
 	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
 	p+=c;
 	else if(c=='(')
 	stack.push('(');
 	 
 	
 	else if (c==')')
 	{
 		while(stack.top()!='(')
		 {
		 	p+= stack.top();
		 	stack.pop();
				 }		
 		stack.pop();
 }
 
    else{
 	    while(!stack.empty()&& prec(s[i])<=prec(stack.top()))
 		
 		{p+=stack.top();
 		stack.pop();
		 }
		 stack.push(c);
	 }
 	
 }
 
 
 
 
 while(!stack.empty())
 {p+=stack.top();
 stack.pop();
  }
 cout<<p<<endl;
}
 int main()
 {
 	string exp="(A+(B*C-(D/E^F)*G)*H)";
 	infixtopostfix(exp);
 	return ();
 }
 
 
 
 
 
 
 
 
 
 
 
 