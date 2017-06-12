#include "Binary_Op_Command.h"


Binary_Op_Command::Binary_Op_Command(Stack<int> &s):
	s_(s),
	op1(0),
	op2(0)
{

}
void Binary_Op_Command::execute()
{
	int n2 = s_.pop ();
	int n1 = s_.pop ();
	int result = this->evaluate (n1, n2); 
	s_.push (result);
}

char Binary_Op_Command::getID()
{
	return this->command_id();
}

void Binary_Op_Command::precedence(Stack<Expr_Command *> & temps, Array <Expr_Command *> & post, int & inc)
{	
	bool checkprecedence = false;


	while(!checkprecedence)
	{
		    //this is the op at the top of the stack
			if(!temps.is_empty())
			{
				op1 = temps.pop();
			}
			else
			{
				checkprecedence = true;
			}


			if(!temps.is_empty())
			{
				op2 = temps.pop();

				if(op1->getID() == '%' && op2->getID() == '%')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '%' && op2->getID() == '/')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '%' && op2->getID() == '*')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '/' && op2->getID() == '/')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '/' && op2->getID() == '*')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '/' && op2->getID() == '%')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '*' && op2->getID() == '*')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '*' && op2->getID() == '/')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '*' && op2->getID() == '%')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '+' && op2->getID() == '*')
				{
			
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '+' && op2->getID() == '/')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '+' && op2->getID() == '%')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '+' && op2->getID() == '-')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '+' && op2->getID() == '+')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '-' && op2->getID() == '*')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '-' && op2->getID() == '/')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '-' && op2->getID() == '%')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '-' && op2->getID() == '+')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else if(op1->getID() == '-' && op2->getID() == '-')
				{
					post[inc] = op2;
					temps.push(op1);
					inc++;
				}
				else
				{
					temps.push(op2);
					temps.push(op1);
					checkprecedence = true;
				}
			}
			else
			{
				temps.push(op1);
				checkprecedence = true;
			}			
	}

}
