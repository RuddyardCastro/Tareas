Algoritmo Cuadrado_Cubo_de_un_numero
	//Permite entrar o salir del menu antes de iniciar
	Escribir  "Hola deseas activar la calculadora";
	Escribir  "1=Si";
	Escribir  "Otro valor=no";
	respuesta=0;
	Leer respuesta;
		//Valor true inicia la calculadora
		Mientras respuesta=1 Hacer
		Escribir  "Ingrese el valor a calcular el cuadrado";
		val1=0;
		Leer  val1;
		cuadrado=val1^2;
		
		Escribir  "Deseas evaluar el cubo del mism numero";
		Escribir  "1=Si";
		Escribir  "0=no";
		respuesta2=0;
		Leer respuesta2;
		//Valida si el valor inicial es igual al valor inicial
		Si respuesta2=1 Entonces
			//Use ^
			cubo=val1^3;
			
		SiNo
			//Respuesta doferente a el primer valor 
			Escribir  "Ingrese el valor a calcular el cubo";
			val2=0;
			Leer  val2;
			cubo=val2^3;
			
		Fin Si
		Escribir "El cuadrado del numeo es ",cuadrado," el cubo del numero es ",cubo;
		Escribir "";
		Escribir  "Hola deseas activar la calculadora otra vez";
		Escribir  "1=Si";
		Escribir  "0=no";
		respuesta=0;
		Leer respuesta;
		Limpiar Pantalla;
	Fin Mientras

		
	
FinAlgoritmo
