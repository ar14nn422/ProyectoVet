#include"menuprincipal.h"

menuprincipal::menuprincipal() {
	respuesta = 0;
}
menuprincipal::menuprincipal(int resp) {
	this->respuesta = resp;
}
void menuprincipal::setRespuesta(int resp) {
	respuesta = resp;
}
int menuprincipal::getRespuesta() {
	return respuesta;
}
string menuprincipal::mostrarMenuPrincipal() {
	stringstream s;
	s << "1- Submenu Administracion" << endl;
	s << "2- Submenu Control de Citas" << endl;
	s << "3- Submenu Busquedas y Listados" << endl;
	s << "Ingrese una opcion:" << endl;
	return s;
}