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

#include "Expr_Command.h"
#include "Stack.h"

#ifndef _NUMBER_COMMAND_H_
#define _NUMBER_COMMAND_H_

class Number_Command: public Expr_Command
{
public:
	
	//default constructer
	Number_Command(Stack<int> &s,int n);

	virtual char getID();

	virtual void precedence(Stack<Expr_Command*>&, Array<Expr_Command*>&, int&);
	
	//execute the command to add two numbers
	virtual void execute(void);
	
private:
	Stack<int> & s_;
	int n;
};

#endif   
