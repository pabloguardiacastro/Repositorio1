#include <iostream>
#include <string.h>
#include "fecha.h"
#include "contenido.h"
using namespace std;

Contenido::Contenido() {
	Fecha f;
	this -> setContenido(0, "", f, 0, "", 0, 0);
	this -> setTimesPlayed(0);
	this -> setTimesLiked(0);
	this -> setTimesNotLiked(0);
	this -> setCristoRating(0);
	this -> setActivo(true);
}

int Contenido::getId() const {
	return this -> id;
}

string& Contenido::getTitulo() {
	return this -> titulo;
}

Fecha& Contenido::getFechaLanzamiento() {
	return this -> fechaLanzamiento;
}

int Contenido::getDuracion() const {
	return this -> duracion;
}

string& Contenido::getGenero() {
	return this -> genero;
}

float Contenido::getRating() const {
	return this -> rating;
}

int Contenido::getVotos() const {
	return this -> votos;
}

int Contenido::getTimesPlayed() const {
	return this -> timesPlayed;
}

int Contenido::getTimesLiked() const {
	return this -> timesLiked;
}

int Contenido::getTimesNotLiked() const {
	return this -> timesNotLiked;
}

float Contenido::getCristoRating() const {
	return this -> cristoRating;
}

bool Contenido::getActivo() const {
	return this -> activo;
}

void Contenido::setId(int x) {
	this -> id = x;
}

void Contenido::setTitulo(const string &x) {
	this -> titulo = x;
}

void Contenido::setFechaLanzamiento(const Fecha &x) {
	this -> fechaLanzamiento = x;
}

void Contenido::setDuracion(int x) {
	this -> duracion = x;
}

void Contenido::setGenero(const string &x) {
	this -> genero = x;
}

void Contenido::setRating(float x) {
	this -> rating = x;
}

void Contenido::setVotos(int x) {
	this -> votos = x;
}

void Contenido::setTimesPlayed(int x) {
	this -> timesPlayed = x;
}

void Contenido::setTimesLiked(int x) {
	this -> timesLiked = x;
}

void Contenido::setTimesNotLiked(int x) {
	this -> timesNotLiked = x;
}

void Contenido::setCristoRating(float x) {
	this -> cristoRating = x;
}

void Contenido::setActivo(bool x) {
	this -> activo = x;
}

void Contenido::setContenido(int id, const string &titulo, const Fecha &fechaLanzamiento, int duracion, const string &genero, float rating, int votos) {
	this -> setId(id);
	this -> setTitulo(titulo);
	this -> setFechaLanzamiento(fechaLanzamiento);
	this -> setDuracion(duracion);
	this -> setGenero(genero);
	this -> setRating(rating);
	this -> setVotos(votos);
}

Contenido& Contenido::operator=(Contenido &c) {
	this -> setContenido(c.getId(), c.getTitulo(), c.getFechaLanzamiento(), c.getDuracion(), c.getGenero(), c.getRating(), c.getVotos());
	this -> setTimesPlayed(c.getTimesPlayed());
	this -> setTimesLiked(c.getTimesLiked());
	this -> setTimesNotLiked(c.getTimesNotLiked());
	this -> setActivo(c.getActivo());
	return *this;
}

void Contenido::print() {
	cout << this -> getId() << endl;
	cout << "Título: " << this -> getTitulo() << endl;
	cout << this -> getFechaLanzamiento() << ", " << this -> getGenero() << ", " << this -> getDuracion() << " min" << endl;
	cout << "IMDB: " << this -> getRating() << "/10, " << this -> getVotos() << " votos" << endl;
	cout << "Times Played: " << this -> getTimesPlayed() << endl;
	cout << "Times Liked: " << this -> getTimesLiked() << endl;
	cout << "Times Disliked: " << this -> getTimesNotLiked() << endl;
	cout << "CristoFlix Rating: " << this -> getCristoRating() << endl;
}

int Serie::getCapitulos() {
	return this -> capitulos;
}

void Serie::setCapitulos(int x) {
	this -> capitulos = x;
}

void Serie::setSerie(int id, const string &titulo, const Fecha &fechaLanzamiento, int duracion, const string &genero, float rating, int votos, int capitulos) {
	this -> setContenido(id, titulo, fechaLanzamiento, duracion, genero, rating, votos);
	this -> setCapitulos(capitulos);
}

void Serie::print() {
	cout << "Serie ";
	this -> Contenido::print();
	cout << this -> getCapitulos() << " capítulos" << endl;
}

string& Pelicula::getDirector() {
	return this -> director;
}

void Pelicula::setDirector(const string &x) {
	this -> director = x;
}

void Pelicula::setPelicula(int id, const string &titulo, const Fecha &fechaLanzamiento, int duracion, const string &genero, float rating, int votos, const string &director) {
	this -> setContenido(id, titulo, fechaLanzamiento, duracion, genero, rating, votos);
	this -> setDirector(director);
}

void Pelicula::print() {
	cout << "Película ";
	this -> Contenido::print();
	cout << "Director: " << this -> getDirector() << endl;
}

string& Documental::getTipo() {
	return this -> tipo;
}

void Documental::setTipo(const string &x) {
	this -> tipo = x;
}

void Documental::setDocumental(int id, const string &titulo, const Fecha &fechaLanzamiento, int duracion, const string &genero, float rating, int votos, const string &tipo) {
	this -> setContenido(id, titulo, fechaLanzamiento, duracion, genero, rating, votos);
	this -> setTipo(tipo);
}

void Documental::print() {
	cout << "Documental ";
	this -> Contenido::print();
	cout << "Tipo: " << this -> getTipo() << endl;
}
