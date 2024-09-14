#include "Cita.h"

Cita::Cita(int hora, string dia, bool estado, ColeccionDoctores* doctor, ColeccionDue�os* duenno, coleccionmascotas* paciente)
{
	hora = hora;
	dia = dia;
	estado = estado;
	doctor = doctor;
	duenno = duenno;
	paciente = paciente;
}

Cita::Cita()
{
	hora = 0;
	dia = " ";
	estado = false;
	doctor = nullptr;
	duenno = nullptr;
	paciente = nullptr;
}

int Cita::getHora()
{
	return hora;
}

string Cita::getDia()
{
	return dia;
}

void Cita::setHora(int hora)
{
	hora = hora;
}

void Cita::setDia(string dia)
{
	dia = dia;
}

void Cita::setEstaddo(bool estado)
{
	estado = estado;
}

bool Cita::getEstado()
{
	return false;
}

ColeccionDoctores* Cita::getDoctor()
{
	return doctor;
}

ColeccionDue�os* Cita::getDuenno()
{
	return duenno;
}

coleccionmascotas* Cita::getPaciente()
{
	return paciente;
}

void Cita::setDoctor(ColeccionDoctores* doctor)
{
	if (doctor == nullptr) {
		doctor = new ColeccionDoctores(*doctor);
	}
}

void Cita::setDuenno(ColeccionDue�os* duenno)
{
	if (duenno == nullptr) {
		duenno = new ColeccionDue�os(*duenno);
	}
}

void Cita::setPaciente(coleccionmascotas* paciente)
{
	if (paciente == nullptr) {
		paciente = new coleccionmascotas(*paciente);
	}
}

void Cita::reactivarCita()
{
	setEstado(true);
}

void Cita::cancelarCita()
{
	setEstado(false);
}

void Cita::modificarCita(int hora, string dia)//
{
	if (getEstado == true) {
		setHora(hora);
		setDia(dia);
	}
}

string Cita::ImprimirCita()
{
	stringstream s;
	s << "D�a de su cita:" << dia << endl;
	s << "Hora de su cita:" << hora << endl;
	s << "Para el paciente:" << paciente << endl;
	return s.str();
}
