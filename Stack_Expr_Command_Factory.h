// -*- C++ -*-
//==============================================================================
/**
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _STACK_EXPR_COMMAND_FACTORY_H_
#define _STACK_EXPR_COMMAND_FACTORY_H_

#include "Expr_Command_Factory.h"
#include "Stack.h"

class Stack_Expr_Command_Factory: public Expr_Command_Factory
{
public:
    Stack_Expr_Command_Factory (Stack<int> & stack); 
	virtual ~Stack_Expr_Command_Factory();
	virtual Number_Command * create_number_command (int num);
	virtual Add_Command * create_add_command (void); 
	virtual Subtract_Command * create_subtract_command (void);
	virtual Multiply_Command * create_multiply_command (void);
	virtual Division_Command * create_division_command (void);
	virtual Mod_Command * create_mod_command(void);
private: 
	Stack <int> & stack_;
};

#endif  
