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

#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "Expr_Command.h"

class Calculator
{
public:
	
	Calculator();

	//execute the command that the user picked
	void pressButton(Expr_Command* operation);
};

#endif   
