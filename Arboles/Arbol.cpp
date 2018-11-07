#include "Arbol.h"
#include "Nodo.h"
#include<iostream>

using namespace std;

Arbol::Arbol() {
	
}

void Arbol::insertar(int x, Nodo * p){
	if(p == NULL){
		p = new Nodo(x);
		raiz = p;
	}else if(x < p->getDato()){
		if(p->getIzq() == NULL){
			Nodo * n = new Nodo(x);
			p->setIzq(n);
		}else{
			insertar(x, p->getIzq());
		}
	}else if(x > p->getDato()){
		if(p->getDer() == NULL){
			Nodo * n = new Nodo(x);
			p->setDer(n);
		}else{
			insertar(x, p->getDer());
		}
	}else{
		cout<<"El dato ya existe"<<endl;
	}
}


//------------------------------------------------------------------------------
void Arbol::inOrden(Nodo * p){
	if(p->getIzq() != NULL){
		inOrden(p->getIzq());
	}
	cout<<p->getDato()<<" , ";
	if(p->getDer() != NULL){
		inOrden(p->getDer());
	}
}

void Arbol::preOrden(Nodo * p){
	cout<<p->getDato()<<" , ";
	if(p->getIzq() != NULL){
		preOrden(p->getIzq());
	}
	if(p->getDer() != NULL){
		preOrden(p->getDer());
	}
}

void Arbol::postOrden(Nodo * p){
	if(p->getIzq() != NULL){
		preOrden(p->getIzq());
	}
	if(p->getDer() != NULL){
		preOrden(p->getDer());
	}
	cout<<p->getDato()<<" , ";
}

int Arbol::nHojas(Nodo * p){
	if(p == NULL){
		return 0;
	}else if(p->getIzq() == NULL && p->getDer() == NULL){
		return 1;
	}else{
		return nHojas(p->getIzq()) + nHojas(p->getDer());
	}
}

int Arbol::altura(Nodo * p){
	if(p == NULL){
		return 0;
	}
	int altIzq = altura(p->getIzq());
	int altDer = altura(p->getDer());
	if(altIzq > altDer){
		return altIzq+1;
	}else{
		return altDer+1;
	}
}
/*
int Arbol::contar(Nodo * nodo){
	if(nodo == NULL){
		return 0;
	}else{
		return 1 + numNodos(nodo->getIzq()) + numNodos(nodo->getDer());
	}
}
*/
int Arbol::sumar(Nodo * p){
	if(p == NULL){
		return 0;
	}else{
		return p->getDato() + sumar(p->getIzq() + sumar(p->getDer()));
	}
}

int Arbol::buscar(int x, Nodo * p){
	if(p == NULL){
		return 0;
	}else if(p->getDato() == x){
		return 1;
	}else if(x < p->getDato()){
		return buscar(x, p->getIzq());
	}else if(x > p->getDato()){
		return buscar(x, p->getDer());
	}else{
		return 1;
	}
}
