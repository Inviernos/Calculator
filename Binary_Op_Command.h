#include "Expr_Command.h"



#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_

class Binary_Op_Command : public Expr_Command 
{ 
public:
  // COMMENT: Make sure you are implementing the template method
  // pattern correct, as illustrated on the slides.

	Binary_Op_Command(Stack<int> &s);
	virtual void execute (void);
	virtual void precedence(Stack<Expr_Command *> & temps, Array <Expr_Command *> & post, int & inc);
	virtual char getID();

	virtual char command_id() = 0;
	virtual int evaluate(int n1,int n2) const = 0;

private:
	Stack<int> & s_;
	Expr_Command * op1;
	Expr_Command * op2;
	
};

#endif

