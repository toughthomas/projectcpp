#include "Sin.h"
#include "Produit.h"
#include "Cos.h"
#include <math.h>


Sin::Sin(Expression * c):expr(c) {}

double const Sin::eval() {
	return sin(expr->eval());
}

string const Sin::affiche() {
	return "Sin(" + expr->affiche() + ")";
}

Expression * Sin::derive(string var) {
	return new Produit(expr->derive(var), new Cos(expr));
}
Sin::~Sin()
{
}
