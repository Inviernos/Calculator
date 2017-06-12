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

#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

#include "Binary_Op_Command.h"

class Mod_Command : public Binary_Op_Command
{

public:
	Mod_Command(Stack<int> &s);
	
	virtual char command_id();

	//execute the command to add two numbers
	virtual int evaluate(int n1,int n2) const;
	
private:
	Stack<int> & s_;

};

#endif
