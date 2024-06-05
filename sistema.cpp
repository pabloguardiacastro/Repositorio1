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

int Sistema::getLastContentId() {
	return this -> last_content_id;
}

int Sistema::getLastUserId() {
	return this -> last_user_id;
}

int Sistema::getLastAssessmentId() {
	return this -> last_assessment_id;
}

Usuario& Sistema::getUsuarioLogado() {
	return *(this -> usuario_logado);
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

void Sistema::setLastContentId(int x) {
	this -> last_content_id = x;
}

void Sistema::setLastUserId(int x) {
	this -> last_user_id = x;
}

void Sistema::setLastAssessmentId(int x) {
	this -> last_assessment_id = x;
}

void Sistema::setUsuarioLogado(Usuario &x) {
	this -> usuario_logado = &(x);
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

void Sistema::programa() {
	int opcion;
	bool salir = false;
	do {
		bool seguir = true;
		this -> login();
		while (seguir && !salir) {
			if (this -> getUsuarioLogado().getTipo() == "admin") {
				opcion = this -> menuAdmin();
				switch (opcion) {
					case 10:
						seguir = false;
						break;
					case 20:
						delete this ;
						this -> inicializar();
						break;
					case 30:
						cout << *(this ) << endl;
						break;
					case 41:
						this -> top3General();
						break;
					case 42:
						this -> top3ContenidosTipo();
						break;
					case 43:
						this -> topUsuarios();
						break;
					case 51:
						break;
					case 52:
						break;
					case 53:
						this -> buscarContenido();
						break;
					case 54:
						break;
					case 55:
						this -> consultarValoracionContenido();
						break;
					case 61:
						break;
					case 62:
						break;
					case 63:
						break;
					case 64:
						break;
					case 71:
						break;
					case 72:
						break;
					case 80:
						salir = true;
						break;
				}
			} else {
				opcion = this  -> menuCliente();
				switch (opcion) {
					case 1:
						seguir = false;
						break;
					case 2:
						this -> consultarValoracionesUsuario();
						break;
					case 3:
						this -> gustarContenido();
						this -> calcularCristoflixRating();
						break;
					case 4:
						this -> nogustarContenido();
						this -> calcularCristoflixRating();
						break;
					case 5:
						this -> visualizarContenido();
						this -> calcularCristoflixRating();
						break;
					case 6:
						salir = true;
						break;
				}
			}
		}
	} while (!salir);
}

void Sistema::inicializar() {
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
	
	Fecha f;
	Usuario *u = new Usuario[15];
	f.setFecha(14, 8, 1999);
	u[0].setUsuario(0, "night-man", "jdsf", "José David", "Sánchez", "Fernández", f, true, "cliente");
	f.setFecha(10, 6, 2004);
	u[1].setUsuario(1, "ice-man", "gatogordo", "Pablo", "Guardia", "Castro", f, true, "admin");
	f.setFecha(29, 10, 2001);
	u[2].setUsuario(2, "dfpm", "halaMadrid10", "David Francesc", "Pons", "Moll", f, true, "cliente");
	f.setFecha(24, 3, 2004);
	u[3].setUsuario(3, "sergio24m", "242424", "Sergio", "Contreras", "Lucas", f, true, "cliente");
	f.setFecha(28, 12, 2000);
	u[4].setUsuario(4, "polgs", "ms19", "Henry Paul", "García", "Simbaña", f, true, "cliente");
	f.setFecha(5, 7, 2004);
	u[5].setUsuario(5, "AntMan", "aguakate9", "Antonio Manuel", "Velasco", "Rivera", f, true, "cliente");
	f.setFecha(14, 2, 2004);
	u[6].setUsuario(6, "alexmrdgz", "q7r8m5", "Alejandro", "Miranda", "Rodríguez", f, true, "cliente");
	f.setFecha(12, 11, 2003);
	u[7].setUsuario(7, "llamasl", "7654", "Luis", "LLamas", "Ramón", f, true, "cliente");
	f.setFecha(20, 4, 2004);
	u[8].setUsuario(8, "game-master", "toilette", "Carlos", "Polo", "Martín", f, true, "cliente");
	f.setFecha(21, 9, 2004);
	u[9].setUsuario(9, "AlexMrtnzz21", "q100", "Alejandro", "Martínez", "Suárez", f, true, "cliente");
	f.setFecha(16, 3, 2004);
	u[10].setUsuario(10, "AuraEqualizer", "Ludopatia1600", "María", "Garrido", "Castellano", f, true, "cliente");
	f.setFecha(21, 2, 1991);
	u[11].setUsuario(11, "teffuka", "1234", "Natalia", "Serantes", "Cortez", f, true, "cliente");
	f.setFecha(16, 10, 2005);
	u[12].setUsuario(12, "madridistashdp", "culehastalamuerte", "Gonzalo", "Bouso", "Gómez", f, true, "cliente");
	f.setFecha(19, 12, 2001);
	u[13].setUsuario(13, "kxnxdx", "3333", "Cristina", "López", "Cabrera", f, true, "cliente");
	f.setFecha(22, 11, 1999);
	u[14].setUsuario(14, "Napoleon", "221199", "Hanok", "Martín", "Expósito", f, true, "cliente");
	for (int usuario = 0; usuario < 15; usuario++) {
		this -> setUsuario(this -> getUtilUsuarios(), u[this -> getUtilUsuarios()]);
	}
	delete [] u;
	
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
	Documental *c10 = new Documental;
	f.setFecha(19, 10, 2014);
	c0 -> setPelicula(0, "El corredor del laberinto", f, 113 , "Ciencia Ficción", 6.8 , 511000, "Wes Ball");
	f.setFecha(31, 6, 1999);
	c1 -> setPelicula(1, "The Matrix", f, 136 , "Ciencia Ficción", 8.7 , 2100000, "Lilly Wachowski");
	f.setFecha(3, 10, 2008);
	c2 -> setSerie(2, "Star Wars: The Clone Wars", f, 23 , "Ciencia Ficción", 8.4 , 121000, 133);
	f.setFecha(13, 1, 1995);
	c3 -> setPelicula(3, "Pulp Fiction", f, 154 , "Crimen", 8.9 , 2200000, "Quentin Tarantino");
	f.setFecha(26, 7, 2019);
	c4 -> setSerie(4, "The boys", f, 60 , "Acción", 8.7 , 656000, 24);
	f.setFecha(6, 9, 2003);
	c5 -> setSerie(5, "One piece", f, 24 , "Animación", 10 , 2100000, 1105);
	f.setFecha(25, 4, 2019);
	c6 -> setPelicula(6, "Vengadores: Endgame", f, 143 , "Acción", 8.4 , 1300000, "Joe Russo");
	f.setFecha(8, 1, 2021);
	c7 -> setSerie(7, "Lupin", f, 45 , "Crimen", 7.5 , 139000, 17);
	f.setFecha(2, 5, 2017);
	c8 -> setSerie(8, "La casa de papel", f, 60 , "Crimen", 8.2 , 534000, 48);
	f.setFecha(11, 7, 2016);
	c9 -> setSerie(9, "Stranger Things", f, 60 , "Fantasía", 8.7 , 1300000, 34);
	f.setFecha(25, 10, 2023);
	c10 -> setDocumental(10, "La vida en nuestro planeta", f, 432 , "Naturaleza", 8.1 , 5600, "Historia");
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
	this -> setContenido(this -> getUtilContenidos(), *(c10));
	
	Valoracion *v = new Valoracion[22];
	f.setFecha(7, 6, 2021);
	v[0].setValoracion(0, this -> getContenido(3), this -> getUsuario(0), 2275, 4.5, f);
	f.setFecha(21, 3, 2023);
	v[1].setValoracion(1, this -> getContenido(5), this -> getUsuario(0), 2341, 5, f);
	f.setFecha(12, 12, 2016);
	v[2].setValoracion(2, this -> getContenido(1), this -> getUsuario(0), 334, 4, f);
	f.setFecha(21, 5, 2024);
	v[3].setValoracion(3, this -> getContenido(10), this -> getUsuario(0), 1232, 3.5, f);
	f.setFecha(2, 12, 2020);
	v[4].setValoracion(4, this -> getContenido(6), this -> getUsuario(1), 500, 4.5, f);
	f.setFecha(3, 12, 2020);
	v[5].setValoracion(5, this -> getContenido(5), this -> getUsuario(2), 1200, 4.5, f);
	f.setFecha(3, 12, 2020);
	v[6].setValoracion(6, this -> getContenido(2), this -> getUsuario(3), 144000, 4.5, f);
	f.setFecha(4, 11, 2021);
	v[7].setValoracion(7, this -> getContenido(5), this -> getUsuario(4), 3000, 4, f);
	f.setFecha(5, 2, 2024);
	v[8].setValoracion(8, this -> getContenido(1), this -> getUsuario(5), 136, 4, f);
	f.setFecha(12, 3, 2024);
	v[9].setValoracion(9, this -> getContenido(0), this -> getUsuario(6), 3780, 4, f);
	f.setFecha(4, 4, 2021);
	v[10].setValoracion(10, this -> getContenido(5), this -> getUsuario(7), 3000, 4, f);
	f.setFecha(21, 11, 2023);
	v[11].setValoracion(11, this -> getContenido(5), this -> getUsuario(8), 2341, 5, f);
	f.setFecha(8, 2, 2021);
	v[12].setValoracion(12, this -> getContenido(1), this -> getUsuario(8), 334, 4.1, f);
	f.setFecha(23, 3, 2018);
	v[13].setValoracion(13, this -> getContenido(9), this -> getUsuario(8), 3600, 4.3, f);
	f.setFecha(1, 6, 2023);
	v[14].setValoracion(14, this -> getContenido(9), this -> getUsuario(9), 3600, 4.5, f);
	f.setFecha(11, 2, 2024);
	v[15].setValoracion(15, this -> getContenido(7), this -> getUsuario(9), 11600, 4.2, f);
	f.setFecha(11, 4, 2023);
	v[16].setValoracion(16, this -> getContenido(2), this -> getUsuario(9), 8600, 3.8, f);
	f.setFecha(3, 11, 2023);
	v[17].setValoracion(17, this -> getContenido(4), this -> getUsuario(10), 7800, 4.45, f);
	f.setFecha(1, 6, 2023);
	v[18].setValoracion(18, this -> getContenido(9), this -> getUsuario(11), 3600, 5, f);
	f.setFecha(16, 10, 2020);
	v[19].setValoracion(19, this -> getContenido(0), this -> getUsuario(12), 3780, 4.5, f);
	f.setFecha(12, 12, 2001);
	v[20].setValoracion(20, this -> getContenido(5), this -> getUsuario(13), 2001, 4.8, f);
	f.setFecha(3, 6, 2024);
	v[21].setValoracion(21, this -> getContenido(1), this -> getUsuario(14), 334, 3, f);
	for (int valoracion = 0; valoracion < 22; valoracion++) {
		this -> setValoracion(this -> getUtilValoraciones(), v[this -> getUtilValoraciones()]);
	}
	delete [] v;
	
	for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
		Usuario *u = &(this -> getValoracion(valoracion).getUsuario());
		u -> setContenidoVisualizado(u -> getUtilContenidoVisualizado(), this -> getValoracion(valoracion).getContenido());
		u -> setContenidoValorado(u -> getUtilContenidoValorado(), this -> getValoracion(valoracion).getContenido());
	}
	
	this -> getUsuario(0).setContenidoMg(0, this -> getContenido(1));
	this -> getUsuario(0).setContenidoMg(1, this -> getContenido(5));
	this -> getUsuario(1).setContenidoMg(0, this -> getContenido(6));
	this -> getUsuario(2).setContenidoMg(0, this -> getContenido(5));
	this -> getUsuario(3).setContenidoMg(0, this -> getContenido(2));
	this -> getUsuario(4).setContenidoMg(0, this -> getContenido(5));
	this -> getUsuario(6).setContenidoMg(0, this -> getContenido(7));
	this -> getUsuario(7).setContenidoMg(0, this -> getContenido(5));
	this -> getUsuario(8).setContenidoMg(0, this -> getContenido(9));
	this -> getUsuario(8).setContenidoMg(1, this -> getContenido(5));
	this -> getUsuario(10).setContenidoMg(0, this -> getContenido(4));
	this -> getUsuario(12).setContenidoMg(0, this -> getContenido(9));
	this -> getUsuario(12).setContenidoMg(1, this -> getContenido(5));
	this -> getUsuario(13).setContenidoMg(0, this -> getContenido(1));
	this -> getUsuario(13).setContenidoMg(1, this -> getContenido(5));
	this -> getUsuario(14).setContenidoMg(0, this -> getContenido(1));
	
	this -> getUsuario(0).setContenidoNomg(0, this -> getContenido(7));
	this -> getUsuario(2).setContenidoNomg(0, this -> getContenido(7));
	this -> getUsuario(2).setContenidoNomg(1, this -> getContenido(2));
	this -> getUsuario(4).setContenidoNomg(0, this -> getContenido(7));
	this -> getUsuario(4).setContenidoNomg(1, this -> getContenido(2));
	this -> getUsuario(8).setContenidoNomg(0, this -> getContenido(1));
	this -> getUsuario(10).setContenidoNomg(0, this -> getContenido(10));
	this -> getUsuario(11).setContenidoNomg(0, this -> getContenido(7));
	this -> getUsuario(13).setContenidoNomg(0, this -> getContenido(9));
	this -> getUsuario(13).setContenidoNomg(1, this -> getContenido(7));
	this -> getUsuario(14).setContenidoNomg(0, this -> getContenido(9));
	this -> getUsuario(14).setContenidoNomg(1, this -> getContenido(4));
	
	this -> getContenido(0).setTimesPlayed(2);
	this -> getContenido(0).setTimesLiked(2);
	this -> getContenido(0).setTimesNotLiked(0);
	
	this -> getContenido(1).setTimesPlayed(4);
	this -> getContenido(1).setTimesLiked(1);
	this -> getContenido(1).setTimesNotLiked(1);
	
	this -> getContenido(2).setTimesPlayed(2);
	this -> getContenido(2).setTimesLiked(1);
	this -> getContenido(2).setTimesNotLiked(2);
	
	this -> getContenido(3).setTimesPlayed(1);
	this -> getContenido(3).setTimesLiked(1);
	this -> getContenido(3).setTimesNotLiked(0);
	
	this -> getContenido(4).setTimesPlayed(1);
	this -> getContenido(4).setTimesLiked(1);
	this -> getContenido(4).setTimesNotLiked(1);
	
	this -> getContenido(5).setTimesPlayed(6);
	this -> getContenido(5).setTimesLiked(7);
	this -> getContenido(5).setTimesNotLiked(0);
	
	this -> getContenido(6).setTimesPlayed(1);
	this -> getContenido(6).setTimesLiked(1);
	this -> getContenido(6).setTimesNotLiked(0);
	
	this -> getContenido(7).setTimesPlayed(1);
	this -> getContenido(7).setTimesLiked(1);
	this -> getContenido(7).setTimesNotLiked(5);
	
	this -> getContenido(8).setTimesPlayed(0);
	this -> getContenido(8).setTimesLiked(0);
	this -> getContenido(8).setTimesNotLiked(0);
	
	this -> getContenido(9).setTimesPlayed(3);
	this -> getContenido(9).setTimesLiked(2);
	this -> getContenido(9).setTimesNotLiked(2);
	
	this -> getContenido(10).setTimesPlayed(1);
	this -> getContenido(10).setTimesLiked(0);
	this -> getContenido(10).setTimesNotLiked(1);
	
	this -> setTotalPlayed(22);
	this -> setTotalValorated(22);
	this -> setTotalLikes(16);
	this -> setTotalUnlikes(12);
	this -> setLastContentId(10);
	this -> setLastUserId(14);
	this -> setLastAssessmentId(21);
	
	this -> setUsuarioLogado(this -> getUsuario(1));
	
	this -> calcularCristoflixRating();
}

Sistema::Sistema() {
	this -> inicializar();
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
	
	this -> setTotalPlayed(0);
	this -> setTotalValorated(0);
	this -> setTotalLikes(0);
	this -> setTotalUnlikes(0);
	this -> setLastContentId(0);
	this -> setLastUserId(0);
	this -> setLastAssessmentId(0);
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
	flujo << "Total Valorated: " << s.getTotalValorated() << endl;
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

void Sistema::login() {
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
	this -> setUsuarioLogado(this -> getUsuario(pos));
	cout << endl << "Ha iniciado sesión como " << this -> getUsuario(pos).getUserName() << endl << endl;
}

void Sistema::consultarValoracionesUsuario() {
	Valoracion* valoracionesUsuario[this -> getUtilValoraciones()];
	int util_valoraciones_usuario = 0;
	for (int valoracion = 0; valoracion < this -> getUtilValoraciones(); valoracion++) {
		if (&(this -> getUsuarioLogado()) == &(this -> getValoracion(valoracion).getUsuario())) {
			valoracionesUsuario[util_valoraciones_usuario] = &(this -> getValoracion(valoracion));
			util_valoraciones_usuario++;
		}
	}
	cout << endl << "Contenidos visualizados: " << this -> getUsuarioLogado().getUtilContenidoVisualizado() << endl;
	cout << "Me gustas: " << this -> getUsuarioLogado().getUtilContenidoMg() << endl;
	cout << "No me gustas: " << this -> getUsuarioLogado().getUtilContenidoNomg() << endl << endl;
	cout << "VALORACIONES" << endl;
	if (util_valoraciones_usuario == 0) {
		cout << "Aún no has valorado ningún contenido" << endl;
	} else {
		for (int valoracion = 0; valoracion < util_valoraciones_usuario; valoracion++) {
			cout << *(valoracionesUsuario[valoracion]) << endl;
		}
	}
}

void Sistema::valorarContenido() {
	bool encontrado = false, valido = false;
	int idCont, posCont, segundos;
	float calificacion;
	cout << endl;
	if (this -> getUsuarioLogado().getUtilContenidoVisualizado() == 0) {
		cout << "Debes visualizar al menos un contenido antes de hacer una valoración" << endl;
	} else {
		for (int contenido = 0; contenido < this -> getUsuarioLogado().getUtilContenidoVisualizado(); contenido++) {
			this -> getUsuarioLogado().getContenidoVisualizado(contenido).print();
			cout << endl;
		}
		cout << endl << "Introduce el id del contenido que quieres valorar: ";
		do {
			cin >> idCont;
			for (int contenido = 0; contenido < this -> getUsuarioLogado().getUtilContenidoVisualizado() && !encontrado; contenido++) {
				if (idCont == this -> getUsuarioLogado().getContenidoVisualizado(contenido).getId()) {
					encontrado = true;
					posCont = idCont;
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
		valido = false;
		cout << "¿Cuántos segundos has visualizado del contenido?: ";
		do {
			cin >> segundos;
			if (segundos >= 0) {
				valido = true;
			}
			if (!valido) {
				cout << "No puedes visualizar un tiempo negativo: ";
			}
		} while (!valido);
		encontrado = false;
		for (int contenido = 0; contenido < this -> getUsuarioLogado().getUtilContenidoValorado() && !encontrado; contenido++) {
			if (idCont == this -> getUsuarioLogado().getContenidoValorado(contenido).getId()) {
				encontrado = true;
			}
		}
		if (!encontrado) {
			this -> getUsuarioLogado().setContenidoValorado(this -> getUsuarioLogado().getUtilContenidoValorado(), this -> getContenido(posCont));
		}
		Valoracion valoracion;
		Fecha fecha;
		fecha.setFecha(29, 5, 2024);
		valoracion.setValoracion(this -> getUtilValoraciones(), this -> getContenido(posCont), this -> getUsuarioLogado(), segundos, calificacion, fecha);
		this -> setValoracion(this -> getUtilValoraciones(), valoracion);
		this -> setTotalValorated(this -> getTotalValorated() + 1);
	}
}

void Sistema::gustarContenido() {
	cout << endl;
	Contenido* elegido;
	int idCont;
	bool encontrado = false;
	cout << endl << "Introduce el id del contenido que quieres valorar: ";
	do {
		cin >> idCont;
		for (int contenido = 0; contenido < this -> getUtilContenidos() && !encontrado; contenido++) {
			if (idCont == this -> getContenido(contenido).getId()) {
				encontrado = true;
				elegido = &(this -> getContenido(contenido));
			}
		}
		if (!encontrado) {
			cout << "El id no pertenece a ningún contenido, introduce otro distinto: ";
		}
	} while (!encontrado);
	bool mg = true, nomg = false;
	for (int contenido = 0; mg && contenido < this -> getUsuarioLogado().getUtilContenidoMg(); contenido++) {
		if (elegido == &(this -> getUsuarioLogado().getContenidoMg(contenido))) {
			mg = false;
		}
	}
	if (mg) {
		this -> getUsuarioLogado().setContenidoMg(this -> getUsuarioLogado().getUtilContenidoMg() + 1, *(elegido));
		this -> setTotalLikes(this -> getTotalLikes() + 1);
		elegido -> setTimesLiked(elegido -> getTimesLiked() + 1);
	}
	for (int contenido = 0; contenido < this -> getUsuarioLogado().getUtilContenidoNomg(); contenido++) {
		if (elegido == &(this -> getUsuarioLogado().getContenidoNomg(contenido))) {
			nomg = true;
		}
		if (nomg && contenido < this -> getUsuarioLogado().getUtilContenidoNomg() - 1) {
			this -> getUsuarioLogado().setContenidoNomg(contenido, this -> getUsuarioLogado().getContenidoNomg(contenido + 1));
		} else if (nomg && contenido == this -> getUsuarioLogado().getUtilContenidoNomg() - 1) {
			Contenido *vacio = 0;
			this -> getUsuarioLogado().setContenidoNomg(contenido, *(vacio));
			this -> getUsuarioLogado().setUtilContenidoNomg(this -> getUsuarioLogado().getUtilContenidoNomg() - 1);
		}
	}
	if (nomg) {
		this -> setTotalUnlikes(this -> getTotalUnlikes() - 1);
		elegido -> setTimesNotLiked(elegido -> getTimesNotLiked() - 1);
	}
}

void Sistema::nogustarContenido() {
	cout << endl;
	Contenido* elegido;
	int idCont;
	bool encontrado = false;
	cout << endl << "Introduce el id del contenido que quieres valorar: ";
	do {
		cin >> idCont;
		for (int contenido = 0; contenido < this -> getUtilContenidos() && !encontrado; contenido++) {
			if (idCont == this -> getContenido(contenido).getId()) {
				encontrado = true;
				elegido = &(this -> getContenido(contenido));
			}
		}
		if (!encontrado) {
			cout << "El id no pertenece a ningún contenido, introduce otro distinto: ";
		}
	} while (!encontrado);
	bool nomg = true, mg = false;
	for (int contenido = 0; nomg && contenido < this -> getUsuarioLogado().getUtilContenidoNomg(); contenido++) {
		if (elegido == &(this -> getUsuarioLogado().getContenidoNomg(contenido))) {
			nomg = false;
		}
	}
	if (nomg) {
		this -> getUsuarioLogado().setContenidoNomg(this -> getUsuarioLogado().getUtilContenidoNomg() + 1, *(elegido));
		this -> setTotalUnlikes(this -> getTotalUnlikes() + 1);
		elegido -> setTimesNotLiked(elegido -> getTimesNotLiked() + 1);
	}
	for (int contenido = 0; contenido < this -> getUsuarioLogado().getUtilContenidoMg(); contenido++) {
		if (elegido == &(this -> getUsuarioLogado().getContenidoMg(contenido))) {
			mg = true;
		}
		if (mg && contenido < this -> getUsuarioLogado().getUtilContenidoMg() - 1) {
			this -> getUsuarioLogado().setContenidoMg(contenido, this -> getUsuarioLogado().getContenidoMg(contenido + 1));
		} else if (mg && contenido == this -> getUsuarioLogado().getUtilContenidoMg() - 1) {
			Contenido *vacio = 0;
			this -> getUsuarioLogado().setContenidoMg(contenido, *(vacio));
			this -> getUsuarioLogado().setUtilContenidoMg(this -> getUsuarioLogado().getUtilContenidoMg() - 1);
		}
	}
	if (mg) {
		this -> setTotalLikes(this -> getTotalLikes() - 1);
		elegido -> setTimesLiked(elegido -> getTimesLiked() - 1);
	}
}

void Sistema::visualizarContenido() {
	int idCont, calificacion, segundos;
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
	for (int contenido = 0; contenido < this -> getUsuarioLogado().getUtilContenidoVisualizado() && !encontrado; contenido++) {
		if (idCont == this -> getUsuarioLogado().getContenidoVisualizado(contenido).getId()) {
			encontrado = true;
		}
	}
	if (!encontrado) {
		this -> getUsuarioLogado().setContenidoVisualizado(this -> getUsuarioLogado().getUtilContenidoVisualizado(), *(elegido));
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
	valido = false;
	cout << "¿Cuántos segundos has visualizado del contenido?: ";
	do {
		cin >> segundos;
		if (segundos >= 0) {
			valido = true;
		}
		if (!valido) {
			cout << "No puedes visualizar un tiempo negativo: ";
		}
	} while (!valido);
	for (int contenido = 0; contenido < this -> getUsuarioLogado().getUtilContenidoValorado() && !encontrado; contenido++) {
		if (idCont == this -> getUsuarioLogado().getContenidoValorado(contenido).getId()) {
			encontrado = true;
		}
	}
	if (!encontrado) {
		this -> getUsuarioLogado().setContenidoValorado(this -> getUsuarioLogado().getUtilContenidoValorado(), *(elegido));
	}
	Valoracion valoracion;
	Fecha fecha;
	fecha.setFecha(29, 5, 2024);
	valoracion.setValoracion(this -> getUtilValoraciones(), *(elegido), this -> getUsuarioLogado(), segundos, calificacion, fecha);
	this -> setValoracion(this -> getUtilValoraciones(), valoracion);
	elegido -> setTimesPlayed(elegido -> getTimesPlayed() + 1);
	this -> setTotalPlayed(this -> getTotalPlayed() + 1);
	this -> setTotalValorated(this -> getTotalValorated() + 1);
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
	if (this -> getUtilContenidos() == 0) {
		cout << endl << "No se puede hacer un rating si no existen contenidos de ese tipo" << endl;
	} else {
		int top = 3;
		if (this -> getUtilContenidos() < top) {
			top = this -> getUtilContenidos();
			cout << endl << "Como no hay 3 contenidos, se va a realizar un top " << top << endl;
		}
		Contenido *rating[top], *visto[top], *nomg[top];
		int util_rating = 0, util_visto = 0, util_nomg = 0;
		for (int podio = 0; podio < top; podio++) {
			float mayorRating = -1;
			int masVisto = -1, mayorNomg = -1;
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

void Sistema::buscarContenido() {
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
					this -> getUsuarioLogado().setUtilContenidoBuscado(0);
					this -> getUsuarioLogado().setContenidoBuscado(this -> getUsuarioLogado().getUtilContenidoBuscado(), this -> getContenido(contenido));
				}
			}
			if (!encontrado) {
				cout << "El id no pertenece a ningún contenido existente: ";
			}
		} while (!encontrado);
		cout << endl;
		this -> getUsuarioLogado().getContenidoBuscado(0).print();
	} else if (eleccion == 2) {
		string genero;
		char cadena[50];
		cout << "Introduce el género del contenido que quieres buscar: ";
		cin.ignore();
		cin.getline(cadena, 50);
		genero = cadena;
		this -> getUsuarioLogado().setUtilContenidoBuscado(0);
		for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
			if (genero == this -> getContenido(contenido).getGenero()) {
				this -> getUsuarioLogado().setContenidoBuscado(this -> getUsuarioLogado().getUtilContenidoBuscado(), this -> getContenido(contenido));
			}
		}
		cout << endl;
		if (this -> getUsuarioLogado().getUtilContenidoBuscado() == 0) {
			cout << "No hay contenidos de género " << genero << endl;
		} else {
			for (int contenido = 0; contenido < this -> getUsuarioLogado().getUtilContenidoBuscado(); contenido++) {
				this -> getUsuarioLogado().getContenidoBuscado(contenido).print();
				cout << endl;
			}
		}
	}
}

void Sistema::topUsuarios() {
	bool existencias = true;
	if (this -> getUtilContenidos() == 0) {
		existencias = false;
	}
	if (existencias) {
		int cantidad = 3;
		if (this -> getUtilContenidos() < 3) {
			cantidad = this -> getUtilContenidos();
		}
		Contenido *nomg[cantidad];
		for (int podio = 0; podio < cantidad; podio++) {
			int mayorNomg = -1;
			for (int contenido = 0; contenido < this -> getUtilContenidos(); contenido++) {
				Contenido *elegido = &(this -> getContenido(contenido));
				if (elegido != nomg[0] && elegido != nomg[1] && elegido -> getTimesNotLiked() > mayorNomg) {
					nomg[podio] = elegido;
					mayorNomg = elegido -> getTimesNotLiked();
				}
			}
		}
		Usuario *dark_night, *facilon, *ofuscated;
		float mediaMayor = -1.0;
		int visto = -1, nomgMayor = -1;
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
			int coincidentes = 0;
			for (int visualizado = 0; visualizado < elegido -> getUtilContenidoVisualizado(); visualizado++) {
				for (int contenido = 0; contenido < cantidad; contenido++) {
					if (&(elegido -> getContenidoVisualizado(visualizado)) == nomg[contenido]) {
						bool valido = true;
						for (int nogustado = 0; nogustado < elegido -> getUtilContenidoNomg(); nogustado++) {
							if (&(elegido -> getContenidoNomg(nogustado)) == nomg[contenido]) {
								valido = false;
							}
						}
						if (valido) {
							coincidentes++;
						}
					}
				}
			}
			
			if (coincidentes > nomgMayor) {
				ofuscated = elegido;
				nomgMayor = coincidentes;
			}
		}
		cout << endl << "Usuario Dark-Night" << endl << *(dark_night) << endl;
		cout << "Usuario Facilón" << endl << *(facilon) << endl;
		cout << "Usuario Ofuscated" << endl << *(ofuscated);
	} else {
		cout << "Para hacer el ranking de usuarios es necesario al menos un contenido" << endl;
	}
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
		} else if (tipo == 3) {
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
			float mayorRating = -1;
			int masVisto = -1, mayorNomg = -1;
			for (int contenido = 0; contenido < util_contenido; contenido++) {
				elegido = v_contenido[contenido];
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


int Sistema::menuAdmin() {
	int op1 = 0, op2 = 0;
	int opFinal;
	bool correcto = false;
	cout << endl << "Acciones del administrador" << endl << endl;
	cout << "1. Cambiar de usuario" << endl;
	cout << "2. Generar datos básicos del sistema" << endl;
	cout << "3. Imprimir datos del sistema" << endl;
	cout << "4. Opciones de rankings" << endl;
	cout << "5. Opciones de contenidos" << endl;
	cout << "6. Opciones de usuarios" << endl;
	cout << "7. Opciones de valoraciones" << endl;
	cout << "8. Salir" << endl;
	cout << "Introduce la opción que desea ejecutar: ";
	do {
		cin >> op1;
		if (op1 >= 1 && op1 <= 8) {
			correcto = true;
		} else {
			cout << "No ha introducido una acción correcta, inténtelo de nuevo: ";
		}
	} while (!correcto);
	if (op1 == 4) {
		correcto = false;
		cout << endl << "Acciones de rankings" << endl << endl;
		cout << "1. Top 3 contenidos" << endl;
		cout << "2. Top 3 de cada tipo de contenido" << endl;
		cout << "3. Ranking de usuarios" << endl;
		cout << "Introduce la opción que desea ejecutar: ";
		do {
			cin >> op2;
			if (op2 >= 1 && op2 <= 3) {
				correcto = true;
			} else {
				cout << "No ha introducido una acción correcta, inténtelo de nuevo: ";
			}
		} while (!correcto);
	} else if (op1 == 5) {
		correcto = false;
		cout << endl << "Acciones de contenidos" << endl << endl;
		cout << "1. Agregar contenido" << endl;
		cout << "2. Eliminar contenido" << endl;
		cout << "3. Buscar contenido" << endl;
		cout << "4. Modificar contenido" << endl;
		cout << "5. Consultar la valoración del contenido" << endl;
		cout << "Introduce la opción que desea ejecutar: ";
		do {
			cin >> op2;
			if (op2 >= 1 && op2 <= 5) {
				correcto = true;
			} else {
				cout << "No ha introducido una acción correcta, inténtelo de nuevo: ";
			}
		} while (!correcto);
	} else if (op1 == 6) {
		correcto = false;
		cout << endl << "Acciones de usuarios" << endl << endl;
		cout << "1. Agregar usuario" << endl;
		cout << "2. Eliminar usuario" << endl;
		cout << "3. Buscar usuario" << endl;
		cout << "4. Modificar usuario" << endl;
		cout << "Introduce la opción que desea ejecutar: ";
		do {
			cin >> op2;
			if (op2 >= 1 && op2 <= 4) {
				correcto = true;
			} else {
				cout << "No ha introducido una acción correcta, inténtelo de nuevo: ";
			}
		} while (!correcto);
	} else if (op1 == 7) {
		correcto = false;
		cout << endl << "Acciones de contenidos" << endl << endl;
		cout << "1. Consultar las valoraciones de un contenido y ver las métricas globales del mismo" << endl;
		cout << "2. Eliminar valoración" << endl;
		cout << "Introduce la opción que desea ejecutar: ";
		do {
			cin >> op2;
			if (op2 >= 1 && op2 <= 2) {
				correcto = true;
			} else {
				cout << "No ha introducido una acción correcta, inténtelo de nuevo: ";
			}
		} while (!correcto);
	}
	opFinal = op1 * 10 + op2;
	return opFinal;
}

int Sistema::menuCliente() {
	int op;
	bool correcto = false;
	cout << endl << "Acciones del cliente" << endl << endl;
	cout << "1. Cambiar de usuario" << endl;
	cout << "2. Consultar valoraciones del usuario" << endl;
	cout << "3. Me gusta" << endl;
	cout << "4. No me gusta" << endl;
	cout << "5. Visualizar contenido" << endl;
	cout << "6. Salir" << endl;
	cout << "Introduce la opción que desea ejecutar: ";
	do {
		cin >> op;
		if (op >= 1 && op <= 6) {
			correcto = true;
		} else {
			cout << "No ha introducido una acción correcta, inténtelo de nuevo: ";
		}
	} while (!correcto);
	return op;
}
