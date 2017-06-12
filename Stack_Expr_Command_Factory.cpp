#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory::Stack_Expr_Command_Factory(Stack<int> & stack):
	stack_(stack)
{

}

Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory()
{

}

Add_Command * Stack_Expr_Command_Factory::create_add_command()
{
	return new Add_Command(stack_);
}

Mod_Command * Stack_Expr_Command_Factory::create_mod_command()
{
	return new Mod_Command(stack_);
}

Subtract_Command * Stack_Expr_Command_Factory::create_subtract_command()
{
	return new Subtract_Command(stack_);
}

Multiply_Command * Stack_Expr_Command_Factory::create_multiply_command()
{
	return new Multiply_Command(stack_);
}

Division_Command * Stack_Expr_Command_Factory::create_division_command()
{
	return new Division_Command(stack_);
}

Number_Command * Stack_Expr_Command_Factory::create_number_command(int num)
{
	return new Number_Command(stack_,num);
}
