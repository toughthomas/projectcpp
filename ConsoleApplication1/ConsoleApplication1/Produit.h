#ifndef PRODUIT
#define PRODUIT
#include "BinOp.h"
class Produit :
	public BinOp
{
public:
	Produit(Expression * e1, Expression *e2);
	virtual double const eval();
	virtual Expression * derive(string var);
	~Produit();
protected:
	virtual string whoAmI();

};
#endif