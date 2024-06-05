#include <iostream>
#include "fecha.h"
using namespace std;

Fecha::Fecha() {
	this -> setFecha(0, 0, 0);
}

Fecha::~Fecha() {
	this -> setFecha(0, 0, 0);
}

int Fecha::getDia() const {
	return this -> dia;
}

int Fecha::getMes() const {
	return this -> mes;
}

int Fecha::getAnio() const {
	return this -> anio;
}

void Fecha::setDia(int x) {
	this -> dia = x;
}

void Fecha::setMes(int x) {
	this -> mes = x;
}

void Fecha::setAnio(int x) {
	this -> anio = x;
}

void Fecha::setFecha(int dia, int mes, int anio) {
	this -> setDia(dia);
	this -> setMes(mes);
	this -> setAnio(anio);
}

Fecha& Fecha::operator=(const Fecha &f) {
	this -> setFecha(f.getDia(), f.getMes(), f.getAnio());
	return *this;
}

bool Fecha::operator<(const Fecha &f) const {
	bool verdadero = false;
	if (this -> getAnio() < f.getAnio()) {
		verdadero = true;
	} else if (this -> getAnio() == f.getAnio()) {
		if (this -> getMes() < f.getMes()) {
			verdadero = true;
		} else if (this -> getMes() == f.getMes()) {
			if (this -> getDia() < f.getDia()) {
				verdadero = true;
			}
		}
	}
	return verdadero;
}

bool Fecha::operator>(const Fecha &f) const {
	bool verdadero = false;
	if (this -> getAnio() > f.getAnio()) {
		verdadero = true;
	} else if (this -> getAnio() == f.getAnio()) {
		if (this -> getMes() > f.getMes()) {
			verdadero = true;
		} else if (this -> getMes() == f.getMes()) {
			if (this -> getDia() > f.getDia()) {
				verdadero = true;
			}
		}
	}
	return verdadero;
}

bool Fecha::operator<=(const Fecha &f) const {
	bool verdadero = false;
	if (this -> getAnio() < f.getAnio()) {
		verdadero = true;
	} else if (this -> getAnio() == f.getAnio()) {
		if (this -> getMes() < f.getMes()) {
			verdadero = true;
		} else if (this -> getMes() == f.getMes()) {
			if (this -> getDia() <= f.getDia()) {
				verdadero = true;
			}
		}
	}
	return verdadero;
}

bool Fecha::operator>=(const Fecha &f) const {
	bool verdadero = false;
	if (this -> getAnio() > f.getAnio()) {
		verdadero = true;
	} else if (this -> getAnio() == f.getAnio()) {
		if (this -> getMes() > f.getMes()) {
			verdadero = true;
		} else if (this -> getMes() == f.getMes()) {
			if (this -> getDia() >= f.getDia()) {
				verdadero = true;
			}
		}
	}
	return verdadero;
}

bool Fecha::operator==(const Fecha &f) const {
	bool verdadero = false;
	if (this -> getDia() == f.getDia() && this -> getMes() == f.getMes() && this -> getAnio() == f.getAnio()) {
		verdadero = true;
	}
	return verdadero;
}

bool Fecha::operator!=(const Fecha &f) const {
	bool verdadero = false;
	if (this -> getDia() != f.getDia() || this -> getMes() != f.getMes() || this -> getAnio() != f.getAnio()) {
		verdadero = true;
	}
	return verdadero;
}

ostream& operator<<(ostream &flujo, const Fecha &f) {
	if (f.getDia() / 10 == 0) {
		flujo << 0;
	}
	flujo << f.getDia();
	flujo << "/";
	if (f.getMes() / 10 == 0) {
		flujo << 0;
	}
	flujo << f.getMes() << "/" << f.getAnio();
	return flujo;
}
