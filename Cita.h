#include "ColeccionDueños.h"
#include "coleccionmascotas.h"
#include "ColeccionDoctores.h"
class Cita {
private:
	int hora;
	string dia;
	ColeccionDoctores* doctor;
	ColeccionDueños* duenno;
	coleccionmascotas* paciente;
public:
	Cita(int, string, ColeccionDoctores*, ColeccionDueños*,coleccionmascotas*);
	Cita();
	int getHora();
	string getDia();
	void setHora(int);
	void setDia(string);
	ColeccionDoctores* getDoctor();
	ColeccionDueños* getDuenno();
	coleccionmascotas* getPaciente();
	void setDoctor(ColeccionDoctores*);
	void setDuenno(ColeccionDueños*);
	void setPaciente(coleccionmascotas*);
	void cancelarCita();
	void modificarCita(int, string);
	string ImprimirCita();




};