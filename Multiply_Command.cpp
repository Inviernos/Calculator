#include "Multiply_Command.h"


//default constructer
Multiply_Command::Multiply_Command(Stack<int> &s):
	Binary_Op_Command(s),
	s_(s)
{

}

char Multiply_Command::command_id()
{
	return '*';
}

//execute the command to add two numbers
int Multiply_Command::evaluate(int n1,int n2) const
{
	return n1*n2;
}
