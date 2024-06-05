#include <iostream>
#include <string.h>
#include "fecha.h"
#include "usuario.h"
#include "contenido.h"
#include "valoracion.h"
using namespace std;

#ifndef SISTEM

#define SISTEM

class Sistema {
	private:
		Usuario *v_usuarios;
		int util_usuarios;
		int dim_usuarios;
		Contenido* *v_contenidos;
		int util_contenidos;
		int dim_contenidos;
		Valoracion *v_valoraciones;
		int util_valoraciones;
		int dim_valoraciones;
		int totalPlayed;
		int totalValorated;
		int totalLikes;
		int totalUnlikes;
	public:
		/*
		 * @brief Constructor de una variable de tipo Sistema.
		 * @param this (E) Sistema que se va a construir.
		 * @post El sistema se inicializa con 15 usuarios, 10 contenidos y 45 valoraciones.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Sistema();
		
		/*
		 * @brief Destructor de una variable de tipo Sistema.
		 * @param this (E) Sistema que se va a destruir.
		 * @post El contenido del sistema es borrado y su memoria ha sido liberada.
		 * @author proShoT2004
		 * @version 1.0
		 */
		~Sistema();
		
		/*
		 * @brief Módulo que obtiene el util_usuarios de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener el util_usuarios.
		 * @return (S) Util_usuarios del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getUtilUsuarios();
		
		/*
		 * @brief Módulo que obtiene la dim_usuarios de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener la dim_usuarios.
		 * @return (S) Dim_usuarios del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDimUsuarios();
		
		/*
		 * @brief Módulo que obtiene el util_contenidos de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener el util_contenidos.
		 * @return (S) Util_contenidos del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getUtilContenidos();
		
		/*
		 * @brief Módulo que obtiene la dim_contenidos de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener la dim_contenidos.
		 * @return (S) Dim_contenidos del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDimContenidos();
		
		/*
		 * @brief Módulo que obtiene el util_valoraciones de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener el util_valoraciones.
		 * @return (S) Util_valoraciones del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getUtilValoraciones();
		
		/*
		 * @brief Módulo que obtiene la dim_valoraciones de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener la dim_valoraciones.
		 * @return (S) Dim_valoraciones del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDimValoraciones();
		
		/*
		 * @brief Módulo que obtiene totalPlayed de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener totalPlayed.
		 * @return (S) totalPlayed del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getTotalPlayed();
		
		/*
		 * @brief Módulo que obtiene totalValorated de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener totalValorated.
		 * @return (S) totalValorated del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getTotalValorated();
		
		/*
		 * @brief Módulo que obtiene totalLikes de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener totalLikes.
		 * @return (S) totalLikes del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getTotalLikes();
		
		/*
		 * @brief Módulo que obtiene totalUnlikes de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener totalUnlikes.
		 * @return (S) totalUnlikes del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getTotalUnlikes();
		
		/*
		 * @brief Módulo que cambia el util_usuarios de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar el util_usuarios.
		 * @param x (E) Util_usuarios del sistema.
		 * @post Se cambió el util_usuarios.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUtilUsuarios(int x);
		
		/*
		 * @brief Módulo que cambia la dim_usuarios de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar la dim_usuarios.
		 * @param x (E) Dim_usuarios del sistema.
		 * @post Se cambió la dim_usuarios.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDimUsuarios(int x);
		
		/*
		 * @brief Módulo que cambia el util_contenidos de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar el util_contenidos.
		 * @param x (E) Util_contenidos del sistema.
		 * @post Se cambió el util_contenidos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUtilContenidos(int x);
		
		/*
		 * @brief Módulo que cambia la dim_contenidos de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar la dim_contenidos.
		 * @param x (E) Dim_contenidos del sistema.
		 * @post Se cambió la dim_contenidos.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDimContenidos(int x);
		
		/*
		 * @brief Módulo que cambia el util_valoraciones de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar el util_valoraciones.
		 * @param x (E) Util_valoraciones del sistema.
		 * @post Se cambió el util_valoraciones.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUtilValoraciones(int x);
		
		/*
		 * @brief Módulo que cambia la dim_valoraciones de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar la dim_valoraciones.
		 * @param x (E) Dim_valoraciones del sistema.
		 * @post Se cambió la dim_valoraciones.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDimValoraciones(int x);
		
		/*
		 * @brief Módulo que cambia totalPlayed de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar la totalPlayed.
		 * @param x (E) totalPlayed del sistema.
		 * @post Se cambió totalPlayed.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTotalPlayed(int x);
		
		/*
		 * @brief Módulo que cambia totalValorated de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar la totalValorated.
		 * @param x (E) totalValorated del sistema.
		 * @post Se cambió totalValorated.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTotalValorated(int x);
		
		/*
		 * @brief Módulo que cambia totalLikes de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar la totalLikes.
		 * @param x (E) totalLikes del sistema.
		 * @post Se cambió totalLikes.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTotalLikes(int x);
		
		/*
		 * @brief Módulo que cambia totalUnlikes de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere cambiar la totalUnlikes.
		 * @param x (E) totalUnlikes del sistema.
		 * @post Se cambió totalUnlikes.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTotalUnlikes(int x);
		
		/*
		 * @brief Módulo que obtiene el usuario de la posición especificada por el parámetro de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener el usuario.
		 * @param pos (E) Posición de la que se quiere obtener el usuario.
		 * @return (S) Usuario del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Usuario& getUsuario(int pos);
		
		/*
		 * @brief Módulo que obtiene el contenido de la posición especificada por el parámetro de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener el contenido.
		 * @param pos (E) Posición de la que se quiere obtener el contenido.
		 * @return (S) Contenido del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido& getContenido(int pos);
		
		/*
		 * @brief Módulo que obtiene la valoracion de la posición especificada por el parámetro de una variable de tipo Sistema.
		 * @param this (E) Sistema del que se quiere obtener la valoracion.
		 * @param pos (E) Posición de la que se quiere obtener la valoracion.
		 * @return (S) Valoracion del sistema.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Valoracion& getValoracion(int pos);
		
		/*
		 * @brief Módulo que introduce un usuario en la posición especificada por el parámetro de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere introducir el usuario.
		 * @param u (E) Usuario que se quiere introducir.
		 * @post Se cambió el usuario, además de las útiles y la dimensión en caso necesario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUsuario(int pos, Usuario &u);
		
		/*
		 * @brief Módulo que introduce un contenido en la posición especificada por el parámetro de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere introducir el contenido.
		 * @param c (E) Contenido que se quiere introducir.
		 * @post Se cambió el contenido, además de las útiles y la dimensión en caso necesario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContenido(int pos, Contenido &c);
		
		/*
		 * @brief Módulo que introduce una valoracion en la posición especificada por el parámetro de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere introducir la valoracion.
		 * @param v (E) Usuario que se quiere introducir.
		 * @post Se cambió el usuario, además de las útiles y la dimensión en caso necesario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setValoracion(int pos, Valoracion &v);
		
		/*
		 * @brief Módulo que redimensiona el vector de usuarios de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere redimensionar.
		 * @param tamanio (E) Tamanio al que se debe ajustar el vector.
		 * @post Se redimensiona el vector de usuarios si es necesario para ese tamanio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void resizeUsuarios(int tamanio);
		
		/*
		 * @brief Módulo que redimensiona el vector de contenidos de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere redimensionar.
		 * @param tamanio (E) Tamanio al que se debe ajustar el vector.
		 * @post Se redimensiona el vector de contenidos si es necesario para ese tamanio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void resizeContenidos(int tamanio);
		
		/*
		 * @brief Módulo que redimensiona el vector de valoraciones de una variable de tipo Sistema.
		 * @param this (E/S) Sistema que se quiere redimensionar.
		 * @param tamanio (E) Tamanio al que se debe ajustar el vector.
		 * @post Se redimensiona el vector de valoraciones si es necesario para ese tamanio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void resizeValoraciones(int tamanio);
		
		/*
		 * @brief Módulo que imprime el sistema.
		 * @param flujo (E) Objeto que permite imprimir por pantalla.
		 * @param v (E) Sistema que se quiere imprimir.
		 * @return (S) Referencia a flujo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		friend ostream& operator<<(ostream &flujo, Sistema &s);
		
		/*
		 * @brief Módulo que busca un usuario de una variable de tipo Sistema dado su id.
		 * @param this (E) Sistema en el que se quiere buscar.
		 * @param id (E) id del usuario que se quiere buscar.
		 * @return (S) Posición del usuario.
		 * @post Si la posición es igual a las útiles, significa que no se ha encontrado el Usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int buscarUsuarioPorId(int id);
		
		/*
		 * @brief Módulo que busca un usuario de una variable de tipo Sistema dado su userName.
		 * @param this (E) Sistema en el que se quiere buscar.
		 * @param userName (E) userName del usuario que se quiere buscar.
		 * @return (S) Posición del usuario.
		 * @post Si la posición es igual a las útiles, significa que no se ha encontrado el Usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int buscarUsuarioPorUserName(const string &userName);
		
		/*
		 * @brief Módulo que hace login en el Sistema.
		 * @param this (E) Sistema en el que se quiere hacer login.
		 * @return (S) id del usuario que hizo login.
		 * @post El usuario está en el Sistema y no pueden haber dos con mismo id.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int login();
		
		/*
		 * @brief Módulo que imprime las valoraciones y los datos sobre los contenidos de un usuario.
		 * @param this (E) Sistema en el que se quiere hacer login.
		 * @param id (E) id del usuario.
		 * @pre El id pertenece a un usuario del sistema.
		 * @author proShoT2004
		 * @version 2.0
		 */
		void consultarValoracionesUsuario(int id);
		
		/*
		 * @brief Módulo que permite a un usuario valorar un contenido.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @param id (E) id del usuario.
		 * @pre El id pertenece a un usuario del sistema.
		 * @post Hay una nueva valoracion en el sistema y si el usuario no había valorado antes ese contenido, este se añade a sus contenidos valorados.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void valorarContenido(int id);
		
		/*
		 * @brief Módulo que permite a un usuario dar mg a un contenido.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @param id (E) id del usuario.
		 * @pre El id pertenece a un usuario del sistema.
		 * @post El usuario tiene un nuevo contenido en sus mg.
		 * @author proShoT2004
		 * @version 3.0
		 */
		void gustarContenido(int id);
		
		/*
		 * @brief Módulo que permite a un usuario dar nomg a un contenido.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @param id (E) id del usuario.
		 * @pre El id pertenece a un usuario del sistema.
		 * @post El usuario tiene un nuevo contenido en sus nomg.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void nogustarContenido(int id);
		
		/*
		 * @brief Módulo que permite a un usuario visualizar y valorar un contenido.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @param id (E) id del usuario.
		 * @pre El id pertenece a un usuario del sistema.
		 * @post Si el usuario no había buscado o visualizado anteriormente ese contenido, se añade a sus vectores.
		 * @author proShoT2004
		 * @version 3.0
		 */
		void visualizarContenido(int id);
		
		/*
		 * @brief Módulo que calcula el cristoRating de todos los contenidos de un Sistema.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @post Todos los contenidos son cambiados.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void calcularCristoflixRating();
		
		/*
		 * @brief Módulo que muestra los 3 contenidos con mayor cristoRating, visualizados y nomg.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void top3General();
		
		/*
		 * @brief Módulo que permite buscar un contenido por id o por género.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @param id (E) id del usuario.
		 * @pre El id pertenece a un admin del sistema.
		 * @post Los contenidos del vector de búsqueda del usuario se actualizan a los nuevos y se muestra.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void buscarContenido(int id);
		
		/*
		 * @brief Módulo que muestra a los usuarios dark_night, facilon y ofuscated.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void topUsuarios();
		
		/*
		 * @brief Módulo que muestra el cristoRating de un contenido y la fórmula para su cálculo.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void consultarValoracionContenido();
		
		/*
		 * @brief Módulo que muestra los 3 contenidos con mayor cristoRating, visualizados y nomg del tipo que indique el usuario.
		 * @param this (E) Sistema en el que está conectado el usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void top3ContenidosTipo();
};

#endif
