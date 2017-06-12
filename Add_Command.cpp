#include "Add_Command.h"


//default constructer
Add_Command::Add_Command(Stack<int> &s):
	Binary_Op_Command(s),
	s_(s)
{

}

char Add_Command::command_id()
{
	return '+';
}

//execute the command to add two numbers
int Add_Command::evaluate(int n1,int n2) const
{
	return n1+n2;
}
