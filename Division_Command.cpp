#include "Division_Command.h"


//default constructer
Division_Command::Division_Command(Stack<int> &s):
	Binary_Op_Command(s),
	s_(s)
{

}

char Division_Command::command_id()
{
	return '/';
}

//execute the command to add two numbers
int Division_Command::evaluate(int n1,int n2) const
{
	// COMMENT: Your code will crash if you have divide by 0.

	// I address this comment by throwing an exception

	if(n2 == 0)
	{
		throw std::exception();
	}
	else
	{
       return n1 / n2;
	}
	
}
