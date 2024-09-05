#include"menuprincipal.h"

menuprincipal::menuprincipal() {

}
void menuprincipal::menu(){
	int respuesta;
	
	cout << "Menu principal del sistema hospitalario" << endl << endl;
	cout << "1-Submenu de Administracion" << endl;
	cout << "2-Submenu de control de citas" << endl;
	cout << "3-Submenu para Busquedas y listados" << endl;
	cout << "Favor ingrese su respuesta: " << endl;
	cin >> respuesta;
	switch (respuesta)
	{
	case 1:
		system("cls");
		opcionUno();
		break;
	case 2:
		system("cls");
		opcionDos();
		break;
	case 3:
		system("cls");
		opcionTres();
		break;
	default:
		break;
	}
}
void menuprincipal::opcionUno() {
	submenuadministracion* submenu1 = new submenuadministracion();
	submenu1->submenuadmin();
}
void menuprincipal::opcionDos() {
	submenucontrol* submenu2 = new submenucontrol();
	submenu2->submenuctrl();
}
void menuprincipal::opcionTres() {
	busquedasylistados* submenu3 = new busquedasylistados();
	submenu3->submenuByL();
}