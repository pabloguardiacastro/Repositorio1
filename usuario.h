#include <iostream>
#include <string.h>
#include "fecha.h"
#include "contenido.h"
using namespace std;

#ifndef USUARIO

#define USUARIO

class Usuario {
	private:
		int id;
		string userName;
		string contrasenia;
		string nombre;
		string ape1;
		string ape2;
		Fecha fechaNac;
		bool activo;
		string tipo;
		Contenido* *v_contenido_visualizado;
		int util_contenido_visualizado;
		int dim_contenido_visualizado;
		Contenido* *v_contenido_mg;
		int util_contenido_mg;
		int dim_contenido_mg;
		Contenido* *v_contenido_nomg;
		int util_contenido_nomg;
		int dim_contenido_nomg;
		Contenido* *v_contenido_valorado;
		int util_contenido_valorado;
		int dim_contenido_valorado;
		Contenido* *v_contenido_buscado;
		int util_contenido_buscado;
		int dim_contenido_buscado;
	public:
		/*
		 * @brief Constructor de una variable de tipo Usuario.
		 * @param this (E) Usuario que se va a construir.
		 * @post El usuario se inicializa sin datos y con vectores dinámicos de dimensión 10.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Usuario();
		
		/*
		 * @brief Destructor de una variable de tipo Usuario.
		 * @param this (E) Usuario que se va a destruir.
		 * @post El contenido del usuario es borrado y su memoria ha sido liberada.
		 * @author proShoT2004
		 * @version 1.0
		 */
		~Usuario();
		
		/*
		 * @brief Módulo que obtiene el id de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el id.
		 * @return (S) Id del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getId() const;
		
		/*
		 * @brief Módulo que obtiene el userName de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el userName.
		 * @return (S) UserName del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getUserName();
		
		/*
		 * @brief Módulo que obtiene la contrasenia de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener la contrasenia.
		 * @return (S) Contrasenia del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getContrasenia();
		
		/*
		 * @brief Módulo que obtiene el nombre de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el Nombre.
		 * @return (S) Nombre del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getNombre();
		
		/*
		 * @brief Módulo que obtiene el ape1 de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el ape1.
		 * @return (S) Ape1 del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getApe1();
		
		/*
		 * @brief Módulo que obtiene el ape2 de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el ape2.
		 * @return (S) Ape2 del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getApe2();
		
		/*
		 * @brief Módulo que obtiene la fechaNac de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el fechaNac.
		 * @return (S) FechaNac del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Fecha& getFechaNac();
		
		/*
		 * @brief Módulo que obtiene el activo de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el activo.
		 * @return (S) activo del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool getActivo();
		
		/*
		 * @brief Módulo que obtiene el tipo de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el tipo.
		 * @return (S) tipo del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		string& getTipo();
		
		/*
		 * @brief Módulo que obtiene el util_contenido_visualizado de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el util_contenido_visualizado.
		 * @return (S) util_contenido_visualizado del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getUtilContenidoVisualizado();
		
		/*
		 * @brief Módulo que obtiene la dim_contenido_visualizado de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener la dim_contenido_visualizado.
		 * @return (S) dim_contenido_visualizado del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDimContenidoVisualizado();
		
		/*
		 * @brief Módulo que obtiene el util_contenido_mg de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el util_contenido_mg.
		 * @return (S) util_contenido_mg del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getUtilContenidoMg();
		
		/*
		 * @brief Módulo que obtiene la dim_contenido_mg de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener la dim_contenido_mg.
		 * @return (S) dim_contenido_mg del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDimContenidoMg();
		
		/*
		 * @brief Módulo que obtiene el util_contenido_nomg de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el util_contenido_nomg.
		 * @return (S) util_contenido_nomg del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getUtilContenidoNomg();
		
		/*
		 * @brief Módulo que obtiene la dim_contenido_nomg de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener la dim_contenido_nomg.
		 * @return (S) dim_contenido_nomg del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDimContenidoNomg();
		
		/*
		 * @brief Módulo que obtiene el util_contenido_valorado de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el util_contenido_valorado.
		 * @return (S) util_contenido_valorado del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getUtilContenidoValorado();
		
		/*
		 * @brief Módulo que obtiene la dim_contenido_valorado de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener la dim_contenido_valorado.
		 * @return (S) dim_contenido_valorado del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDimContenidoValorado();
		
		/*
		 * @brief Módulo que obtiene el util_contenido_mg de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el util_contenido_mg.
		 * @return (S) util_contenido_mg del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getUtilContenidoBuscado();
		
		/*
		 * @brief Módulo que obtiene la dim_contenido_buscado de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener la dim_contenido_buscado.
		 * @return (S) dim_contenido_buscado del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDimContenidoBuscado();
		
		/*
		 * @brief Módulo que obtiene el contenido_visualizado de la posición especificada por parámetro de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el contenido_visualizado.
		 * @param pos (E) Posición sel vector de la que se va a sacar el contenido.
		 * @return (S) contenido_visualizado del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido& getContenidoVisualizado(int pos);
		
		/*
		 * @brief Módulo que obtiene el contenido_mg de la posición especificada por parámetro de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el contenido_mg.
		 * @param pos (E) Posición sel vector de la que se va a sacar el contenido.
		 * @return (S) contenido_mg del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido& getContenidoMg(int pos);
		
		/*
		 * @brief Módulo que obtiene el contenido_nomg de la posición especificada por parámetro de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el contenido_nomg.
		 * @param pos (E) Posición sel vector de la que se va a sacar el contenido.
		 * @return (S) contenido_nomg del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido& getContenidoNomg(int pos);
		
		/*
		 * @brief Módulo que obtiene el contenido_valorado de la posición especificada por parámetro de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el contenido_valorado.
		 * @param pos (E) Posición sel vector de la que se va a sacar el contenido.
		 * @return (S) contenido_valorado del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido& getContenidoValorado(int pos);
		
		/*
		 * @brief Módulo que obtiene el contenido_buscado de la posición especificada por parámetro de una variable de tipo Usuario.
		 * @param this (E) Usuario del que se quiere obtener el contenido_buscado.
		 * @param pos (E) Posición sel vector de la que se va a sacar el contenido.
		 * @return (S) contenido_buscado del usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Contenido& getContenidoBuscado(int pos);
		
		/*
		 * @brief Módulo que cambia el id de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el id.
		 * @param x (E) Id del usuario.
		 * @post Se cambió el id.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setId(int x);
		
		/*
		 * @brief Módulo que cambia el userName de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el userName.
		 * @param x (E) UserName del usuario.
		 * @post Se cambió el userName.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUserName(const string &x);
		
		/*
		 * @brief Módulo que cambia la contrasenia de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar la contrasenia.
		 * @param x (E) Contrasenia del usuario.
		 * @post Se cambió la contrasenia.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContrasenia(const string &x);
		
		/*
		 * @brief Módulo que cambia el nombre de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el nombre.
		 * @param x (E) Nombre del usuario.
		 * @post Se cambió el nombre.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setNombre(const string &x);
		
		/*
		 * @brief Módulo que cambia el ape1 de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el ape1.
		 * @param x (E) Ape1 del usuario.
		 * @post Se cambió el ape1.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setApe1(const string &x);
		
		/*
		 * @brief Módulo que cambia el ape2 de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el ape2.
		 * @param x (E) Ape2 del usuario.
		 * @post Se cambió el ape2.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setApe2(const string &x);
		
		/*
		 * @brief Módulo que cambia la fechaNac de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar la fechaNac.
		 * @param x (E) FechaNac del usuario.
		 * @post Se cambió la fechaNac.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setFechaNac(const Fecha &x);
		
		/*
		 * @brief Módulo que cambia el activo de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el activo.
		 * @param x (E) activo del usuario.
		 * @post Se cambió el activo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setActivo(bool x);
		
		/*
		 * @brief Módulo que cambia el tipo de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el tipo.
		 * @param x (E) tipo del usuario.
		 * @post Se cambió el tipo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setTipo(const string &x);
		
		/*
		 * @brief Módulo que cambia el util_contenido_visualizado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el util_contenido_visualizado.
		 * @param x (E) util_contenido_visualizado del usuario.
		 * @post Se cambió el util_contenido_visualizado.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUtilContenidoVisualizado(int x);
		
		/*
		 * @brief Módulo que cambia la dim_contenido_visualizado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar la dim_contenido_visualizado.
		 * @param x (E) dim_contenido_visualizado del usuario.
		 * @post Se cambió la dim_contenido_visualizado.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDimContenidoVisualizado(int x);
		
		/*
		 * @brief Módulo que cambia el util_contenido_mg de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el util_contenido_mg.
		 * @param x (E) util_contenido_mg del usuario.
		 * @post Se cambió el util_contenido_mg.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUtilContenidoMg(int x);
		
		/*
		 * @brief Módulo que cambia la dim_contenido_mg de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar la dim_contenido_mg.
		 * @param x (E) dim_contenido_mg del usuario.
		 * @post Se cambió la dim_contenido_mg.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDimContenidoMg(int x);
		
		/*
		 * @brief Módulo que cambia el util_contenido_nomg de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el util_contenido_nomg.
		 * @param x (E) util_contenido_nomg del usuario.
		 * @post Se cambió el util_contenido_nomg.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUtilContenidoNomg(int x);
		
		/*
		 * @brief Módulo que cambia la dim_contenido_nomg de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar la dim_contenido_nomg.
		 * @param x (E) dim_contenido_nomg del usuario.
		 * @post Se cambió la dim_contenido_nomg.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDimContenidoNomg(int x);
		
		/*
		 * @brief Módulo que cambia el util_contenido_valorado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el util_contenido_valorado.
		 * @param x (E) util_contenido_valorado del usuario.
		 * @post Se cambió el util_contenido_valorado.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUtilContenidoValorado(int x);
		
		/*
		 * @brief Módulo que cambia la dim_contenido_valorado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar la dim_contenido_valorado.
		 * @param x (E) dim_contenido_valorado del usuario.
		 * @post Se cambió la dim_contenido_valorado.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDimContenidoValorado(int x);
		
		
		/*
		 * @brief Módulo que cambia el util_contenido_valorado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar el util_contenido_valorado.
		 * @param x (E) util_contenido_valorado del usuario.
		 * @post Se cambió el util_contenido_valorado.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUtilContenidoBuscado(int x);
		
		/*
		 * @brief Módulo que cambia la dim_contenido_buscado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar la dim_contenido_buscado.
		 * @param x (E) dim_contenido_buscado del usuario.
		 * @post Se cambió la dim_contenido_buscado.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDimContenidoBuscado(int x);
		
		/*
		 * @brief Módulo que introduce un contenido_visualizado en la posición especificada por el parámetro de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere introducir el contenido_visualizado.
		 * @param c (E) contenido_visualizado que se quiere introducir.
		 * @post Se cambió el contenido_visualizado, además de las útiles y la dimensión en caso necesario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContenidoVisualizado(int pos, Contenido &c);
		
		/*
		 * @brief Módulo que introduce un contenido_mg en la posición especificada por el parámetro de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere introducir el contenido_mg.
		 * @param c (E) contenido_mg que se quiere introducir.
		 * @post Se cambió el contenido_mg, además de las útiles y la dimensión en caso necesario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContenidoMg(int pos, Contenido &c);
		
		/*
		 * @brief Módulo que introduce un contenido_nomg en la posición especificada por el parámetro de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere introducir el contenido_nomg.
		 * @param c (E) contenido_nomg que se quiere introducir.
		 * @post Se cambió el contenido_nomg, además de las útiles y la dimensión en caso necesario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContenidoNomg(int pos, Contenido &c);
		
		/*
		 * @brief Módulo que introduce un contenido_valorado en la posición especificada por el parámetro de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere introducir el contenido_valorado.
		 * @param c (E) contenido_valorado que se quiere introducir.
		 * @post Se cambió el contenido_valorado, además de las útiles y la dimensión en caso necesario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContenidoValorado(int pos, Contenido &c);
		
		/*
		 * @brief Módulo que introduce un contenido_buscado en la posición especificada por el parámetro de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere introducir el contenido_buscado.
		 * @param c (E) contenido_buscado que se quiere introducir.
		 * @post Se cambió el contenido_buscado, además de las útiles y la dimensión en caso necesario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setContenidoBuscado(int pos, Contenido &c);
		
		/*
		 * @brief Módulo que redimensiona el vector de contenido_visualizado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere redimensionar.
		 * @param tamanio (E) Tamanio al que se debe ajustar el vector.
		 * @post Se redimensiona el vector de contenido_visualizado si es necesario para ese tamanio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void resizeContenidoVisualizado(int tamanio);
		
		/*
		 * @brief Módulo que redimensiona el vector de contenido_mg de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere redimensionar.
		 * @param tamanio (E) Tamanio al que se debe ajustar el vector.
		 * @post Se redimensiona el vector de contenido_mg si es necesario para ese tamanio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void resizeContenidoMg(int tamanio);
		
		/*
		 * @brief Módulo que redimensiona el vector de contenido_nomg de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere redimensionar.
		 * @param tamanio (E) Tamanio al que se debe ajustar el vector.
		 * @post Se redimensiona el vector de contenido_nomg si es necesario para ese tamanio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void resizeContenidoNomg(int tamanio);
		
		/*
		 * @brief Módulo que redimensiona el vector de contenido_valorado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere redimensionar.
		 * @param tamanio (E) Tamanio al que se debe ajustar el vector.
		 * @post Se redimensiona el vector de contenido_valorado si es necesario para ese tamanio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void resizeContenidoValorado(int tamanio);
		
		/*
		 * @brief Módulo que redimensiona el vector de contenido_buscado de una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere redimensionar.
		 * @param tamanio (E) Tamanio al que se debe ajustar el vector.
		 * @post Se redimensiona el vector de contenido_buscado si es necesario para ese tamanio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void resizeContenidoBuscado(int tamanio);
		
		/*
		 * @brief Módulo que cambia una variable de tipo Usuario.
		 * @param this (E/S) Usuario que se quiere cambiar.
		 * @param id (E) Id del usuario.
		 * @param userName (E) UserName del usuario.
		 * @param contrasenia (E) Contrasenia del usuario.
		 * @param nombre (E) Nombre del usuario.
		 * @param ape1 (E) Ape1 del usuario.
		 * @param ape2 (E) Ape2 del usuario.
		 * @param fechaNac (E) FechaNac del usuario.
		 * @post Se cambió el usuario.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setUsuario(int id, const string &userName, const string &contrasenia, const string &nombre, const string &ape1, const string &ape2, const Fecha &fechaNac, bool activo, const string &tipo);
		
		/*
		 * @brief Módulo que asigna un usuario a otro (operator=).
		 * @param this (E/S) Usuario que se quiere cambiar.
		 * @param u (E) Usuario que se quiere asignar.
		 * @return (S) Referencia a this.
		 * @post This copia los valores del Usuario parámetro.
		 * @author proShoT2004
		 * @version 2.0
		 */
		Usuario& operator=(Usuario &u);
		
		/*
		 * @brief Módulo que imprime un usuario.
		 * @param flujo (E) Objeto que permite imprimir por pantalla.
		 * @param u (E) Usuario que se quiere imprimir.
		 * @return (S) Referencia a flujo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		friend ostream& operator<<(ostream &flujo, Usuario &u);
		
		/*
		 * @brief Módulo que comprueba si la contrasenia es correcta.
		 * @param this (E) Usuario del que se quiere comprobar la contrasenia.
		 * @contrasenia (E) Contrasenia que se quiere comprobar.
		 * @return (S) Booleano que indica si es correcta.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool comprobarContrasenia(const string &contrasenia);
};

#endif
