/*
#include <iostream>
#include <cstdlib> // Para generar números aleatorios


using namespace std;

// Función para generar un voto aleatorio
int generarVotoAleatorio() {
    return rand() % 51;
}

int main() {
    // Inicializar la semilla de generación aleatoria
    srand(time(0));

    // Definir el número de candidatos
    const int numCandidatos = 3;

    // Definir el número de rondas
    const int numRondas = 5;

    // Crear una matriz para almacenar los nombres de los candidatos
    string nombresCandidatos[numCandidatos] = {"Candidato 1", "Candidato 2", "Candidato 3"};

    // Crear una matriz para almacenar los votos
    int votos[numCandidatos][numRondas];

    // Generar votos aleatorios para cada candidato en cada ronda
    for (int i = 0; i < numCandidatos; i++) {
        for (int j = 0; j < numRondas; j++) {
            votos[i][j] = generarVotoAleatorio();
        }
    }

    // Mostrar los nombres de los candidatos y los votos recibidos en cada ronda
    for (int i = 0; i < numCandidatos; i++) {
        cout << "**" << nombresCandidatos[i] << "**" << endl;
        for (int j = 0; j < numRondas; j++) {
            cout << "Ronda " << j + 1 << ": " << votos[i][j] << " votos" << endl;
        }
        cout << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <cstdlib> // Para generar números aleatorios

using namespace std;

// Función para generar un voto aleatorio
int generarVotoAleatorio() {
  return rand() % 51;
}

int main() {
  // Inicializar la semilla de generación aleatoria
  srand(time(0));

  // Definir el número de candidatos
  const int numCandidatos = 3;

  // Definir el número de rondas
  const int numRondas = 5;

  // Crear una matriz para almacenar los nombres de los candidatos
  string nombresCandidatos[numCandidatos] = {"Candidato 1", "Candidato 2", "Candidato 3"};

  // Crear una matriz para almacenar los votos
  int votos[numCandidatos][numRondas];

  // Generar votos aleatorios para cada candidato en cada ronda
  for (int i = 0; i < numCandidatos; i++) {
    for (int j = 0; j < numRondas; j++) {
      votos[i][j] = generarVotoAleatorio();
    }
  }

  // Mostrar los nombres de los candidatos y los votos recibidos en cada ronda
  for (int i = 0; i < numCandidatos; i++) {
    cout << "**" << nombresCandidatos[i] << "**" << endl;
    for (int j = 0; j < numRondas; j++) {
      cout << "Ronda " << j + 1 << ": " << votos[i][j] << " votos" << endl;
    }
    cout << endl;
  }

  // Calcular ganador y perdedor
  int votosGanador = 0;
  int votosPerdedor = 0;
  int indiceGanador = 0;
  int indicePerdedor = 0;

  for (int i = 0; i < numCandidatos; i++) {
    int totalVotosCandidato = 0;
    for (int j = 0; j < numRondas; j++) {
      totalVotosCandidato += votos[i][j];
    }

    // Actualizar ganador
    if (totalVotosCandidato > votosGanador) {
      votosGanador = totalVotosCandidato;
      indiceGanador = i;
    }

    // Actualizar perdedor
    if (totalVotosCandidato < votosPerdedor) {
      votosPerdedor = totalVotosCandidato;
      indicePerdedor = i;
    }
  }

  // Mostrar ganador y perdedor
  cout << "**Ganador:**" << endl;
  cout << nombresCandidatos[indiceGanador] << " con " << votosGanador <<endl;
}
