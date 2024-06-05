#include <iostream>
#include <string.h>
#include "fecha.h"
#include "usuario.h"
#include "contenido.h"
#include "valoracion.h"
using namespace std;

Valoracion::Valoracion() {
	this -> setId(0);
	this -> contenido = 0;
	this -> usuario = 0;
	this -> setCalificacion(0);
	Fecha f;
	this -> setFechaValoracion(f);
}
		
Valoracion::~Valoracion() {
	this -> setId(0);
	this -> contenido = 0;
	this -> usuario = 0;
	this -> setCalificacion(0);
	Fecha f;
	this -> setFechaValoracion(f);
}

int Valoracion::getId() const {
	return this -> id;
}

Contenido& Valoracion::getContenido() {
	return *(this -> contenido);
}

Usuario& Valoracion::getUsuario() {
	return *(this -> usuario);
}

float Valoracion::getCalificacion() const {
	return this -> calificacion;
}

Fecha& Valoracion::getFechaValoracion() {
	return this -> fechaValoracion;
}

void Valoracion::setId(int x) {
	this -> id = x;
}

void Valoracion::setContenido(Contenido &x) {
	this -> contenido = &x;
}

void Valoracion::setUsuario(Usuario &x) {
	this -> usuario = &x;
}

void Valoracion::setCalificacion(float x) {
	this -> calificacion = x;
}

void Valoracion::setFechaValoracion(Fecha &x) {
	this -> fechaValoracion = x;
}

void Valoracion::setValoracion(int id, Contenido &contenido, Usuario &usuario, float calificacion, Fecha &fechaValoracion) {
	this -> setId(id);
	this -> setContenido(contenido);
	this -> setUsuario(usuario);
	this -> setCalificacion(calificacion);
	this -> setFechaValoracion(fechaValoracion);
}

Valoracion& Valoracion::operator=(Valoracion &v) {
	this -> setValoracion(v.getId(), v.getContenido(), v.getUsuario(), v.getCalificacion(), v.getFechaValoracion());
	return *this;
}

ostream& operator<<(ostream &flujo, Valoracion &v) {
	flujo << v.getId() << ": " << v.getUsuario().getUserName() << " -> " << v.getContenido().getTitulo() << ", " << v.getCalificacion() << "/5 " << v.getFechaValoracion();
	return flujo;
}
