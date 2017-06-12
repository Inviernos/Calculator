/**
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "Number_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Division_Command.h"
#include "Mod_Command.h"


#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_

class Expr_Command_Factory
{
public:
	Expr_Command_Factory(){}
	virtual ~Expr_Command_Factory(){};
	virtual Number_Command * create_number_command (int num) = 0; 
	virtual Add_Command * create_add_command (void) = 0; 
	virtual Subtract_Command * create_subtract_command (void) = 0;
	virtual Multiply_Command * create_multiply_command (void) = 0;
	virtual Division_Command * create_division_command (void) = 0;
	virtual Mod_Command * create_mod_command(void) = 0;
private:
	Expr_Command_Factory (const Expr_Command_Factory &); 
	const Expr_Command_Factory & operator = (const Expr_Command_Factory &);
};

#endif  
