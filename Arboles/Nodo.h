#ifndef NODO_H
#define NODO_H

class Nodo{
private:
	
	int dato;
	Nodo * izq;
	Nodo * der;
	
public:
	
	Nodo();
	Nodo(int x);
	void setDato(int x);
	void setIzq(Nodo * p);
	void setDer(Nodo * p);
	int getDato();
	Nodo *getIzq();	
	Nodo *getDer();
	
};

#endif
