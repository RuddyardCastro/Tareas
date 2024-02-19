Algoritmo Encontrar_numero_mas_grande
	Contador=0;
	num1=0;
	masGrande=0;
	Mientras Contador<10 Hacer
		Escribir  "Introdusca un numero";
		Leer  num1;
		Si num1>masGrande Entonces
			masGrande=num1;
			
		Fin Si
		Contador=Contador+1;
		Escribir  "El numero mas grande es: ",masGrande," Iteracion numero: ",Contador;
	Fin Mientras
	
FinAlgoritmo
