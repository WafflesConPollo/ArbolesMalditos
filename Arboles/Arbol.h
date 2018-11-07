#ifndef ARBOL_H
#define ARBOL_H
#include "Nodo.h"
#include <iostream>

class Arbol{

private:

	void insertar(int x, Nodo * p);
	void inOrden(Nodo * p);
	void preOrden(Nodo * p);
	void postOrden(Nodo * p);
	Nodo * raiz;
	
public:

	Arbol();
	
	int esVacio(Nodo * raiz){
		return esVacio(raiz);
	}
	
	void insertar(int x){
		insertar(x, raiz);
	}

	void inOrden(){
		inOrden(raiz);
	}
	
	void preOrden(){
		preOrden(raiz);
	}
	
	void postOrden(){
		postOrden(raiz);
	}
	
	int nHojas(Nodo * p);
	int altura(Nodo * p);
	int contar(Nodo * nodo);
	int sumar(Nodo * p);
	int buscar(int x, Nodo * p);
	
//	int esHoja(){
//		esHoja(raiz)
//	}
};

#endif

