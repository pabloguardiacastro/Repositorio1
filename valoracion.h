#include <iostream>
#include <string.h>
#include "fecha.h"
#include "usuario.h"
#include "contenido.h"
using namespace std;

#ifndef VALORACION

#define VALORACION

class Valoracion {
	private:
		int id;
		Contenido* contenido;
		Usuario* usuario;
		float calificacion;
		Fecha fechaValoracion;
	public:
		/*
		 * @brief Constructor de una variable de tipo Valoracion.
		 * @param this (E) Valoracion que se va a construir.
		 * @post La valoracion se inicializa a 0 en sus variables y punteros.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Valoracion();
		
		/*
		 * @brief Destructor de una variable de tipo Valoracion.
		 * @param this (E) Valoracion que se va a destruir.
		 * @post El contenido de la valoracion es borrado y su memoria ha sido liberada.
		 * @author proShoT2004
		 * @version 1.0
		 */
		~Valoracion();
		
		/*
		 * @brief Módulo que obtiene el id de una variable de tipo Valoracion.
		 * @param this (E) Valoracion de la que se quiere obtener el id.
		 * @return (S) Id de la valoracion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getId() const;
		
		/*
		 * @brief Módulo que obtiene el contenido de una variable de tipo Valoracion.
		 * @param this (E) Valoracion de la que se quiere obtener el contenido.
		 * @return (S) Contenido de la valoracion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido& getContenido();
		
		/*
		 * @brief Módulo que obtiene el id de una usuario de tipo Valoracion.
		 * @param this (E) Valoracion de la que se quiere obtener el usuario.
		 * @return (S) Usuario de la valoracion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Usuario& getUsuario();
		
		/*
		 * @brief Módulo que obtiene la calificacion de una variable de tipo Valoracion.
		 * @param this (E) Valoracion de la que se quiere obtener la calificacion.
		 * @return (S) Calificacion de la valoracion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		float getCalificacion() const;
		
		/*
		 * @brief Módulo que obtiene la fechaValoracion de una variable de tipo Valoracion.
		 * @param this (E) Valoracion de la que se quiere obtener la fechaValoracion.
		 * @return (S) FechaValoracion de la valoracion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Fecha& getFechaValoracion();
		
		/*
		 * @brief Módulo que cambia el id de una variable de tipo Valoracion.
		 * @param this (E/S) Valoracion que se quiere cambiar el id.
		 * @param x (E) Id de la valoracion.
		 * @post Se cambió el id.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setId(int x);
		
		/*
		 * @brief Módulo que cambia el contenio de una variable de tipo Valoracion.
		 * @param this (E/S) Valoracion que se quiere cambiar el contenido.
		 * @param x (E) Contenido de la valoracion.
		 * @post Se cambió el contenido.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContenido(Contenido &x);
		
		/*
		 * @brief Módulo que cambia el usuario de una variable de tipo Valoracion.
		 * @param this (E/S) Valoracion que se quiere cambiar el usuario.
		 * @param x (E) Usuario de la valoracion.
		 * @post Se cambió el usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUsuario(Usuario &x);
		
		/*
		 * @brief Módulo que cambia la calificacion de una variable de tipo Valoracion.
		 * @param this (E/S) Valoracion que se quiere cambiar la calificacion.
		 * @param x (E) Calificacion de la valoracion.
		 * @post Se cambió la calificacion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setCalificacion(float x);
		
		/*
		 * @brief Módulo que cambia la fechaValoracion de una variable de tipo Valoracion.
		 * @param this (E/S) Valoracion que se quiere cambiar la fechaValoracion.
		 * @param x (E) FechaValoracion de la valoracion.
		 * @post Se cambió la fechaValoracion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setFechaValoracion(Fecha &x);
		
		/*
		 * @brief Módulo que cambia una variable de tipo Valoracion.
		 * @param this (E/S) Valoracion que se quiere cambiar.
		 * @param id (E) Id de la valoracion.
		 * @param contenido (E) Id de la valoracion.
		 * @param usuario (E) Id de la valoracion.
		 * @param calificacion (E) Id de la valoracion.
		 * @param fechaValoracion (E) Id de la valoracion.
		 * @post Se cambió la valoracion.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setValoracion(int id, Contenido &x, Usuario &usuario, float calificacion, Fecha &fechaValoracion);
		
		/*
		 * @brief Módulo que asigna una valoracion a otra (operator=).
		 * @param this (E/S) Valoracion que se quiere cambiar.
		 * @param c (E) Valoracion que se quiere asignar.
		 * @return (S) Referencia a this.
		 * @post This copia los valores de la Valoracion parámetro.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Valoracion& operator=(Valoracion &v);
		
		/*
		 * @brief Módulo que imprime una valoracion.
		 * @param flujo (E) Objeto que permite imprimir por pantalla.
		 * @param v (E) Valoracion que se quiere imprimir.
		 * @return (S) Referencia a flujo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		friend ostream& operator<<(ostream &flujo, Valoracion &v);
};

#endif
