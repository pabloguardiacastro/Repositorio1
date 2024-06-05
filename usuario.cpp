#include <iostream>
#include <string.h>
#include "fecha.h"
#include "contenido.h"
#include "usuario.h"
using namespace std;

Usuario::Usuario() {
	this -> setId(0);
	this -> setUserName("");
	this -> setContrasenia("");
	this -> setNombre("");
	this -> setApe1("");
	this -> setApe2("");
	Fecha f;
	this -> setFechaNac(f);
	this -> setActivo(true);
	this -> setTipo("");
	this -> setUtilContenidoVisualizado(0);
	this -> setDimContenidoVisualizado(10);
	this -> setUtilContenidoMg(0);
	this -> setDimContenidoMg(10);
	this -> setUtilContenidoNomg(0);
	this -> setDimContenidoNomg(10);
	this -> setUtilContenidoValorado(0);
	this -> setDimContenidoValorado(10);
	this -> setUtilContenidoBuscado(0);
	this -> setDimContenidoBuscado(10);
	this -> v_contenido_visualizado = new Contenido*[this -> getDimContenidoVisualizado()];
	this -> v_contenido_mg = new Contenido*[this -> getDimContenidoMg()];
	this -> v_contenido_nomg = new Contenido*[this -> getDimContenidoNomg()];
	this -> v_contenido_valorado = new Contenido*[this -> getDimContenidoValorado()];
	this -> v_contenido_buscado = new Contenido*[this -> getDimContenidoBuscado()];
}

Usuario::~Usuario() {
	this -> setId(0);
	this -> setUserName("");
	this -> setContrasenia("");
	this -> setNombre("");
	this -> setApe1("");
	this -> setApe2("");
	this -> setActivo(false);
	this -> setTipo("");
	Fecha f;
	this -> setFechaNac(f);
	for (int contenido = 0; contenido < this -> getUtilContenidoVisualizado(); contenido++) {
		this -> v_contenido_visualizado[contenido] = 0;
	}
	delete [] this -> v_contenido_visualizado;
	this -> setUtilContenidoVisualizado(0);
	this -> setDimContenidoVisualizado(0);
	for (int contenido = 0; contenido < this -> getUtilContenidoMg(); contenido++) {
		this -> v_contenido_mg[contenido] = 0;
	}
	delete [] this -> v_contenido_mg;
	this -> setUtilContenidoMg(0);
	this -> setDimContenidoMg(0);
	for (int contenido = 0; contenido < this -> getUtilContenidoValorado(); contenido++) {
		this -> v_contenido_valorado[contenido] = 0;
	}
	delete [] this -> v_contenido_valorado;
	this -> setUtilContenidoValorado(0);
	this -> setDimContenidoValorado(0);
	for (int contenido = 0; contenido < this -> getUtilContenidoBuscado(); contenido++) {
		this -> v_contenido_buscado[contenido] = 0;
	}
	delete [] this -> v_contenido_buscado;
	this -> setUtilContenidoBuscado(0);
	this -> setDimContenidoBuscado(0);
}

int Usuario::getId() const {
	return this -> id;
}

string& Usuario::getUserName() {
	return this -> userName;
}

string& Usuario::getContrasenia() {
	return this -> contrasenia;
}

string& Usuario::getNombre() {
	return this -> nombre;
}

string& Usuario::getApe1() {
	return this -> ape1;
}

string& Usuario::getApe2() {
	return this -> ape2;
}

Fecha& Usuario::getFechaNac() {
	return this -> fechaNac;
}

bool Usuario::getActivo() {
	return this -> activo;
}

string& Usuario::getTipo() {
	return this -> tipo;
}

int Usuario::getUtilContenidoVisualizado() {
	return this -> util_contenido_visualizado;
}

int Usuario::getDimContenidoVisualizado() {
	return this -> dim_contenido_visualizado;
}

int Usuario::getUtilContenidoMg() {
	return this -> util_contenido_mg;
}

int Usuario::getDimContenidoMg() {
	return this -> dim_contenido_mg;
}

int Usuario::getUtilContenidoNomg() {
	return this -> util_contenido_nomg;
}

int Usuario::getDimContenidoNomg() {
	return this -> dim_contenido_nomg;
}

int Usuario::getUtilContenidoValorado() {
	return this -> util_contenido_valorado;
}

int Usuario::getDimContenidoValorado() {
	return this -> dim_contenido_valorado;
}

int Usuario::getUtilContenidoBuscado() {
	return this -> util_contenido_buscado;
}

int Usuario::getDimContenidoBuscado() {
	return this -> dim_contenido_buscado;
}

Contenido& Usuario::getContenidoVisualizado(int pos) {
	return *(this -> v_contenido_visualizado[pos]);
}

Contenido& Usuario::getContenidoMg(int pos) {
	return *(this -> v_contenido_mg[pos]);
}

Contenido& Usuario::getContenidoNomg(int pos) {
	return *(this -> v_contenido_nomg[pos]);
}

Contenido& Usuario::getContenidoValorado(int pos) {
	return *(this -> v_contenido_valorado[pos]);
}

Contenido& Usuario::getContenidoBuscado(int pos) {
	return *(this -> v_contenido_buscado[pos]);
}

void Usuario::setId(int x) {
	this -> id = x;
}

void Usuario::setUserName(const string &x) {
	this -> userName = x;
}

void Usuario::setContrasenia(const string &x) {
	this -> contrasenia = x;
}

void Usuario::setNombre(const string &x) {
	this -> nombre = x;
}

void Usuario::setApe1(const string &x) {
	this -> ape1 = x;
}

void Usuario::setApe2(const string &x) {
	this -> ape2 = x;
}

void Usuario::setFechaNac(const Fecha &x) {
	this -> fechaNac = x;
}

void Usuario::setActivo(bool x) {
	this -> activo = x;
}

void Usuario::setTipo(const string &x) {
	this -> tipo = x;
}

void Usuario::setUtilContenidoVisualizado(int x) {
	this -> util_contenido_visualizado = x;
}

void Usuario::setDimContenidoVisualizado(int x) {
	this -> dim_contenido_visualizado = x;
}

void Usuario::setUtilContenidoMg(int x) {
	this -> util_contenido_mg = x;
}

void Usuario::setDimContenidoMg(int x) {
	this -> dim_contenido_mg = x;
}

void Usuario::setUtilContenidoNomg(int x) {
	this -> util_contenido_nomg = x;
}

void Usuario::setDimContenidoNomg(int x) {
	this -> dim_contenido_nomg = x;
}

void Usuario::setUtilContenidoValorado(int x) {
	this -> util_contenido_valorado = x;
}

void Usuario::setDimContenidoValorado(int x) {
	this -> dim_contenido_valorado = x;
}

void Usuario::setUtilContenidoBuscado(int x) {
	this -> util_contenido_buscado = x;
}

void Usuario::setDimContenidoBuscado(int x) {
	this -> dim_contenido_buscado = x;
}

void Usuario::setContenidoVisualizado(int pos, Contenido &c) {
	if (pos >= 0) {
		if (pos < this -> getUtilContenidoVisualizado()) {
			this -> v_contenido_visualizado[pos] = &c;
		} else if (this -> getUtilContenidoVisualizado() < this -> getDimContenidoVisualizado()) {
			this -> v_contenido_visualizado[this -> getUtilContenidoVisualizado()] = &c;
			this -> setUtilContenidoVisualizado(this -> getUtilContenidoVisualizado() + 1);
		} else {
			this -> resizeContenidoVisualizado(this -> getUtilContenidoVisualizado() + 1);
			this -> v_contenido_visualizado[this -> getUtilContenidoVisualizado()] = &c;
			this -> setUtilContenidoVisualizado(this -> getUtilContenidoVisualizado() + 1);
		}
	}
}

void Usuario::setContenidoMg(int pos, Contenido &c) {
	if (pos >= 0) {
		if (pos < this -> getUtilContenidoMg()) {
			this -> v_contenido_mg[pos] = &c;
		} else if (this -> getUtilContenidoMg() < this -> getDimContenidoMg()) {
			this -> v_contenido_mg[this -> getUtilContenidoMg()] = &c;
			this -> setUtilContenidoMg(this -> getUtilContenidoMg() + 1);
		} else {
			this -> resizeContenidoMg(this -> getUtilContenidoMg() + 1);
			this -> v_contenido_mg[this -> getUtilContenidoMg()] = &c;
			this -> setUtilContenidoMg(this -> getUtilContenidoMg() + 1);
		}
	}
}

void Usuario::setContenidoNomg(int pos, Contenido &c) {
	if (pos >= 0) {
		if (pos < this -> getUtilContenidoNomg()) {
			this -> v_contenido_nomg[pos] = &c;
		} else if (this -> getUtilContenidoNomg() < this -> getDimContenidoNomg()) {
			this -> v_contenido_nomg[this -> getUtilContenidoNomg()] = &c;
			this -> setUtilContenidoNomg(this -> getUtilContenidoNomg() + 1);
		} else {
			this -> resizeContenidoNomg(this -> getUtilContenidoNomg() + 1);
			this -> v_contenido_nomg[this -> getUtilContenidoNomg()] = &c;
			this -> setUtilContenidoNomg(this -> getUtilContenidoNomg() + 1);
		}
	}
}

void Usuario::setContenidoValorado(int pos, Contenido &c) {
	if (pos >= 0) {
		if (pos < this -> getUtilContenidoValorado()) {
			this -> v_contenido_valorado[pos] = &c;
		} else if (this -> getUtilContenidoValorado() < this -> getDimContenidoValorado()) {
			this -> v_contenido_valorado[this -> getUtilContenidoValorado()] = &c;
			this -> setUtilContenidoValorado(this -> getUtilContenidoValorado() + 1);
		} else {
			this -> resizeContenidoValorado(this -> getUtilContenidoValorado() + 1);
			this -> v_contenido_valorado[this -> getUtilContenidoValorado()] = &c;
			this -> setUtilContenidoValorado(this -> getUtilContenidoValorado() + 1);
		}
	}
}

void Usuario::setContenidoBuscado(int pos, Contenido &c) {
	if (pos >= 0) {
		if (pos < this -> getUtilContenidoBuscado()) {
			this -> v_contenido_buscado[pos] = &c;
		} else if (this -> getUtilContenidoBuscado() < this -> getDimContenidoBuscado()) {
			this -> v_contenido_buscado[this -> getUtilContenidoBuscado()] = &c;
			this -> setUtilContenidoBuscado(this -> getUtilContenidoBuscado() + 1);
		} else {
			this -> resizeContenidoBuscado(this -> getUtilContenidoBuscado() + 1);
			this -> v_contenido_buscado[this -> getUtilContenidoBuscado()] = &c;
			this -> setUtilContenidoBuscado(this -> getUtilContenidoBuscado() + 1);
		}
	}
}

void Usuario::setUsuario(int id, const string &userName, const string &contrasenia, const string &nombre, const string &ape1, const string &ape2, const Fecha &fechaNac, bool activo, const string &tipo) {
	this -> setId(id);
	this -> setUserName(userName);
	this -> setContrasenia(contrasenia);
	this -> setNombre(nombre);
	this -> setApe1(ape1);
	this -> setApe2(ape2);
	this -> setFechaNac(fechaNac);
	this -> setActivo(activo);
	this -> setTipo(tipo);
}

void Usuario::resizeContenidoVisualizado(int tamanio) {
	int dim_inicial = this -> getDimContenidoVisualizado();
	while (tamanio > this -> getDimContenidoVisualizado()) {
		this -> setDimContenidoVisualizado(this -> getDimContenidoVisualizado() + 10);
	}
	while (tamanio <= this -> getDimContenidoVisualizado() - 10 && this -> getDimContenidoVisualizado() > 10) {
		this -> setDimContenidoVisualizado(this -> getDimContenidoVisualizado() - 10);
	}
	if (this -> getDimContenidoVisualizado() != dim_inicial) {
		Contenido* *vector = new Contenido*[this -> getDimContenidoVisualizado()];
		for (int contenido = 0; contenido < this -> getUtilContenidoVisualizado(); contenido++) {
			vector[contenido] = &(this -> getContenidoVisualizado(contenido));
		}
		for (int contenido = 0; contenido < this -> getUtilContenidoVisualizado(); contenido++) {
			this -> v_contenido_visualizado[contenido] = 0;
		}
		delete [] this -> v_contenido_visualizado;
		this -> v_contenido_visualizado = vector;
	}
}

void Usuario::resizeContenidoMg(int tamanio) {
	int dim_inicial = this -> getDimContenidoMg();
	while (tamanio > this -> getDimContenidoMg()) {
		this -> setDimContenidoMg(this -> getDimContenidoMg() + 10);
	}
	while (tamanio <= this -> getDimContenidoMg() - 10 && this -> getDimContenidoMg() > 10) {
		this -> setDimContenidoMg(this -> getDimContenidoMg() - 10);
	}
	if (this -> getDimContenidoMg() != dim_inicial) {
		Contenido* *vector = new Contenido*[this -> getDimContenidoMg()];
		for (int contenido = 0; contenido < this -> getUtilContenidoMg(); contenido++) {
			vector[contenido] = &(this -> getContenidoMg(contenido));
		}
		for (int contenido = 0; contenido < this -> getUtilContenidoMg(); contenido++) {
			this -> v_contenido_mg[contenido] = 0;
		}
		delete [] this -> v_contenido_mg;
		this -> v_contenido_mg = vector;
	}
}

void Usuario::resizeContenidoNomg(int tamanio) {
	int dim_inicial = this -> getDimContenidoNomg();
	while (tamanio > this -> getDimContenidoNomg()) {
		this -> setDimContenidoNomg(this -> getDimContenidoNomg() + 10);
	}
	while (tamanio <= this -> getDimContenidoNomg() - 10 && this -> getDimContenidoNomg() > 10) {
		this -> setDimContenidoNomg(this -> getDimContenidoNomg() - 10);
	}
	if (this -> getDimContenidoNomg() != dim_inicial) {
		Contenido* *vector = new Contenido*[this -> getDimContenidoNomg()];
		for (int contenido = 0; contenido < this -> getUtilContenidoNomg(); contenido++) {
			vector[contenido] = &(this -> getContenidoNomg(contenido));
		}
		for (int contenido = 0; contenido < this -> getUtilContenidoNomg(); contenido++) {
			this -> v_contenido_nomg[contenido] = 0;
		}
		delete [] this -> v_contenido_nomg;
		this -> v_contenido_nomg = vector;
	}
}

void Usuario::resizeContenidoValorado(int tamanio) {
	int dim_inicial = this -> getDimContenidoValorado();
	while (tamanio > this -> getDimContenidoValorado()) {
		this -> setDimContenidoValorado(this -> getDimContenidoValorado() + 10);
	}
	while (tamanio <= this -> getDimContenidoValorado() - 10 && this -> getDimContenidoValorado() > 10) {
		this -> setDimContenidoValorado(this -> getDimContenidoValorado() - 10);
	}
	if (this -> getDimContenidoValorado() != dim_inicial) {
		Contenido* *vector = new Contenido*[this -> getDimContenidoValorado()];
		for (int contenido = 0; contenido < this -> getUtilContenidoValorado(); contenido++) {
			vector[contenido] = &(this -> getContenidoValorado(contenido));
		}
		for (int contenido = 0; contenido < this -> getUtilContenidoValorado(); contenido++) {
			this -> v_contenido_valorado[contenido] = 0;
		}
		delete [] this -> v_contenido_valorado;
		this -> v_contenido_valorado = vector;
	}
}

void Usuario::resizeContenidoBuscado(int tamanio) {
	int dim_inicial = this -> getDimContenidoBuscado();
	while (tamanio > this -> getDimContenidoBuscado()) {
		this -> setDimContenidoBuscado(this -> getDimContenidoBuscado() + 10);
	}
	while (tamanio <= this -> getDimContenidoBuscado() - 10 && this -> getDimContenidoBuscado() > 10) {
		this -> setDimContenidoBuscado(this -> getDimContenidoBuscado() - 10);
	}
	if (this -> getDimContenidoBuscado() != dim_inicial) {
		Contenido* *vector = new Contenido*[this -> getDimContenidoBuscado()];
		for (int contenido = 0; contenido < this -> getUtilContenidoBuscado(); contenido++) {
			vector[contenido] = &(this -> getContenidoBuscado(contenido));
		}
		for (int contenido = 0; contenido < this -> getUtilContenidoBuscado(); contenido++) {
			this -> v_contenido_buscado[contenido] = 0;
		}
		delete [] this -> v_contenido_buscado;
		this -> v_contenido_buscado = vector;
	}
}

Usuario& Usuario::operator=(Usuario &u) {
	this -> setUsuario(u.getId(), u.getUserName(), u.getContrasenia(), u.getNombre(), u.getApe1(), u.getApe2(), u.getFechaNac(), u.getActivo(), u.getTipo());
	for (int contenido = 0; contenido < this -> getUtilContenidoVisualizado(); contenido++) {
		this -> v_contenido_visualizado = 0;
	}
	this -> setUtilContenidoVisualizado(0);
	this -> resizeContenidoVisualizado(this -> getUtilContenidoVisualizado());
	for (int contenido = 0; contenido < this -> getUtilContenidoMg(); contenido++) {
		this -> v_contenido_mg = 0;
	}
	this -> setUtilContenidoMg(0);
	this -> resizeContenidoMg(this -> getUtilContenidoMg());
	for (int contenido = 0; contenido < this -> getUtilContenidoValorado(); contenido++) {
		this -> v_contenido_valorado = 0;
	}
	this -> setUtilContenidoValorado(0);
	this -> resizeContenidoValorado(this -> getUtilContenidoValorado());
	for (int contenido = 0; contenido < this -> getUtilContenidoBuscado(); contenido++) {
		this -> v_contenido_buscado = 0;
	}
	this -> setUtilContenidoBuscado(0);
	this -> resizeContenidoBuscado(this -> getUtilContenidoBuscado());
	return *this;
}

ostream& operator<<(ostream &flujo, Usuario &u) {
	flujo << endl << u.getTipo() << " " << u.getId() << endl;
	flujo << "Username: " << u.getUserName() << endl;
	flujo << u.getNombre() << " " << u.getApe1() << " " << u.getApe2() << " " << u.getFechaNac() << endl;
	flujo << "Contrasenia: " << u.getContrasenia()  << endl;
	cout  << "Contenidos visualizados: " << u.getUtilContenidoVisualizado() << endl;
	cout << "Me gustas: " << u.getUtilContenidoMg() << endl;
	cout << "No me gustas: " << u.getUtilContenidoNomg() << endl << endl;
	return flujo;
}

bool Usuario::comprobarContrasenia(const string &contrasenia) {
	bool igual = false;
	if (contrasenia == this -> getContrasenia()) {
		igual = true;
	}
	return igual;
}
