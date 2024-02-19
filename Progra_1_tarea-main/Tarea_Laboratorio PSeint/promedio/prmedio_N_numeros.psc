Algoritmo prmedio_N_numeros
	Escribir 'Deseas realizar el promedio';
	Escribir '1=si';
	Escribir '0=no';
	Leer respuesta;
	Mientras respuesta=1 Hacer
		Escribir "Cuantos numeros deseas ingresar";
		n=0;
		x=1;
		itera=0;
		Leer  n;
		Mientras x<=n Hacer
			Escribir "Brinda primer valor  ",x;
			Leer  val;
			itera=itera+val;
			x=x+1;
			tottal = itera/n;
		Fin Mientras
		Escribir "El resultado es ",tottal;
		Escribir 'Deseas realizar otro promedio';
		Escribir '1=si';
		Escribir '0=no';
		Leer respuesta;
		Limpiar Pantalla;
	FinMientras
	Escribir "Gracias por usar nuestro sevicio :)";

FinAlgoritmo
