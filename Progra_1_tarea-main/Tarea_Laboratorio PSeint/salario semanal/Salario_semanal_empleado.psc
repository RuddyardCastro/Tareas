Algoritmo Salario_semanal_empleado
	Escribir 'Deseas realizar el calculo';
	Escribir '1=si';
	Escribir '0=no';
	Leer respuesta;
	Mientras respuesta=1 Hacer
		Escribir "Ingrese los datos solicitados";
		sueldo=0;
		horas=0;
		Escribir "Brinda el sueldo del empleado por hora";
		Leer  sueldo;
		Escribir  "Brinda las horas laboradas durante la semena";		
		Leer  horas;
		Si horas>10 Entonces
			Escribir "Imposible el dato";
		SiNo
			total = sueldo*horas;
			Escribir  "El total a pagar es ",total;
		Fin Si
		Escribir 'Deseas realizar el calculo';
		Escribir '1=si';
		Escribir '0=no';
		Leer respuesta;
	FinMientras
	

FinAlgoritmo
