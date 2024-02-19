Algoritmo  sum_numero_positivo_negativo
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
		Escribir "Ingrese otro  numero";
		num2=0;
		Leer num2;
		sum=num+num2;
		//Evalua el valor
		Si sum<0 Entonces
			Escribir "La suma del numero  ",sum," es negativo";
		
		SiNo
			Si sum>0 Entonces
				Escribir "lasuma del numero ",sum," es positivo";
			SiNo
				Escribir "El numero ",sum," es 0";
			Fin Si
		Fin Si
		Escribir  "Hola deseas activar evaluador otra vez ";
		Escribir  "1=Si";
		Escribir  "Otro valor=no";
		respuesta=0;
		Leer respuesta;
		Limpiar Pantalla;
	Fin Mientras
	
FinAlgoritmo
