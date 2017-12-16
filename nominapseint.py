# Este codigo ha sido creado en base al Ejemplo 4.5 de la página 134 del libro Fundamentos de Programación de Luis Joyanes Aguilar
# Nomina Semanal
# Programado en Python


if __name__ == '__main__':
	print("Escribe el nombre del empleado: ")#muestra en la pantalla el mensaje entre comillas
	nombre = input()
	print("Escribe las horas Trabajadas: ")
	horas = float(input())
	print("Escribe la tarifa por hora: ")
	tarifa = float(input())
	if horas<=35:#si las horas trabajadas son menores o iguales a 35, el salario bruto sera el producto de las horas por la tarifa
		sbruto = horas*tarifa
	else:
		sbruto = 35*tarifa+(horas-35)*1.5*tarifa#Este procedimiento se lleva a cabo si no se cumple la expresión lógica
	if sbruto<=2000:
		impuestos = 0#si el salario bruto es menor o igual a 2000 los impuestos seran 0
	else:
		if sbruto>2000 and sbruto<=2220:
			impuestos = (sbruto-2000)*.20#los impuestos son igual a el producto entre la resta entre el salario bruto menos 2000, y .20
		else:
			impuestos = (220*0.20)+(sbruto-2220)
	sneto = sbruto-impuestos
	print(nombre,": su salario bruto es de $",sbruto," , sus impuestos son de $",impuestos," y su salario neto es de $",sneto)

