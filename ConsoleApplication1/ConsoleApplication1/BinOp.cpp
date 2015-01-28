#include "BinOp.h"
BinOp::BinOp(Expression *e1, Expression *e2) :e1(e1), e2(e2)
{
}

string const BinOp::affiche() {
	return "(" + e1->affiche() + " " + this->whoAmI() + " " + e2->affiche() + ")";
}

BinOp::~BinOp()
{
}
