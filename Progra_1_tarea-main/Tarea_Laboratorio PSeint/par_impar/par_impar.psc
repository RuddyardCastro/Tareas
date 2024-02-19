Algoritmo  número_par_impar
	Escribir  "Hola deseas activar evaluador ";
	Escribir  "1=Si";
	Escribir  "Otro valor=no";
	respuesta=0;
	Leer respuesta;
	//Valor true inicia la calculadora
	Mientras respuesta=1 Hacer
		Escribir "Ingrese un numero";
		num=0;
		Leer num;
		residuo=num%2;
		Si residuo==0 Entonces
			Escribir "El numero",num," es par";
		SiNo
			Escribir "El numero ",num," es impar";
		Fin Si
		Escribir  "Hola deseas activar evaluador otra vez ";
		Escribir  "1=Si";
		Escribir  "Otro valor=no";
		respuesta=0;
		Leer respuesta;
		Limpiar Pantalla;
	Fin Mientras
FinAlgoritmo
