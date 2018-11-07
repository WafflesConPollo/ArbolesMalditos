#include<iostream>
#include "Arbol.h"
#include "Nodo.h"

using namespace std;

int main (int argc, char *argv[]) {
	
	Arbol cerezo;
	
	cerezo.insertar(10);
	cerezo.insertar(11);
	cerezo.insertar(12);
	cerezo.insertar(80);
	cerezo.insertar(21);
	
	cout<<"Hola"<<endl;
	
	return 0;
}

