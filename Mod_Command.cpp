#include "Mod_Command.h"


Mod_Command::Mod_Command(Stack<int> &s):
	Binary_Op_Command(s),
	s_(s)
{

}

char Mod_Command::command_id()
{
	return '%';
}

//execute the command to add two numbers
int Mod_Command::evaluate(int n1,int n2) const
{
	if(n2 == 0)
	{
		throw std::exception();
	}
	else
	{
        return n1 % n2;
	}
	
}
