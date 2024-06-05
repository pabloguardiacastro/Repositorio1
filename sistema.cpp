#include <iostream>
#include <string.h>
#include "fecha.h"
#include "usuario.h"
#include "contenido.h"
#include "valoracion.h"
#include "sistem.h"
using namespace std;

int Sistema::getUtilUsuarios() {
	return this -> util_usuarios;
}

int Sistema::getDimUsuarios() {
	return this -> dim_usuarios;
}

int Sistema::getUtilContenidos() {
	return this -> util_contenidos;
}

int Sistema::getDimContenidos() {
	return this -> dim_contenidos;
}

int Sistema::getUtilValoraciones() {
	return this -> util_valoraciones;
}

int Sistema::getDimValoraciones() {
	return this -> dim_valoraciones;
}

int Sistema::getTotalPlayed() {
	return this -> totalPlayed;
}

int Sistema::getTotalValorated() {
	return this -> totalValorated;
}

int Sistema::getTotalLikes() {
	return this -> totalLikes;
}

int Sistema::getTotalUnlikes() {
	return this -> totalUnlikes;
}

void Sistema::setUtilUsuarios(int x) {
	this -> util_usuarios = x;
}

void Sistema::setDimUsuarios(int x) {
	this -> dim_usuarios = x;
}

void Sistema::setUtilContenidos(int x) {
	this -> util_contenidos = x;
}

void Sistema::setDimContenidos(int x) {
	this -> dim_contenidos = x;
}

void Sistema::setUtilValoraciones(int x) {
	this -> util_valoraciones = x;
}

void Sistema::setDimValoraciones(int x) {
	this -> dim_valoraciones = x;
}

void Sistema::setTotalPlayed(int x) {
	this -> totalPlayed = x;
}

void Sistema::setTotalValorated(int x) {
	this -> totalValorated = x;
}

void Sistema::setTotalLikes(int x) {
	this -> totalLikes = x;
}

void Sistema::setTotalUnlikes(int x) {
	this -> totalUnlikes = x;
}

Usuario& Sistema::getUsuario(int pos) {
	return this -> v_usuarios[pos];
}

Contenido& Sistema::getContenido(int pos) {
	return *(this -> v_contenidos[pos]);
}

Valoracion& Sistema::getValoracion(int pos) {
	return this -> v_valoraciones[pos];
}

void Sistema::setUsuario(int pos, Usuario &u) {
	if (pos >= 0) {
		if (pos < this -> getUtilUsuarios()) {
			this -> v_usuarios[pos] = u;
		} else if (this -> getUtilUsuarios() < this -> getDimUsuarios()) {
			this -> v_usuarios[this -> getUtilUsuarios()] = u;
			this -> setUtilUsuarios(this -> getUtilUsuarios() + 1);
		} else {
			this -> resizeUsuarios(this -> getUtilUsuarios() + 1);
			this -> v_usuarios[this -> getUtilUsuarios()] = u;
			this -> setUtilUsuarios(this -> getUtilUsuarios() + 1);
		}
	}
}

void Sistema::setContenido(int pos, Contenido &c) {
	if (pos >= 0) {
		if (pos < this -> getUtilContenidos()) {
			this -> v_contenidos[pos] = &c;
		} else if (this -> getUtilContenidos() < this -> getDimContenidos()) {
			this -> v_contenidos[this -> getUtilContenidos()] = &c;
			this -> setUtilContenidos(this -> getUtilContenidos() + 1);
		} else {
			this -> resizeContenidos(this -> getUtilContenidos() + 1);
			this -> v_contenidos[this -> getUtilContenidos()] = &c;
			this -> setUtilContenidos(this -> getUtilContenidos() + 1);
		}
	}
}

void Sistema::setValoracion(int pos, Valoracion &v) {
	if (pos >= 0) {
		if (pos < this -> getUtilValoraciones()) {
			this -> v_valoraciones[pos] = v;
		} else if (this -> getUtilValoraciones() < this -> getDimValoraciones()) {
			this -> v_valoraciones[this -> getUtilValoraciones()] = v;
			this -> setUtilValoraciones(this -> getUtilValoraciones() + 1);
		} else {
			this -> resizeValoraciones(this -> getUtilValoraciones() + 1);
			this -> v_valoraciones[this -> getUtilValoraciones()] = v;
			this -> setUtilValoraciones(this -> getUtilValoraciones() + 1);
		}
	}
}

Sistema::Sistema() {
	this -> setDimUsuarios(10);
	this -> setUtilUsuarios(0);
	this -> v_usuarios = new Usuario[this -> getDimUsuarios()];
	this -> setDimContenidos(10);
	this -> setUtilContenidos(0);
	this -> v_contenidos = new Contenido*[this -> getDimContenidos()];
	this -> setDimValoraciones(10);
	this -> setUtilValoraciones(0);
	this -> v_valoraciones = new Valoracion[this -> getDimValoraciones()];
	this -> setTotalPlayed(0);
	this -> setTotalValorated(0);
	this -> setTotalLikes(0);
	this -> setTotalUnlikes(0);
	
	Fecha f[15];
	f[0].setFecha(14, 8, 1999);
	f[1].setFecha(10, 6, 2004);
	f[2].setFecha(29, 10, 2001);
	f[3].setFecha(24, 3, 2004);
	f[4].setFecha(28, 12, 2000);
	f[5].setFecha(5, 7, 2004);
	f[6].setFecha(14, 2, 2004);
	f[7].setFecha(12, 11, 2003);
	f[8].setFecha(20, 4, 2004);
	f[9].setFecha(21, 9, 2004);
	f[10].setFecha(16, 3, 2004);
	f[11].setFecha(21, 2, 1991);
	f[12].setFecha(16, 10, 2005);
	f[13].setFecha(19, 12, 2001);
	f[14].setFecha(22, 11, 1999);
	
	Usuario u[15];
	u[0].setUsuario(0, "night-man", "jdsf", "José David", "Sánchez", "Fernández", f[0], true, "cliente");
	u[1].setUsuario(1, "ice-man", "gatogordo", "Pablo", "Guardia", "Castro", f[1], true, "admin");
	u[2].setUsuario(2, "dfpm", "halaMadrid10", "David Francesc", "Pons", "Moll", f[2], true, "cliente");
	u[3].setUsuario(3, "sergio24m", "242424", "Sergio", "Contreras", "Lucas", f[3], true, "cliente");
	u[4].setUsuario(4, "polgs", "ms19", "Henry Paul", "García", "Simbaña", f[4], true, "cliente");
	u[5].setUsuario(5, "AntMan", "aguakate9", "Antonio Manuel", "Velasco", "Rivera", f[5], true, "cliente");
	u[6].setUsuario(6, "alexmrdgz", "q7r8m5", "Alejandro", "Miranda", "Rodríguez", f[6], true, "cliente");
	u[7].setUsuario(7, "llamasl", "7654", "Luis", "LLamas", "Ramón", f[7], true, "cliente");
	u[8].setUsuario(8, "game-master", "toilette", "Carlos", "Polo", "Martín", f[8], true, "cliente");
	u[9].setUsuario(9, "AlexMrtnzz21", "q100", "Alejandro", "Martínez", "Suárez", f[9], true, "cliente");
	u[10].setUsuario(10, "AuraEqualizer", "Ludopatia1600", "María", "Garrido", "Castellano", f[10], true, "cliente");
	u[11].setUsuario(11, "teffuka", "1234", "Natalia", "Serantes", "Cortez", f[11], true, "cliente");
	u[12].setUsuario(12, "madridistashdp", "culehastalamuerte", "Gonzalo", "Bouso", "Gómez", f[12], true, "cliente");
	u[13].setUsuario(13, "kxnxdx", "3333", "Cristina", "López", "Cabrera", f[13], true, "cliente");
	u[14].setUsuario(14, "Napoleon", "221199", "Hanok", "Martín", "Expósito", f[14], true, "cliente");
	for (int usuario = 0; usuario < 15; usuario++) {
		this -> setUsuario(this -> getUtilUsuarios(), u[this -> getUtilUsuarios()]);
	}
	
	Fecha f2[10];
	f2[0].setFecha(19, 10, 2014);
	f2[1].setFecha(31, 6, 1999);
	f2[2].setFecha(3, 10, 2008);
	f2[3].setFecha(13, 1, 1995);
	f2[4].setFecha(26, 7, 2019);
	f2[5].setFecha(6, 9, 2003);
	f2[6].setFecha(25, 4, 2019);
	f2[7].setFecha(8, 1, 2021);
	f2[8].setFecha(2, 5, 2017);
	f2[9].setFecha(11, 7, 2016);
	
	Pelicula *c0 = new Pelicula;
	Pelicula *c1 = new Pelicula;
	Serie *c2 = new Serie;
	Pelicula *c3 = new Pelicula;
	Serie *c4 = new Serie;
	Serie *c5 = new Serie;
	Pelicula *c6 = new Pelicula;
	Serie *c7 = new Serie;
	Serie *c8 = new Serie;
	Serie *c9 = new Serie;
	c0 -> setPelicula(0, "El corredor del laberinto", f2[0], 113 , "Ciencia Ficción", 6.8 , 511000, "Wes Ball");
	c1 -> setPelicula(1, "The Matrix", f2[1], 136 , "Ciencia Ficción", 8.7 , 2100000, "Lilly Wachowski");
	c2 -> setSerie(2, "Star Wars: The Clone Wars", f2[2], 23 , "Ciencia Ficción", 8.4 , 121000, 133);
	c3 -> setPelicula(3, "Pulp Fiction", f2[3], 154 , "Crimen", 8.9 , 2200000, "Quentin Tarantino");
	c4 -> setSerie(4, "The boys", f2[4], 60 , "Acción", 8.7 , 656000, 24);
	c5 -> setSerie(5, "One piece", f2[5], 24 , "Animación", 10 , 2100000, 1105);
	c6 -> setPelicula(6, "Vengadores: Endgame", f2[6], 143 , "Acción", 8.4 , 1300000, "Joe Russo");
	c7 -> setSerie(7, "Lupin", f2[7], 45 , "Crimen", 7.5 , 139000, 17);
	c8 -> setSerie(8, "La casa de papel", f2[8], 60 , "Crimen", 8.2 , 534000, 48);
	c9 -> setSerie(9, "Stranger Things", f2[9], 60 , "Fantasía", 8.7 , 1300000, 34);
	this -> setContenido(this -> getUtilContenidos(), *(c0));
	this -> setContenido(this -> getUtilContenidos(), *(c1));
	this -> setContenido(this -> getUtilContenidos(), *(c2));
	this -> setContenido(this -> getUtilContenidos(), *(c3));
	this -> setContenido(this -> getUtilContenidos(), *(c4));
	this -> setContenido(this -> getUtilContenidos(), *(c5));
	this -> setContenido(this -> getUtilContenidos(), *(c6));
	this -> setContenido(this -> getUtilContenidos(), *(c7));
	this -> setContenido(this -> getUtilContenidos(), *(c8));
	this -> setContenido(this -> getUtilContenidos(), *(c9));
	
	Fecha f3[45];
	f3[0].setFecha(7, 11, 2022);
	f3[1].setFecha(18, 9, 2021);
	f3[2].setFecha(19, 12, 2023);
	f3[3].setFecha(2, 12, 2020);
	f3[4].setFecha(19, 6, 2023);
	f3[5].setFecha(7, 9, 2009);
	f3[6].setFecha(7, 11, 2023);
	f3[7].setFecha(14, 7, 2022);
	f3[8].setFecha(17, 10, 2024);
	f3[9].setFecha(19, 7, 2024);
	f3[10].setFecha(20, 8, 2023);
	f3[11].setFecha(15, 5, 2016);
	f3[12].setFecha(19, 4, 2019);
	f3[13].setFecha(21, 7, 2016);
	f3[14].setFecha(20, 9, 2015);
	f3[15].setFecha(22, 1, 2016);
	f3[16].setFecha(23, 7, 2019);
	f3[17].setFecha(24, 10, 2014);
	f3[18].setFecha(25, 3, 2022);
	f3[19].setFecha(26, 4, 2019);
	f3[20].setFecha(27, 5, 2017);
	f3[21].setFecha(17, 5, 2018);
	f3[22].setFecha(2, 4, 2019);
	f3[23].setFecha(30, 3, 2022);
	f3[24].setFecha(1, 4, 2019);
	f3[25].setFecha(2, 4, 2016);
	f3[26].setFecha(3, 4, 2021);
	f3[27].setFecha(24, 1, 2022);
	f3[28].setFecha(20, 8, 2023);
	f3[29].setFecha(29, 7, 2024);
	f3[30].setFecha(30, 12, 2017);
	f3[31].setFecha(24, 6, 2013);
	f3[32].setFecha(21, 9, 2021);
	f3[33].setFecha(11, 7, 2012);
	f3[34].setFecha(21, 6, 2020);
	f3[35].setFecha(1, 1, 2021);
	f3[36].setFecha(5, 6, 2021);
	f3[37].setFecha(29, 8, 2002);
	f3[38].setFecha(29, 8, 2002);
	f3[39].setFecha(2, 2, 2024);
	f3[40].setFecha(2, 2, 2021);
	f3[41].setFecha(1, 3, 2022);
	f3[42].setFecha(28, 4, 2019);
	f3[43].setFecha(18, 5, 2024);
	f3[44].setFecha(31, 7, 2023);
	
	Valoracion v[45];
	v[0].setValoracion(0, this -> getContenido(1), this -> getUsuario(0), 4.45, f3[0]);
	v[1].setValoracion(1, this -> getContenido(5), this -> getUsuario(0), 5, f3[1]);
	v[2].setValoracion(2, this -> getContenido(9), this -> getUsuario(0), 1.75, f3[2]);
	v[3].setValoracion(3, this -> getContenido(6), this -> getUsuario(1), 4.5, f3[3]);
	v[4].setValoracion(4, this -> getContenido(4), this -> getUsuario(1), 3, f3[4]);
	v[5].setValoracion(5, this -> getContenido(2), this -> getUsuario(1), 3.65, f3[5]);
	v[6].setValoracion(6, this -> getContenido(5), this -> getUsuario(2), 5, f3[6]);
	v[7].setValoracion(7, this -> getContenido(8), this -> getUsuario(2), 4.15, f3[7]);
	v[8].setValoracion(8, this -> getContenido(7), this -> getUsuario(2), 3.9, f3[8]);
	v[9].setValoracion(9, this -> getContenido(0), this -> getUsuario(3), 2.5, f3[9]);
	v[10].setValoracion(10, this -> getContenido(8), this -> getUsuario(3), 3.5, f3[10]);
	v[11].setValoracion(11, this -> getContenido(5), this -> getUsuario(3), 2.5, f3[11]);
	v[12].setValoracion(12, this -> getContenido(6), this -> getUsuario(4), 4.35, f3[12]);
	v[13].setValoracion(13, this -> getContenido(9), this -> getUsuario(4), 4.5, f3[13]);
	v[14].setValoracion(14, this -> getContenido(5), this -> getUsuario(4), 4.9, f3[14]);
	v[15].setValoracion(15, this -> getContenido(3), this -> getUsuario(5), 4.65, f3[15]);
	v[16].setValoracion(16, this -> getContenido(4), this -> getUsuario(5), 1.15, f3[16]);
	v[17].setValoracion(17, this -> getContenido(0), this -> getUsuario(5), 3.55, f3[17]);
	v[18].setValoracion(18, this -> getContenido(2), this -> getUsuario(6), 3.95, f3[18]);
	v[19].setValoracion(19, this -> getContenido(6), this -> getUsuario(6), 3.25, f3[19]);
	v[20].setValoracion(20, this -> getContenido(8), this -> getUsuario(6), 2.55, f3[20]);
	v[21].setValoracion(21, this -> getContenido(0), this -> getUsuario(7), 4.15, f3[21]);
	v[22].setValoracion(22, this -> getContenido(1), this -> getUsuario(7), 4.5, f3[22]);
	v[23].setValoracion(23, this -> getContenido(9), this -> getUsuario(7), 4.4, f3[23]);
	v[24].setValoracion(24, this -> getContenido(4), this -> getUsuario(8), 4.35, f3[24]);
	v[25].setValoracion(25, this -> getContenido(3), this -> getUsuario(8), 4.6, f3[25]);
	v[26].setValoracion(26, this -> getContenido(7), this -> getUsuario(8), 3.8, f3[26]);
	v[27].setValoracion(27, this -> getContenido(0), this -> getUsuario(9), 3, f3[27]);
	v[28].setValoracion(28, this -> getContenido(3), this -> getUsuario(9), 3.5, f3[28]);
	v[29].setValoracion(29, this -> getContenido(5), this -> getUsuario(9), 5, f3[29]);
	v[30].setValoracion(30, this -> getContenido(8), this -> getUsuario(10), 4.25, f3[30]);
	v[31].setValoracion(31, this -> getContenido(3), this -> getUsuario(10), 5, f3[31]);
	v[32].setValoracion(32, this -> getContenido(9), this -> getUsuario(10), 3.75, f3[32]);
	v[33].setValoracion(33, this -> getContenido(5), this -> getUsuario(11), 5, f3[33]);
	v[34].setValoracion(34, this -> getContenido(6), this -> getUsuario(11), 5, f3[34]);
	v[35].setValoracion(35, this -> getContenido(4), this -> getUsuario(11), 2.1, f3[35]);
	v[36].setValoracion(36, this -> getContenido(5), this -> getUsuario(12), 3.75, f3[36]);
	v[37].setValoracion(37, this -> getContenido(1), this -> getUsuario(12), 4, f3[37]);
	v[38].setValoracion(38, this -> getContenido(3), this -> getUsuario(12), 1.75, f3[38]);
	v[39].setValoracion(39, this -> getContenido(5), this -> getUsuario(13), 5, f3[39]);
	v[40].setValoracion(40, this -> getContenido(8), this -> getUsuario(13), 3.85, f3[40]);
	v[41].setValoracion(41, this -> getContenido(2), this -> getUsuario(13), 5, f3[41]);
	v[42].setValoracion(42, this -> getContenido(6), this -> getUsuario(14), 3.9, f3[42]);
	v[43].setValoracion(43, this -> getContenido(5), this -> getUsuario(14), 4.5, f3[43]);
	v[44].setValoracion(44, this -> getContenido(0), this -> getUsuario(14), 4.25, f3[44]);
	for (int valoracion = 0; valoracion < 45; valoracion++) {
		this -> setValoracion(this -> getUtilValoraciones(), v[this -> getUtilValoraciones()]);
	}
	
	for (int usuario = 0; usuario < 15; usuario++) {
		for (int valoracion = 0; valoracion < 3; valoracion++) {
			Contenido *elegido = &(this -> getValoracion(usuario * 3 + valoracion).getContenido());
			this -> getUsuario(usuario).setContenidoVisualizado(usuario, *(elegido));
			this -> setTotalPlayed(this -> getTotalPlayed() + 1);
			elegido -> setTimesPlayed(elegido -> getTimesPlayed() + 1);
			if (this -> getValoracion(usuario * 3 + valoracion).getCalificacion() >= 2.5) {
				this -> getUsuario(usuario).setContenidoMg(usuario, *(elegido));
				this -> setTotalLikes(this -> getTotalLikes() + 1);
				elegido -> setTimesLiked(elegido -> getTimesLiked() + 1);
			} else {
				this -> getUsuario(usuario).setContenidoNomg(usuario, *(elegido));
				this -> setTotalUnlikes(this -> getTotalUnlikes() + 1);
				elegido -> setTimesNotLiked(elegido -> getTimesNotLiked() + 1);
			}
			this -> getUsuario(usuario).setContenidoValorado(usuario, *(elegido));
			this -> setTotalValorated(this -> getTotalValorated() + 1);
		}
	}
	
	this -> calcularCristoflixRating();
}

Sistema::~Sistema() {
	Fecha f;
	Usuario u;
	for (int usuario = 0; usuario < this -> getUtilUsuarios(); usuario++) {
		this -> setUsuario(usuario, u);
	}
	this -> setUtilUsuarios(0);
	this -> setDimUsuarios(0);
	delete [] this -> v_usuarios;
	this -> v_usuarios = 0;
	
	Contenido c;
	for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
		delete this -> v_contenidos[contenido];
		this -> v_contenidos[contenido] = 0;
	}
	this -> setUtilContenidos(0);
	this -> setDimContenidos(0);
	delete [] this -> v_contenidos;
	this -> v_contenidos = 0;
	Valoracion v;
	for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
		this -> setValoracion(valoracion, v);
	}
	this -> setUtilValoraciones(0);
	this -> setDimValoraciones(0);
	delete [] this -> v_valoraciones;
	this -> v_valoraciones = 0;
}

void Sistema::resizeUsuarios(int tamanio) {
	int dim_inicial = this -> getDimUsuarios();
	while (tamanio > this -> getDimUsuarios()) {
		this -> setDimUsuarios(this -> getDimUsuarios() + 10);
	}
	while (tamanio <= this -> getDimUsuarios() - 10 && this -> getDimUsuarios() > 10) {
		this -> setDimUsuarios(this -> getDimUsuarios() - 10);
	}
	if (this -> getDimUsuarios() != dim_inicial) {
		Usuario *vector = new Usuario[this -> getDimUsuarios()];
		for (int usuario = 0; usuario < this -> getUtilUsuarios(); usuario++) {
			vector[usuario] = this -> getUsuario(usuario);
		}
		Fecha f;
		Usuario u;
		u.setUsuario(0, "", "", "", "", "", f, false, "");
		for (int usuario = 0; usuario < this -> getUtilUsuarios(); usuario++) {
			this -> v_usuarios[usuario] = u;
		}
		delete [] this -> v_usuarios;
		this -> v_usuarios = vector;
	}
}

void Sistema::resizeContenidos(int tamanio) {
	int dim_inicial = this -> getDimContenidos();
	while (tamanio > this -> getDimContenidos()) {
		this -> setDimContenidos(this -> getDimContenidos() + 10);
	}
	while (tamanio <= this -> getDimContenidos() - 10 && this -> getDimContenidos() > 10) {
		this -> setDimContenidos(this -> getDimContenidos() - 10);
	}
	if (this -> getDimContenidos() != dim_inicial) {
		Contenido* *vector = new Contenido*[this -> getDimContenidos()];
		for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
			vector[contenido] = &(this -> getContenido(contenido));
		}
		for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
			this -> v_contenidos[contenido] = 0;
		}
		delete [] this -> v_contenidos;
		this -> v_contenidos = vector;
	}
}

void Sistema::resizeValoraciones(int tamanio) {
	int dim_inicial = this -> getDimValoraciones();
	while (tamanio > this -> getDimValoraciones()) {
		this -> setDimValoraciones(this -> getDimValoraciones() + 10);
	}
	while (tamanio <= this -> getDimValoraciones() - 10 && this -> getDimValoraciones() > 10) {
		this -> setDimValoraciones(this -> getDimValoraciones() - 10);
	}
	if (this -> getDimValoraciones() != dim_inicial) {
		Valoracion *vector = new Valoracion[this -> getDimValoraciones()];
		for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
			vector[valoracion] = this -> getValoracion(valoracion);
		}
		Valoracion v;
		for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
			this -> v_valoraciones[valoracion] = v;
		}
		delete [] this -> v_valoraciones;
		this -> v_valoraciones = vector;
	}
}

ostream& operator<<(ostream &flujo, Sistema &s) {
	flujo << endl << "USUARIOS" << endl;
	for (int usuario = 0; usuario < s.getUtilUsuarios(); usuario++) {
		flujo << s.getUsuario(usuario) << endl;
	}
	flujo << endl << "CONTENIDOS" << endl;
	for (int contenido = 0; contenido < s.getUtilContenidos(); contenido++) {
		s.getContenido(contenido).print();
		flujo << endl;
	}
	flujo << endl << "VALORACIONES" << endl;
	for (int valoracion = 0; valoracion < s.getUtilValoraciones(); valoracion++) {
		flujo << s.getValoracion(valoracion) << endl;
	}
	flujo << endl;
	flujo << "Total Played: " << s.getTotalPlayed() << endl;
	flujo << "Total Liked: " << s.getTotalLikes() << endl;
	flujo << "Total Disliked: " << s.getTotalUnlikes() << endl;
	return flujo;
}

int Sistema::buscarUsuarioPorId(int id) {
	int pos;
	bool encontrado = false;
	for (pos = 0; pos < this -> getUtilUsuarios() && !encontrado; pos++) {
		if (this -> getUsuario(pos).getId() == id) {
			encontrado = true;
			pos--;
		}
	}
	return pos;
}

int Sistema::buscarUsuarioPorUserName(const string &userName) {
	int pos;
	bool encontrado = false;
	for (pos = 0; pos < this -> getUtilUsuarios() && !encontrado; pos++) {
		if (this -> getUsuario(pos).getUserName() == userName) {
			encontrado = true;
			pos--;
		}
	}
	return pos;
}

int Sistema::login() {
	string userName, password;
	bool correcto = false;
	int id, pos;
	cout << "Iniciar sesión" << endl << endl;
	do {
		cout << "UserName: ";
		cin >> userName;
		cout << "Contrasenia: ";
		cin >> password;
		pos = this -> buscarUsuarioPorUserName(userName);
		if (pos < this -> getUtilUsuarios()) {
			correcto = this -> getUsuario(pos).comprobarContrasenia(password);
		}
		if (!correcto) {
			cout << "El userName o la contrasenia son incorrectos" << endl;
		}
	} while (!correcto);
	cout << endl << "Ha iniciado sesión como " << this -> getUsuario(pos).getUserName() << endl << endl;
	return this -> getUsuario(pos).getId();
}

void Sistema::consultarValoracionesUsuario(int id) {
	Valoracion* valoracionesUsuario[this -> getUtilValoraciones()];
	int util_valoraciones_usuario = 0;
	int pos = this -> buscarUsuarioPorId(id), idCont;
	for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
		if (id == this -> getValoracion(valoracion).getUsuario().getId()) {
			valoracionesUsuario[util_valoraciones_usuario] = &(this -> getValoracion(valoracion));
			util_valoraciones_usuario++;
		}
	}
	cout << endl << "Contenidos visualizados: " << this -> getUsuario(pos).getUtilContenidoVisualizado() << endl;
	cout << "Me gustas: " << this -> getUsuario(pos).getUtilContenidoMg() << endl;
	cout << "No me gustas: " << this -> getUsuario(pos).getUtilContenidoNomg() << endl << endl;
	cout << "VALORACIONES" << endl;
	if (util_valoraciones_usuario == 0) {
		cout << "Aún no has valorado ningún contenido" << endl;
	} else {
		for (int valoracion = 0; valoracion < util_valoraciones_usuario; valoracion++) {
			cout << *(valoracionesUsuario[valoracion]) << endl;
		}
	}
}

void Sistema::valorarContenido(int id) {
	bool encontrado = false, valido = false;
	int pos = this -> buscarUsuarioPorId(id), idCont;
	float calificacion;
	cout << endl;
	if (this -> getUsuario(pos).getUtilContenidoVisualizado() == 0) {
		cout << "Debes visualizar al menos un contenido antes de hacer una valoración" << endl;
	} else {
		for (int contenido = 0; contenido < this -> getUsuario(pos).getUtilContenidoVisualizado(); contenido++) {
			this -> getUsuario(pos).getContenidoVisualizado(contenido).print();
			cout << endl;
		}
		cout << endl << "Introduce el id del contenido que quieres valorar: ";
		do {
			cin >> idCont;
			for (int contenido = 0; contenido < this -> getUsuario(pos).getUtilContenidoVisualizado() && !encontrado; contenido++) {
				if (idCont == this -> getUsuario(pos).getContenidoVisualizado(contenido).getId()) {
					encontrado = true;
				}
			}
			if (!encontrado) {
				cout << "El id no pertenece a ninguno de tus contenidos visualizados, introduce otro distinto: ";
			}
		} while (!encontrado);
		cout << "¿Cuántas estrellas vas a ponerle al contenido?: ";
		do {
			cin >> calificacion;
			if (calificacion >= 0 && calificacion <= 5) {
				valido = true;
			}
			if (!valido) {
				cout << "La cantidad debe estar entre 0 y 5: ";
			}
		} while (!valido);
		encontrado = false;
		for (int contenido = 0; contenido < this -> getUsuario(pos).getUtilContenidoValorado() && !encontrado; contenido++) {
			if (idCont == this -> getUsuario(pos).getContenidoValorado(contenido).getId()) {
				encontrado = true;
			}
		}
		if (!encontrado) {
			this -> getUsuario(pos).setContenidoValorado(this -> getUsuario(pos).getUtilContenidoValorado(), this -> getContenido(idCont));
		}
		Valoracion valoracion;
		Fecha fecha;
		fecha.setFecha(29, 5, 2024);
		valoracion.setValoracion(this -> getUtilValoraciones(), this -> getContenido(idCont), this -> getUsuario(id), calificacion, fecha);
		this -> setValoracion(this -> getUtilValoraciones(), valoracion);
	}
}

void Sistema::gustarContenido(int id) {
	int pos = this -> buscarUsuarioPorId(id);
	cout << endl;
	if (this -> getUsuario(pos).getUtilContenidoVisualizado() == 0) {
		cout << "Debes visualizar al menos un contenido antes de hacer una valoración" << endl;
	} else {
		Contenido* v_contenido[this -> getUsuario(pos).getUtilContenidoVisualizado()];
		Contenido* elegido;
		int util_contenido = 0;
		for (int contenido = 0; contenido < this -> getUsuario(pos).getUtilContenidoVisualizado(); contenido++) {
			Contenido *visto = &(this -> getUsuario(pos).getContenidoVisualizado(contenido));
			bool valido = true;
			for (int mg = 0; mg < this -> getUsuario(pos).getUtilContenidoMg() && valido; mg++) {
				if (visto == &(this -> getUsuario(pos).getContenidoMg(mg))) {
					valido = false;
				}
			}
			for (int nomg = 0; nomg < this -> getUsuario(pos).getUtilContenidoNomg() && valido; nomg++) {
				if (visto == &(this -> getUsuario(pos).getContenidoNomg(nomg))) {
					valido = false;
				}
			}
			if (valido) {
				v_contenido[util_contenido] = visto;
				util_contenido++;
			}
		}
		if (util_contenido == 0) {
			cout << "Ya le has dado me gusta/no me gusta a todos tus contenidos visualizados" << endl;
		} else {
			for (int contenido = 0; contenido < util_contenido; contenido++) {
				v_contenido[contenido] -> print();
				cout << endl;
			}
			int idCont;
			char gusta;
			bool encontrado = false, valido = false;
			cout << endl << "Introduce el id del contenido que quieres valorar: ";
			do {
				cin >> idCont;
				for (int contenido = 0; contenido < util_contenido && !encontrado; contenido++) {
					if (idCont == v_contenido[contenido] -> getId()) {
						encontrado = true;
						elegido = v_contenido[contenido];
					}
				}
				if (!encontrado) {
					cout << "El id no pertenece a ninguno de tus contenidos visualizados, introduce otro distinto: ";
				}
			} while (!encontrado);
			this -> getUsuario(pos).setContenidoMg(this -> getUsuario(pos).getUtilContenidoMg(), *(elegido));
			this -> setTotalLikes(this -> getTotalLikes() + 1);
			elegido -> setTimesLiked(elegido -> getTimesLiked() + 1);
		}
	}
}

void Sistema::nogustarContenido(int id) {
	int pos = this -> buscarUsuarioPorId(id);
	cout << endl;
	if (this -> getUsuario(pos).getUtilContenidoVisualizado() == 0) {
		cout << "Debes visualizar al menos un contenido antes de hacer una valoración" << endl;
	} else {
		Contenido* v_contenido[this -> getUsuario(pos).getUtilContenidoVisualizado()];
		Contenido* elegido;
		int util_contenido = 0;
		for (int contenido = 0; contenido < this -> getUsuario(pos).getUtilContenidoVisualizado(); contenido++) {
			Contenido *visto = &(this -> getUsuario(pos).getContenidoVisualizado(contenido));
			bool valido = true;
			for (int mg = 0; mg < this -> getUsuario(pos).getUtilContenidoMg() && valido; mg++) {
				if (visto == &(this -> getUsuario(pos).getContenidoMg(mg))) {
					valido = false;
				}
			}
			for (int nomg = 0; nomg < this -> getUsuario(pos).getUtilContenidoNomg() && valido; nomg++) {
				if (visto == &(this -> getUsuario(pos).getContenidoNomg(nomg))) {
					valido = false;
				}
			}
			if (valido) {
				v_contenido[util_contenido] = visto;
				util_contenido++;
			}
		}
		if (util_contenido == 0) {
			cout << "Ya le has dado me gusta/no me gusta a todos tus contenidos visualizados" << endl;
		} else {
			for (int contenido = 0; contenido < util_contenido; contenido++) {
				v_contenido[contenido] -> print();
				cout << endl;
			}
			int idCont;
			char gusta;
			bool encontrado = false, valido = false;
			cout << endl << "Introduce el id del contenido que quieres valorar: ";
			do {
				cin >> idCont;
				for (int contenido = 0; contenido < util_contenido && !encontrado; contenido++) {
					if (idCont == v_contenido[contenido] -> getId()) {
						encontrado = true;
						elegido = v_contenido[contenido];
					}
				}
				if (!encontrado) {
					cout << "El id no pertenece a ninguno de tus contenidos visualizados, introduce otro distinto: ";
				}
			} while (!encontrado);
			this -> getUsuario(pos).setContenidoNomg(this -> getUsuario(pos).getUtilContenidoNomg(), *(elegido));
			this -> setTotalUnlikes(this -> getTotalUnlikes() + 1);
			elegido -> setTimesNotLiked(elegido -> getTimesNotLiked() + 1);
		}
	}
}

void Sistema::visualizarContenido(int id) {
	int pos = this -> buscarUsuarioPorId(id), idCont, calificacion;
	bool encontrado = false, valido = false;
	Contenido* elegido;
	cout << endl << "Introduce el id del contenido que quieres buscar: ";
	do {
		cin >> idCont;
		for (int contenido = 0; contenido < this -> getUtilContenidos() && !encontrado; contenido++) {
			if (idCont == this -> getContenido(contenido).getId()) {
				encontrado = true;
				elegido = &(this -> getContenido(contenido));
			}
		}
		if (!encontrado) {
			cout << "El id no pertenece a ningún contenido existente: ";
		}
	} while (!encontrado);
	encontrado = false;
	for (int contenido = 0; contenido < this -> getUsuario(pos).getUtilContenidoVisualizado() && !encontrado; contenido++) {
		if (idCont == this -> getUsuario(pos).getContenidoVisualizado(contenido).getId()) {
			encontrado = true;
		}
	}
	if (!encontrado) {
		this -> getUsuario(pos).setContenidoVisualizado(this -> getUsuario(pos).getUtilContenidoVisualizado(), *(elegido));
	}
	elegido -> setTimesPlayed(elegido -> getTimesPlayed() + 1);
	this -> setTotalPlayed(this -> getTotalPlayed() + 1);
	if (Serie *s = dynamic_cast<Serie*>(elegido)) {
		cout << endl << "Ves " << s -> getTitulo() << " durante " << s -> getDuracion() * s -> getCapitulos() << " minutos" << endl;
	} else {
		cout << endl << "Ves " << elegido -> getTitulo() << " durante " << elegido -> getDuracion() << " minutos" << endl;
	}
	cout << "¿Cuántas estrellas vas a ponerle al contenido?: ";
	do {
		cin >> calificacion;
		if (calificacion >= 0 && calificacion <= 5) {
			valido = true;
		}
		if (!valido) {
			cout << "La cantidad debe estar entre 0 y 5: ";
		}
	} while (!valido);
	for (int contenido = 0; contenido < this -> getUsuario(pos).getUtilContenidoValorado() && !encontrado; contenido++) {
		if (idCont == this -> getUsuario(pos).getContenidoValorado(contenido).getId()) {
			encontrado = true;
		}
	}
	if (!encontrado) {
		this -> getUsuario(pos).setContenidoValorado(this -> getUsuario(pos).getUtilContenidoValorado(), *(elegido));
	}
	Valoracion valoracion;
	Fecha fecha;
	fecha.setFecha(29, 5, 2024);
	valoracion.setValoracion(this -> getUtilValoraciones(), *(elegido), this -> getUsuario(id), calificacion, fecha);
	this -> setValoracion(this -> getUtilValoraciones(), valoracion);
}

void Sistema::calcularCristoflixRating() {
	for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
		Contenido *elegido = &(this -> getContenido(contenido));
		float valoracion = 0, played = 0, mg = 0, nomg = 0;
		float v_calificaciones[this -> getUtilValoraciones()];
		int util_calificaciones = 0;
		if (elegido -> getTimesPlayed() > 0) {
			played = (this -> getContenido(contenido).getTimesPlayed() * 2.5 / this -> getTotalPlayed());
		}
		if (elegido -> getTimesLiked() > 0) {
			mg = (this -> getContenido(contenido).getTimesLiked() * 2.5 / this -> getTotalLikes());
		}
		if (elegido -> getTimesNotLiked() > 0) {
			nomg = (this -> getContenido(contenido).getTimesNotLiked() * 2.5 / this -> getTotalUnlikes());
		}
		for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
			if (elegido == &(this -> getValoracion(valoracion).getContenido())) {
				v_calificaciones[util_calificaciones] = this -> getValoracion(valoracion).getCalificacion();
				util_calificaciones++;
			}
		}
		if (util_calificaciones > 0) {
			for (int calificacion = 0; calificacion < util_calificaciones; calificacion++) {
				valoracion += v_calificaciones[calificacion];
			}
			valoracion /= util_calificaciones;
			valoracion /= 2;
		}
		this -> getContenido(contenido).setCristoRating((valoracion + played + mg + nomg));
	}
}

void Sistema::top3General() {
	Contenido *rating[3], *visto[3], *nomg[3];
	int util_rating = 0, util_visto = 0, util_nomg = 0;
	for (int podio = 0; podio < 3; podio++) {
		float mayorRating = 0;
		int masVisto = 0, mayorNomg = 0;
		for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
			Contenido *elegido = &(this -> getContenido(contenido));
			if (elegido != rating[0] && elegido != rating[1] && elegido -> getCristoRating() > mayorRating) {
				rating[podio] = elegido;
				mayorRating = elegido -> getCristoRating();
			}
			if (elegido != visto[0] && elegido != visto[1] && elegido -> getTimesPlayed() > masVisto) {
				visto[podio] = elegido;
				masVisto = elegido -> getTimesPlayed();
			}
			if (elegido != nomg[0] && elegido != nomg[1] && elegido -> getTimesNotLiked() > mayorNomg) {
				nomg[podio] = elegido;
				mayorNomg = elegido -> getTimesNotLiked();
			}
		}
	}
	cout << endl << "Top 3 contenidos mejor valorados del sistema" << endl << endl;
	rating[0] -> print();
	cout << endl;
	rating[1] -> print();
	cout << endl;
	rating[2] -> print();
	cout << endl << "Top 3 contenidos más visualizados del sistema" << endl << endl;
	visto[0] -> print();
	cout << endl;
	visto[1] -> print();
	cout << endl;
	visto[2] -> print();
	cout << endl << "Top 3 contenidos Xavi-Nadie te quiere" << endl << endl;
	nomg[0] -> print();
	cout << endl;
	nomg[1] -> print();
	cout << endl;
	nomg[2] -> print();
	cout << endl;
}

void Sistema::buscarContenido(int id) {
	int eleccion;
	bool valido = false;
	cout << endl << "Selecciona el tipo de búsqueda" << endl << endl;
	cout << "1. Por ID" << endl;
	cout << "2. Por género" << endl;
	do {
		cin >> eleccion;
		if (eleccion >= 1 && eleccion <= 2) {
			valido = true;
		}
		if (!valido) {
			cout << "No has introducido una opción válida: ";
		}
	} while (!valido);
	cout << endl;
	if (eleccion == 1) {
		int idCont;
		bool encontrado = false;
		cout << endl << "Introduce el id del contenido que quieres buscar: ";
		do {
			cin >> idCont;
			for (int contenido = 0; contenido < this -> getUtilContenidos() && !encontrado; contenido++) {
				if (idCont == this -> getContenido(contenido).getId()) {
					encontrado = true;
					this -> getUsuario(id).setUtilContenidoBuscado(0);
					this -> getUsuario(id).setContenidoBuscado(this -> getUsuario(id).getUtilContenidoBuscado(), this -> getContenido(contenido));
				}
			}
			if (!encontrado) {
				cout << "El id no pertenece a ningún contenido existente: ";
			}
		} while (!encontrado);
		cout << endl;
		this -> getUsuario(id).getContenidoBuscado(0).print();
	} else if (eleccion == 2) {
		string genero;
		char cadena[50];
		cout << "Introduce el género del contenido que quieres buscar: ";
		cin.ignore();
		cin.getline(cadena, 50);
		genero = cadena;
		this -> getUsuario(id).setUtilContenidoBuscado(0);
		for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
			if (genero == this -> getContenido(contenido).getGenero()) {
				this -> getUsuario(id).setContenidoBuscado(this -> getUsuario(id).getUtilContenidoBuscado(), this -> getContenido(contenido));
			}
		}
		cout << endl;
		if (this -> getUsuario(id).getUtilContenidoBuscado() == 0) {
			cout << "No hay contenidos de género " << genero << endl;
		} else {
			for (int contenido = 0; contenido < this -> getUsuario(id).getUtilContenidoBuscado(); contenido++) {
				this -> getUsuario(id).getContenidoBuscado(contenido).print();
				cout << endl;
			}
		}
	}
}

void Sistema::topUsuarios() {
	Usuario *dark_night, *facilon, *ofuscated;
	float mediaMayor = 0.0;
	int visto = 0, nomgMayor = 0;
	for (int usuario = 0; usuario < this -> getUtilUsuarios(); usuario++) {
		Usuario *elegido = &(this -> getUsuario(usuario));
		if (elegido -> getUtilContenidoVisualizado() > visto) {
			dark_night = elegido;
			visto = elegido -> getUtilContenidoVisualizado();
		}
		float media = 0, calificacion[elegido -> getUtilContenidoValorado()];
		int util_calificaciones = 0;			
		for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
			if (elegido == &(this -> getValoracion(valoracion).getUsuario())) {
				calificacion[util_calificaciones] = this -> getValoracion(valoracion).getCalificacion();
				util_calificaciones++;
			}
		}
		if (util_calificaciones != 0) {
			for (int cali = 0; cali < util_calificaciones; cali++) {
				media += calificacion[cali];
			}
			media /= util_calificaciones;
		}
		if (media > mediaMayor) {
			facilon = elegido;
			mediaMayor = media;
		}
		int nomg = 0;
		for (int contenido = 0; contenido < elegido -> getUtilContenidoVisualizado(); contenido++) {
			nomg += elegido -> getContenidoVisualizado(contenido).getTimesNotLiked();
		}
		if (nomg > nomgMayor) {
			ofuscated = elegido;
			nomgMayor = nomg;
		}
	}
	cout << endl << "Usuario Dark-Night" << endl << *(dark_night) << endl;
	cout << "Usuario Facilón" << endl << *(facilon) << endl;
	cout << "Usuario Ofuscated" << endl << *(ofuscated) << endl;
}

void Sistema::consultarValoracionContenido() {
	int idCont;
	bool encontrado = false;
	Contenido *elegido;
	cout << endl << "Introduce el id del contenido que quieres buscar: ";
	do {
		cin >> idCont;
		for (int contenido = 0; contenido < this -> getUtilContenidos() && !encontrado; contenido++) {
			if (idCont == this -> getContenido(contenido).getId()) {
				encontrado = true;
				elegido = &(this -> getContenido(contenido));
			}
		}
		if (!encontrado) {
			cout << "El id no pertenece a ningún contenido existente: ";
		}
	} while (!encontrado);
	float valoracion = 0, played = 0, mg = 0, nomg = 0;
	float v_calificaciones[this -> getUtilValoraciones()];
	int util_calificaciones = 0;
	if (elegido -> getTimesPlayed() > 0) {
		played = (elegido -> getTimesPlayed() * 2.5 / this -> getTotalPlayed());
	}
	if (elegido -> getTimesLiked() > 0) {
		mg = (elegido -> getTimesLiked() * 2.5 / this -> getTotalLikes());
	}
	if (elegido -> getTimesNotLiked() > 0) {
		nomg = (elegido -> getTimesNotLiked() * 2.5 / this -> getTotalUnlikes());
	}
	for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
		if (elegido == &(this -> getValoracion(valoracion).getContenido())) {
			v_calificaciones[util_calificaciones] = this -> getValoracion(valoracion).getCalificacion();
			util_calificaciones++;
		}
	}
	if (util_calificaciones > 0) {
		for (int calificacion = 0; calificacion < util_calificaciones; calificacion++) {
			valoracion += v_calificaciones[calificacion];
		}
		valoracion /= util_calificaciones;
		valoracion /= 2;
	}
	cout << endl << "Cálculo de CristoRating: " << endl;
	cout << "25% Media normalizada de las valoraciones de los usuarios al contenido: " << valoracion << endl;
	cout << "25% Visualizaciones del contenido / Visualizaciones globales: " << played << endl;
	cout << "25% Me gustas del contenido / Me gustas globales: " << mg << endl;
	cout << "25% No me gustas del contenido / No me gustas globales: " << nomg << endl << endl;
	cout << "Contenido elegido: " << elegido -> getTitulo() << endl;
	cout << "CristoRating: " << elegido -> getCristoRating() << endl;
}

void Sistema::top3ContenidosTipo() {
	int tipo;
	bool correcto = false;
	cout << endl << "1. Top 3 series" << endl;
	cout << "2. Top 3 peliculas" << endl;
	cout << "3. Top 3 documentales" << endl;
	cout << "Introduce la opción que desea ejecutar: ";
	do {
		cin >> tipo;
		if (tipo >= 1 && tipo <= 3) {
			correcto = true;
		} else {
			cout << "No ha introducido una acción correcta, inténtelo de nuevo: ";
		}
	} while (!correcto);
	Contenido *v_contenido[this -> getUtilContenidos()], *elegido;
	int util_contenido = 0;
	for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
		elegido = &(this -> getContenido(contenido));
		if (tipo == 1) {
			if (Serie *s = dynamic_cast<Serie*>(elegido)) {
				v_contenido[util_contenido] = s;
				util_contenido++;
			}
		} else if (tipo == 2) {
			if (Pelicula *p = dynamic_cast<Pelicula*>(elegido)) {
				v_contenido[util_contenido] = p;
				util_contenido++;
			}
		} else {
			if (Documental *d = dynamic_cast<Documental*>(elegido)) {
				v_contenido[util_contenido] = d;
				util_contenido++;
			}
		}
	}
	if (util_contenido == 0) {
		cout << endl << "No se puede hacer un rating si no existen contenidos de ese tipo" << endl;
	} else {
		int top = 3;
		if (util_contenido < top) {
			top = util_contenido;
			cout << endl << "Como no hay 3 contenidos, se va a realizar un top " << top << endl;
		}
		Contenido *rating[top], *visto[top], *nomg[top];
		int util_rating = 0, util_visto = 0, util_nomg = 0;
		for (int podio = 0; podio < top; podio++) {
			float mayorRating = 0;
			int masVisto = 0, mayorNomg = 0;
			for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
				Contenido *elegido = &(this -> getContenido(contenido));
				if (top > 1) {
					if (elegido != rating[0] && elegido != rating[1] && elegido -> getCristoRating() > mayorRating) {
						rating[podio] = elegido;
						mayorRating = elegido -> getCristoRating();
					}
					if (elegido != visto[0] && elegido != visto[1] && elegido -> getTimesPlayed() > masVisto) {
						visto[podio] = elegido;
						masVisto = elegido -> getTimesPlayed();
					}
					if (elegido != nomg[0] && elegido != nomg[1] && elegido -> getTimesNotLiked() > mayorNomg) {
						nomg[podio] = elegido;
						mayorNomg = elegido -> getTimesNotLiked();
					}
				} else {
					if (elegido -> getCristoRating() > mayorRating) {
						rating[podio] = elegido;
						mayorRating = elegido -> getCristoRating();
					}
					if (elegido -> getTimesPlayed() > masVisto) {
						visto[podio] = elegido;
						masVisto = elegido -> getTimesPlayed();
					}
					if (elegido -> getTimesNotLiked() > mayorNomg) {
						nomg[podio] = elegido;
						mayorNomg = elegido -> getTimesNotLiked();
					}
				}
			}
		}
		cout << endl << "Top " << top << " contenidos mejor valorados del sistema" << endl << endl;
		for (int podio = 0; podio < top; podio++) {
			rating[podio] -> print();
			cout << endl;
		}
		cout << "Top " << top << " contenidos más visualizados del sistema" << endl << endl;
		for (int podio = 0; podio < top; podio++) {
			visto[podio] -> print();
			cout << endl;
		}
		cout << "Top " << top << " contenidos Xavi-Nadie te quiere" << endl << endl;
		for (int podio = 0; podio < top; podio++) {
			nomg[podio] -> print();
			cout << endl;
		}
	}
}
