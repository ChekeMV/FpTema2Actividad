// Este codigo ha sido creado en base al Ejemplo 4.5 de la página 134 del libro Fundamentos de Programación de Luis Joyanes Aguilar
// Nómina Semanal
//Programado en C++
#include<iostream>
using namespace std;

int main() {
	int horas,impuestos,tarifa,sneto,sbruto; //Declaramos las variables de tipo entero
	char nombre[100], apellidop[100],apellidom[100];//Esta escrito de esta forma con el fin de que se pueda guardar el nombre completo
	cout << "Escribe el nombre del empleado: " << endl;
	cin >> nombre>>apellidop>>apellidop;
	cout << "Escribe las horas Trabajadas: " << endl;
	cin >> horas;
	cout << "Escribe la tarifa por hora: " << endl;
	cin >> tarifa;
	if (horas<=35) //si las horas trabajadas son menores o iguales a 35, el salario bruto sera el producto de las horas por la tarifa
	{
		sbruto = horas*tarifa;
	} 
	else 
	{
		sbruto = 35*tarifa+(horas-35)*1.5*tarifa;//Este procedimiento se lleva a cabo si no se cumple la expresión lógica
	}
	if (sbruto<=2000) //si el salario bruto es menor o igual a 2000 los impuestos seran 0
	{
		impuestos = 0;
	} 
	else 
	{
		if (sbruto>2000 && sbruto<=2220) //Se realiza un sentencia if dentro del else
		{
			impuestos = (sbruto-2000)*.20;//los impuestos son igual a el producto entre la resta entre el salario bruto menos 2000, y .20
		} 
		else 
		{
			impuestos = (220*0.20)+(sbruto-2220);
		}
	}
	sneto = sbruto-impuestos;//el salario neto es igual a el salario bruto menos los impuestos
	cout << nombre<<" "<<apellidom<<" "<<apellidop << ": su salario bruto es de $" << sbruto << " , sus impuestos son de $" << impuestos << " y su salario neto es de $" << sneto << endl;
	return 0;
}

