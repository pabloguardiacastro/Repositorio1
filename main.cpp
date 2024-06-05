#include <iostream>
#include <string.h>
#include "fecha.h"
#include "usuario.h"
#include "contenido.h"
#include "valoracion.h"
#include "sistem.h"
using namespace std;

int main () {
	Sistema *sistem = new Sistema;
	sistem -> programa();
	delete sistem;
}
