Algoritmo meojora_calculadora
	Escribir 'Deseas realizar una operación';
	Escribir '1=si';
	Escribir '0=no';
	Leer respuesta;
	Mientras respuesta=1 Hacer
		Escribir 'Que operación deseas realizar';
		Escribir '1-Suma';
		Escribir '2-Resta';
		Escribir '3-Multiplicación';
		Escribir '4-Divición';
		Leer operacion;
		Escribir 'La operación seleccionada fue: ', operacion;
		Según operacion Hacer
			1:
				Escribir 'Ingrese un valor';
				Leer primero;
				Escribir 'Ingrese Otro valor ';
				Leer segundo;
				resultado <- primero+segundo;
				Escribir 'La suma de ', primero, ' + ', segundo, ' = ', resultado;
			2:
				Escribir 'Ingrese un valor';
				Leer primero;
				Escribir 'Ingrese Otro valor ';
				Leer segundo;
				resultado <- primero-segundo;
				Escribir 'La resta de ', primero, ' - ', segundo, ' = ', resultado;
			3:
				Escribir 'Ingrese un valor';
				Leer primero;
				Escribir 'Ingrese Otro valor ';
				Leer segundo;
				resultado <- primero*segundo;
				Escribir 'La multiplicación de ', primero, ' * ', segundo, ' = ', resultado;
			4:
				Escribir 'Ingrese un valor';
				Leer primero;
				Escribir 'Ingrese Otro valor ';
				Leer segundo;
				Si segundo=0 Entonces
					Escribir 'Error numerico, divisor es 0';
				SiNo
					resultado <- primero/segundo;
					Escribir 'La divición de ', primero, ' / ', segundo, ' = ', resultado;
				FinSi
		FinSegún
		
		Escribir 'Deseas realizar otra operación';
		Escribir '1=si';
		Escribir '0=no';
		Leer respuesta;
	FinMientras
	Escribir  "Error de entrada";
FinAlgoritmo
