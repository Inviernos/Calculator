#include "Subtract_Command.h"


//default constructer
Subtract_Command::Subtract_Command(Stack<int> &s):
	Binary_Op_Command(s),
	s_(s)
{

}

char Subtract_Command::command_id()
{
	return '-';
}

//execute the command to add two numbers
int Subtract_Command::evaluate(int n1,int n2) const
{
	return n1 - n2;
}

