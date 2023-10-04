//infix to postfix conversion
//#include<iostream>
//#include<string>
//#include<stack>
#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
	//character issliye bhejay hayn kyu k ye saray characters hayn
	if(c=='^')
	return 3;
	else if(c=='/'||c=='*')
	return 2;
	else if(c=='+'||c=='-')
	return 1;
	else
	return -1;
}

void infixtopostfix(string exp)
{
	stack<char>s1,p,s2;
	char add,addprec,print;
	exp="("+exp+")";
	
	for (int i=0; i<exp.length();i++)
{
	if(isdigit(exp[i]))
	{
		p.push(exp[i]);
		p.push(',');
	}
	else if (exp[i]=='(')
	{
		s1.push(exp[i]);	
	}
	else if (exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^')
	{while((precedence(exp[i])<=precedence(s1.top()))&&(s1.top()!='('))
	{addprec=s1.top();
	p.push(addprec);
	p.push(',');
	s1.pop();
	}
	s1.push(exp[i]);
	}
	
	else if (exp[i]==')')
	{
		while(s1.top()!='(')
		{
			add=s1.top();
			p.push(add);
			p.push(',');
		}
		s1.pop();
		
	}

	
	}
	while(!p.empty())	
	{s2.push(p.top());
	p.pop();
	}

}

int main()
{string exp="5*(6+2)-2/4";
infixtopostfix(exp);
//return ();
}
	
	