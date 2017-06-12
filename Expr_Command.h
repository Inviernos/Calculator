#include "Array.h"
#include "Stack.h"

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

#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

class Expr_Command
{
public:
	virtual void execute() = 0;
	virtual void precedence(Stack<Expr_Command *> & temps, Array <Expr_Command *> & post, int & inc) = 0;
	virtual char getID() = 0;

	
};

#endif   
