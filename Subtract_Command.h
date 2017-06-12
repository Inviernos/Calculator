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

#include "Binary_Op_Command.h"
#include "Stack.h"

#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_

class Subtract_Command: public Binary_Op_Command
{
public:
	
	//default constructer
	Subtract_Command(Stack<int> &s);

	virtual char command_id();

	//execute the command to add two numbers
	virtual int evaluate(int n1,int n2) const;
	
private:
	Stack<int> & s_;
};

#endif   
