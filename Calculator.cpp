#include "Calculator.h"

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//default constructor
Calculator::Calculator()
{

}

// User pressed a button
void Calculator::pressButton(Expr_Command* operation)
{
	operation->execute();
}
