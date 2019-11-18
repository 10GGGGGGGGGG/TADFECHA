/***************************************************************************
*  CABECERA:     INTERFAZ de la clase FECHA
*
*  DESCRIPCION : DECLARO la clase FECHA, creo constructor con la fecha del, 
*                sistema,el TAD  fecha tiene DATOS MIEMBRO PRIVADOS
*                tipo INT, mes, dia,anio y varias FUNCIONES requeridas
*
*  PROFESOR :    RAFAEL MUÑOZ GIL
*
*  ALUMNO:       Christian Vladimir Sucuzhanay Arévalo
* **************************************************************************/
#include <iostream>
#ifndef FECHA_H
#define FECHA_H

class Fecha //Declaración de la clase Fecha 
{
public:
Fecha();//Constructor inicializa Fecha con la fecha del sistema
void imprimir() const; // imprime la fecha en formato mes/día/año
int diaSemana ();//Devuelve dia semana en formato(1-lunes,7-domingo)
int comprobarValidezFecha(int, int, int);//Valida la entrada por teclado de la fecha introducida
int comprobarDia( int ) const;//Función para comprobar si dia es apropiado para mes y anio
bool bisiesto( int ); // ¿está la fecha en un año bisiesto?
Fecha operator +(int);

private:
int mes; // 1-12 (Enero-Diciembre)
int dia; // 1-31 con base en el mes
int anio; // cualquier año

}; // fin de la clase Fecha

#endif