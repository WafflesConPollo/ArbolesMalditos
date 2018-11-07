#include "Nodo.h"
#include <iostream>

Nodo::Nodo(){
	
}

void Nodo::setDato(int x){
	this->dato = x;
}
	
void Nodo::setIzq(Nodo * p){
	this->izq = p;
}
	
void Nodo::setDer(Nodo * p){
	this->der = p;
}
	
int Nodo::getDato(){
	return dato;
}
	
Nodo * Nodo::getIzq(){
	return izq;
}
	
Nodo * Nodo::getDer(){
	return der;
}

Nodo::Nodo(int x){
	this->dato = x;
	izq = NULL;
	der = NULL;
}
