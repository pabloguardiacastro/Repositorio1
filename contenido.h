#include <iostream>
#include <string.h>
#include "fecha.h"
using namespace std;

#ifndef CONTENIDO

#define CONTENIDO

class Contenido {
	private:
		int id;
		string titulo;
		Fecha fechaLanzamiento;
		int duracion;
		string genero;
		float rating;
		int votos;
		int timesPlayed;
		int timesLiked;
		int timesNotLiked;
		float cristoRating;
		bool activo;
		
	public:
		/*
		 * @brief Constructor de una variable de tipo Contenido.
		 * @param this (E) Contenido que se va a construir.
		 * @post El contenido se inicializa sin datos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido();
		
		/*
		 * @brief Módulo que obtiene el id de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener el id.
		 * @return (S) Id del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getId() const;
		
		/*
		 * @brief Módulo que obtiene el titulo de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener el titulo.
		 * @return (S) Titulo del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getTitulo();
		
		/*
		 * @brief Módulo que obtiene la fechaLanzamiento de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener la fechaLanzamiento.
		 * @return (S) FechaLanzamiento del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Fecha& getFechaLanzamiento();
		
		/*
		 * @brief Módulo que obtiene la duracion de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener la duracion.
		 * @return (S) Duracion del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDuracion() const;
		
		/*
		 * @brief Módulo que obtiene el genero de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener el genero.
		 * @return (S) Genero del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getGenero();
		
		/*
		 * @brief Módulo que obtiene el rating de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener el rating.
		 * @return (S) Rating del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		float getRating() const;
		
		/*
		 * @brief Módulo que obtiene los votos de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener los votos.
		 * @return (S) Votos del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getVotos() const;
		
		/*
		 * @brief Módulo que obtiene timesPlayed de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener timesPlayed.
		 * @return (S) timesPlayed del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getTimesPlayed() const;
		
		/*
		 * @brief Módulo que obtiene timesLiked de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener timesLiked.
		 * @return (S) timesLiked del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getTimesLiked() const;
		
		/*
		 * @brief Módulo que obtiene timesNotLiked de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener timesNotLiked.
		 * @return (S) timesNotLiked del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getTimesNotLiked() const;
		
		/*
		 * @brief Módulo que obtiene cristoRating de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener cristoRating.
		 * @return (S) cristoRating del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		float getCristoRating() const;
		
		/*
		 * @brief Módulo que obtiene el activo de una variable de tipo Contenido.
		 * @param this (E) Contenido del que se quiere obtener el activo.
		 * @return (S) activo del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool getActivo() const;
		
		/*
		 * @brief Módulo que cambia el id de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar el id.
		 * @param x (E) Id del contenido.
		 * @post Se cambió el id.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setId(int x);
		
		/*
		 * @brief Módulo que cambia el titulo de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar el titulo.
		 * @param x (E) Titulo del contenido.
		 * @post Se cambió el titulo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTitulo(const string &x);
		
		/*
		 * @brief Módulo que cambia la fechaLanzamiento de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar la fechaLanzamiento.
		 * @param x (E) FechaLanzamiento del contenido.
		 * @post Se cambió la fechaLanzamiento.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setFechaLanzamiento(const Fecha &x);
		
		/*
		 * @brief Módulo que cambia la duracion de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar la duracion.
		 * @param x (E) Duracion del contenido.
		 * @post Se cambió la duracion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDuracion(int x);
		
		/*
		 * @brief Módulo que cambia el genero de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar el genero.
		 * @param x (E) Genero del contenido.
		 * @post Se cambió el genero.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setGenero(const string &x);
		
		/*
		 * @brief Módulo que cambia el rating de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar el rating.
		 * @param x (E) Rating del contenido.
		 * @post Se cambió el rating.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setRating(float x);
		
		/*
		 * @brief Módulo que cambia los votos de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar los votos.
		 * @param x (E) Votos del contenido.
		 * @post Se cambiaron los votos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setVotos(int x);
		
		/*
		 * @brief Módulo que cambia timesPlayed de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar timesPlayed.
		 * @param x (E) timesPlayed del contenido.
		 * @post Se cambiaron timesPlayed.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTimesPlayed(int x);
		
		/*
		 * @brief Módulo que cambia timesLiked de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar timesLiked.
		 * @param x (E) timesLiked del contenido.
		 * @post Se cambiaron timesLiked.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTimesLiked(int x);
		
		/*
		 * @brief Módulo que cambia timesNotLiked de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar timesNotLiked.
		 * @param x (E) timesNotLiked del contenido.
		 * @post Se cambiaron timesNotLiked.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTimesNotLiked(int x);
		
		/*
		 * @brief Módulo que cambia cristoRating de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar cristoRating.
		 * @param x (E) cristoRating del contenido.
		 * @post Se cambiaron cristoRating.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setCristoRating(float x);
		
		/*
		 * @brief Módulo que cambia el activo de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar el activo.
		 * @param x (E) activo del contenido.
		 * @post Se cambió el activo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setActivo(bool x);
		
		/*
		 * @brief Módulo que cambia los votos de una variable de tipo Contenido.
		 * @param this (E/S) Contenido que se quiere cambiar los votos.
		 * @param id (E) Id del contenido.
		 * @param titulo (E) Titulo del contenido.
		 * @param fechaLanzamiento (E) FechaLanzamiento del contenido.
		 * @param duracion (E) Duracion del contenido.
		 * @param genero (E) Genero del contenido.
		 * @param rating (E) Rating del contenido.
		 * @param votos (E) Votos del contenido.
		 * @post Se cambiaron los votos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContenido(int id, const string &titulo, const Fecha &fechaLanzamiento, int duracion, const string &genero, float rating, int votos);
		
		/*
		 * @brief Módulo que asigna un contenido a otro (operator=).
		 * @param this (E/S) Contenido que se quiere cambiar.
		 * @param c (E) Contenido que se quiere asignar.
		 * @return (S) Referencia a this.
		 * @post This copia los valores del Contenido parámetro.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido& operator=(Contenido &c);
		
		/*
		 * @brief Módulo que imprime un contenido.
		 * @param this (E) Contenido que se quiere imprimir.
		 * @author proShoT2004
		 * @version 1.0
		 */
		virtual void print();
};

#endif

#ifndef SERIE

#define SERIE

class Serie : public Contenido {
	private:
		int capitulos;
	public:
		/*
		 * @brief Constructor de una variable de tipo Serie.
		 * @param this (E) Serie que se va a construir.
		 * @post El contenido de la serie se inicializa sin datos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Serie() : Contenido() {
			this -> setCapitulos(0);
		}
		
		/*
		 * @brief Módulo que obtiene los capitulos de una variable de tipo Serie.
		 * @param this (E) Serie del que se quiere obtener los capitulos.
		 * @return (S) capitulos de la serie.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getCapitulos();
		
		/*
		 * @brief Módulo que cambia los capitulos de una variable de tipo Serie.
		 * @param this (E/S) Serie que se quiere cambiar los capitulos.
		 * @param x (E) capitulos de la serie.
		 * @post Se cambiaron los capitulos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setCapitulos(int x);
		
		void setSerie(int id, const string &titulo, const Fecha &fechaLanzamiento, int duracion, const string &genero, float rating, int votos, int capitulos);
		
		/*
		 * @brief Módulo que imprime una pelicula.
		 * @param this (E) Pelicula que se quiere imprimir.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void print();
};

#endif

#ifndef PELICULA

#define PELICULA

class Pelicula : public Contenido {
	private:
		string director;
	public:
		/*
		 * @brief Constructor de una variable de tipo Pelicula.
		 * @param this (E) Pelicula que se va a construir.
		 * @post El contenido de la pelicula se inicializa sin datos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Pelicula() : Contenido() {
			this -> setDirector("");
		}
		
		/*
		 * @brief Módulo que obtiene el director de una variable de tipo Pelicula.
		 * @param this (E) Pelicula de la que se quiere obtener el director.
		 * @return (S) director del contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getDirector();
		
		/*
		 * @brief Módulo que cambia el director de una variable de tipo Pelicula.
		 * @param this (E/S) Pelicula que se quiere cambiar el director.
		 * @param x (E) director de la pelicula.
		 * @post Se cambió el director.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDirector(const string &x);
		
		void setPelicula(int id, const string &titulo, const Fecha &fechaLanzamiento, int duracion, const string &genero, float rating, int votos, const string &director);
		
		/*
		 * @brief Módulo que imprime una pelicula.
		 * @param this (E) Pelicula que se quiere imprimir.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void print();
};

#endif

#ifndef DOCUMENTAL

#define DOCUMENTAL

class Documental : public Contenido {
	private:
		string tipo;
	public:
		/*
		 * @brief Constructor de una variable de tipo Documental.
		 * @param this (E) Documental que se va a construir.
		 * @post El contenido del documental se inicializa sin datos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Documental() : Contenido() {
			this -> setTipo("");
		}
		
		/*
		 * @brief Módulo que obtiene el tipo de una variable de tipo Documental.
		 * @param this (E) Documental del que se quiere obtener el tipo.
		 * @return (S) tipo del documental.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getTipo();
		
		/*
		 * @brief Módulo que cambia el tipo de una variable de tipo Documental.
		 * @param this (E/S) Documental que se quiere cambiar el tipo.
		 * @param x (E) tipo de la documental.
		 * @post Se cambió el tipo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTipo(const string &x);
		
		void setDocumental(int id, const string &titulo, const Fecha &fechaLanzamiento, int duracion, const string &genero, float rating, int votos, const string &tipo);
		
		/*
		 * @brief Módulo que imprime un documental.
		 * @param this (E) Documental que se quiere imprimir.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void print();
};

#endif
