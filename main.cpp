#include <iostream>
#include <string.h>
#include "fecha.h"
#include "usuario.h"
#include "contenido.h"
#include "valoracion.h"
#include "sistem.h"
using namespace std;

/*
 * @brief Módulo que imprime el menú para administradores y pide qué función se va a ejecutar.
 * @return (S) Función que se va a ejecutar.
 * @post La función es una de las que se imprimen.
 * @author proShoT2004
 * @version 1.0
 */
int menuAdmin();

/*
 * @brief Módulo que imprime el menú para clientes y pide qué función se va a ejecutar.
 * @return (S) Función que se va a ejecutar.
 * @post La función es una de las que se imprimen.
 * @author proShoT2004
 * @version 1.0
 */
int menuCliente();

int main () {
	Sistema *sistem = new Sistema;
	int id, pos;
	int opcion;
	bool salir = false;
	do {
		bool seguir = true;
		id = sistem -> login();
		pos = sistem -> buscarUsuarioPorId(id);
		while (seguir && !salir) {
			if (sistem -> getUsuario(pos).getTipo() == "admin") {
				opcion = menuAdmin();
				switch (opcion) {
					case 10:
						seguir = false;
						break;
					case 20:
						delete sistem;
						sistem = new Sistema;
						break;
					case 30:
						cout << *(sistem) << endl;
						break;
					case 41:
						sistem -> top3General();
						break;
					case 42:
						sistem -> top3ContenidosTipo();
						break;
					case 43:
						sistem -> topUsuarios();
						break;
					case 51:
						break;
					case 52:
						break;
					case 53:
						sistem -> buscarContenido(id);
						break;
					case 54:
						break;
					case 55:
						sistem -> consultarValoracionContenido();
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
				opcion = menuCliente();
				switch (opcion) {
					case 1:
						seguir = false;
						break;
					case 2:
						sistem -> consultarValoracionesUsuario(id);
						break;
					case 3:
						sistem -> gustarContenido(id);
						sistem -> calcularCristoflixRating();
						break;
					case 4:
						sistem -> nogustarContenido(id);
						sistem -> calcularCristoflixRating();
						break;
					case 5:
						sistem -> visualizarContenido(id);
						sistem -> calcularCristoflixRating();
						break;
					case 6:
						salir = true;
						break;
				}
			}
		}
	} while (!salir);
	delete sistem;
}

int menuAdmin() {
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

int menuCliente() {
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
