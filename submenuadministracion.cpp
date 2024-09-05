#include"submenuadministracion.h"

submenuadministracion::submenuadministracion() {

}
void submenuadministracion::submenuadmin() {

		int respuesta;
		cout << "Submenu de administracion" << endl << endl;
		cout << "1-Ingresar especialidades" << endl;
		cout << "2-Ingresar Doctor (Por especialidad)" << endl;
		cout << "3-Ingresar Dueño" << endl;
		cout << "4- Ingresar Mascota(por dueño)"
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
		case 4:
			system("cls");
			opcionCuatro();
			break;
		case 0:
			system("cls");
			opcionCuatro();
			break;
		default:
			break;
		}
	}
}