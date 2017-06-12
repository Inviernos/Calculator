#include "Number_Command.h"

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//default constructer
Number_Command::Number_Command(Stack<int> &s,int n):
	s_(s),
	n(n)
{

}

char Number_Command::getID()
{
	return '#';
}

void Number_Command::precedence(Stack<Expr_Command*>& temps, Array <Expr_Command *> & post, int & inc)
{
	post[inc] = temps.pop();
	inc++;
}

//execute the command to add two numbers
void Number_Command::execute(void)
{
	s_.push(this->n);
}
