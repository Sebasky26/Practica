#include <iostream>
#include "../lib/utility.h"

using namespace std;

int main()
{
	int numTerminos = getTerminosGenerar();
	setColor(0,1);
	SerieFibo(numTerminos);
	ENTER;
	setColor(0,2);
	serieSignoFibo(numTerminos);
	ENTER;
	setColor(0,3);
	serieFiboAumImpar(numTerminos);
	ENTER;
	setColor(0,4);
	serieFiboAumPar(numTerminos);
	ENTER;
	setColor(0,5);
	serieNumPrimos(numTerminos);
	ENTER;
	setColor(0,6);
	serieNumPrimossigno(numTerminos);
	ENTER;
	setColor(0,7);
	serieSumaTres(numTerminos);
	ENTER;
	setColor(0,8);
	serieSumaCinco(numTerminos);
	ENTER;
	setColor(0,9);
	serieMultDos(numTerminos);
	ENTER;
	setColor(0,10);
	serieMultTres(numTerminos);
	ENTER;
	setColor(0,11);
	seriePiramide1(numTerminos);
	ENTER;
	setColor(0,12);
	seriePiramide2(numTerminos);
	ENTER;
	setColor(0,13);
	seriePiramide3(numTerminos);
	return 0;
}



