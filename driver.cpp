#include "Array.h"
#include "Stack.h"
#include "Calculator.h"
#include "Expr_Command_Factory.h"
#include "Stack_Expr_Command_Factory.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;


//function prototype
bool infix_to_postfix(const std::string &, 
					  Expr_Command_Factory &, 
					  Array <Expr_Command *> &);

// COMMENT: You should implement the precedence function on
// the command object since it is better place there.

//I respond to this comment by implementing the precendence
//function in the command object.

#define MAX 32

int main()
{
	std::string infix = "";
	char expression[MAX] = "";
	bool quit = false;
	std::string answer = "";

	Stack<int> commands;
	Array<Expr_Command *> postfix(10);

	Stack_Expr_Command_Factory factory(commands); 
	Calculator calc;

	while(!quit)
	{
		fputs("\nInput An Expression\n",stdout);
		fgets(expression,MAX,stdin);
		infix = expression;
		postfix.fill(0);

		if(infix == "quit\n" || infix == "Quit\n" || infix == "QUIT\n")
		{
			quit = true;
		}
		else
		{
			if(infix_to_postfix(infix,factory,postfix))
			{
				try
				{
					for(int i = 0; i < postfix.size();i++)
					{
						if(postfix[i] != 0)
						{
							calc.pressButton(postfix[i]);
						}
					
					}
				}
				catch(std::exception)
				{

				}			
				
				cout << commands.top();
			}
			
			
		
			
			
		}
		

	}
	
	
}

//change from infix to postfix
bool infix_to_postfix(const std::string & infix, Expr_Command_Factory & factory, Array <Expr_Command *> & postfix)
{
	std::istringstream input(infix);
	std::string token;
	int increment = 0;
	int value;
	Expr_Command * cmd = 0;  
    Stack <Expr_Command *> temp; 
	std::string lasttoken = " ";

	while (!input.eof ()) 
	{ 
		input >> token;

		if(lasttoken != token || lasttoken == " ")
		{
			if (token == "+") 
			{
				cmd = factory.create_add_command(); 
			}
			else if (token == "-") 
			{
				cmd = factory.create_subtract_command();
			}
			else if(token == "*")
			{
				cmd = factory.create_multiply_command();
			}
			else if(token == "/")
			{
				cmd = factory.create_division_command();	
			}
			else if(token == "%")
			{
				cmd = factory.create_mod_command();
			}
			else
			{
				value = stoi(token);
				cmd = factory.create_number_command(value); 
			}

			temp.push(cmd);

			cmd->precedence(temp,postfix,increment);
		}

			lasttoken = token;
	} 

	//empty the temp stack to postfix array
	while(!temp.is_empty())
	{
		cmd = temp.pop();
		postfix[increment] = cmd;
		increment++;
	}
	
	return true; 
}
