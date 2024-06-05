#include <iostream>
#include <string.h>
using namespace std;

#ifndef FECHA

#define FECHA

class Fecha {
	private:
		int dia;
		int mes;
		int anio;
	public:
		/*
		 * @brief Constructor de una variable de tipo Fecha.
		 * @param this (E) Fecha que se va a construir.
		 * @post La fecha se inicializa a 0 en sus variables.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Fecha();
		
		/*
		 * @brief Destructor de una variable de tipo Fecha.
		 * @param this (E) Fecha que se va a destruir.
		 * @post El contenido de la fecha es borrado y su memoria ha sido liberada.
		 * @author proShoT2004
		 * @version 1.0
		 */
		~Fecha();
		
		/*
		 * @brief Módulo que obtiene el dia de una variable de tipo Fecha.
		 * @param this (E) Fecha de la que se quiere obtener el dia.
		 * @return (S) Dia de la fecha.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getDia() const;
		
		/*
		 * @brief Módulo que obtiene el mes de una variable de tipo Fecha.
		 * @param this (E) Fecha de la que se quiere obtener el mes.
		 * @return (S) Dia de la mes.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getMes() const;
		
		/*
		 * @brief Módulo que obtiene el anio de una variable de tipo Fecha.
		 * @param this (E) Fecha de la que se quiere obtener el anio.
		 * @return (S) anio de la fecha.
		 * @author proShoT2004
		 * @version 1.0
		 */
		int getAnio() const;
		
		/*
		 * @brief Módulo que cambia el dia de una variable de tipo Fecha.
		 * @param this (E/S) Fecha que se quiere cambiar el dia.
		 * @param x (E) Dia de la fecha.
		 * @pre El dia es un número entre 1 y 31.
		 * @post Se cambió el dia.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setDia(int x);
		
		/*
		 * @brief Módulo que cambia el mes de una variable de tipo Fecha.
		 * @param this (E/S) Fecha que se quiere cambiar el mes.
		 * @param x (E) Mes de la fecha.
		 * @pre El mes es un número entre 1 y 12.
		 * @post Se cambió el mes.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setMes(int x);
		
		/*
		 * @brief Módulo que cambia el anio de una variable de tipo Fecha.
		 * @param this (E/S) Fecha que se quiere cambiar el anio.
		 * @param x (E) Anio de la fecha.
		 * @pre El anio es un número entre 1900 y 2024.
		 * @post Se cambió el anio.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setAnio(int x);
		
		/*
		 * @brief Módulo que cambia una variable de tipo Fecha.
		 * @param this (E/S) Fecha que se quiere cambiar.
		 * @param dia (E) Dia de la fecha.
		 * @param mes (E) Mes de la fecha.
		 * @param anio (E) Anio de la fecha.
		 * @pre Los parámetros pertenecen a una fecha entre 01/01/1900 y 31/12/2024.
		 * @post Se cambió la fecha.
		 * @author proShoT2004
		 * @version 1.0
		 */
		void setFecha(int dia, int mes, int anio);
		
		/*
		 * @brief Módulo que asigna una fecha a otra (operator=).
		 * @param this (E/S) Fecha que se quiere cambiar.
		 * @param f (E) Fecha que se quiere asignar.
		 * @return (S) Referencia a this.
		 * @post This copia los valores de la Fecha parámetro.
		 * @author proShoT2004
		 * @version 1.0
		 */
		Fecha& operator=(const Fecha &f);
		
		/*
		 * @brief Módulo que compara si una fecha es menor que otra (operator<).
		 * @param this (E) Fecha que se quiere comparar.
		 * @param f (E) Fecha con la que se quiere comparar.
		 * @return (S) Booleano que indica el resultado de la comparación.
		 * @post El booleano puede tener cualquiera de sus dos valores.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool operator<(const Fecha &f) const;
		
		/*
		 * @brief Módulo que compara si una fecha es mayor que otra (operator>).
		 * @param this (E) Fecha que se quiere comparar.
		 * @param f (E) Fecha con la que se quiere comparar.
		 * @return (S) Booleano que indica el resultado de la comparación.
		 * @post El booleano puede tener cualquiera de sus dos valores.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool operator>(const Fecha &f) const;
		
		/*
		 * @brief Módulo que compara si una fecha es menor o igual que otra (operator<=).
		 * @param this (E) Fecha que se quiere comparar.
		 * @param f (E) Fecha con la que se quiere comparar.
		 * @return (S) Booleano que indica el resultado de la comparación.
		 * @post El booleano puede tener cualquiera de sus dos valores.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool operator<=(const Fecha &f) const;
		
		/*
		 * @brief Módulo que compara si una fecha es mayor o igual que otra (operator>=).
		 * @param this (E) Fecha que se quiere comparar.
		 * @param f (E) Fecha con la que se quiere comparar.
		 * @return (S) Booleano que indica el resultado de la comparación.
		 * @post El booleano puede tener cualquiera de sus dos valores.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool operator>=(const Fecha &f) const;
		
		/*
		 * @brief Módulo que compara si una fecha es igual que otra (operator==).
		 * @param this (E) Fecha que se quiere comparar.
		 * @param f (E) Fecha con la que se quiere comparar.
		 * @return (S) Booleano que indica el resultado de la comparación.
		 * @post El booleano puede tener cualquiera de sus dos valores.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool operator==(const Fecha &f) const;
		
		/*
		 * @brief Módulo que compara si una fecha es distinta que otra (operator!=).
		 * @param this (E) Fecha que se quiere comparar.
		 * @param f (E) Fecha con la que se quiere comparar.
		 * @return (S) Booleano que indica el resultado de la comparación.
		 * @post El booleano puede tener cualquiera de sus dos valores.
		 * @author proShoT2004
		 * @version 1.0
		 */
		bool operator!=(const Fecha &f) const;
		
		/*
		 * @brief Módulo que imprime una fecha.
		 * @param flujo (E) Objeto que permite imprimir por pantalla.
		 * @param f (E) Fecha que se quiere imprimir.
		 * @return (S) Referencia a flujo.
		 * @author proShoT2004
		 * @version 1.0
		 */
		friend ostream& operator<<(ostream &flujo, const Fecha &f);
};

#endif
