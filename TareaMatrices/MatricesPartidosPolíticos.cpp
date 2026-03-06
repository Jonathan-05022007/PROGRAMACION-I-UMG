#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Declaración de Constantes
#define NUMERO_CANDIDATOS 5
#define NUMERO_ZONAS 4
#define MAX_VOTOS 1000
#define MIN_VOTOS 0
#define MAXIMA_LONGITUD_CADENA 100

// Declaración de Prototipos de Función
void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatrizVotos(float matriz[NUMERO_CANDIDATOS][NUMERO_ZONAS + 1]);
void imprimirMatrizLinea();
float imprimirEstadisticas(float matriz[NUMERO_CANDIDATOS][NUMERO_ZONAS + 1], char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA], string nombrePartido);

int main()
{
    srand(getpid());
    llamaCiclo();
    return 0;
}

void llamaCiclo()
{
    // Declaración de matrices por cada Partido Político
    float matriz_partido_1[NUMERO_CANDIDATOS][NUMERO_ZONAS + 1];
    float matriz_partido_2[NUMERO_CANDIDATOS][NUMERO_ZONAS + 1];
    float matriz_partido_3[NUMERO_CANDIDATOS][NUMERO_ZONAS + 1];

    char opcion;
    bool repetir = true;

    // Variables para el cálculo de promedios de votos por partido
    float promedio_votos_p1;
    float promedio_votos_p2;
    float promedio_votos_p3;

    // Nombres de los Candidatos
    char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA] = {"Candidato A","Candidato B","Candidato C","Candidato D","Candidato E"};

    do
    {
        system("cls");
        promedio_votos_p1 = 0;
        promedio_votos_p2 = 0;
        promedio_votos_p3 = 0;

        cout << "* COMPARATIVO DE RENDIMIENTO DE PARTIDOS POLITICOS *" << endl << endl;

        llenarMatrizVotos(matriz_partido_1);
        promedio_votos_p1 = imprimirEstadisticas(matriz_partido_1, candidatos, "PARTIDO LIBERACION");

        llenarMatrizVotos(matriz_partido_2);
        promedio_votos_p2 = imprimirEstadisticas(matriz_partido_2, candidatos, "PARTIDO UNIDAD");

        llenarMatrizVotos(matriz_partido_3);
        promedio_votos_p3 = imprimirEstadisticas(matriz_partido_3, candidatos, "PARTIDO PROGRESO");

        // Cálculo del partido con mejor promedio de votos
        if (promedio_votos_p1 > promedio_votos_p2 && promedio_votos_p1 > promedio_votos_p3)
        {
            cout << " El partido con mejor promedio de votos es: " << "PARTIDO LIBERACION" << " con: " << promedio_votos_p1 << endl;
        } else
        if (promedio_votos_p2 > promedio_votos_p1 && promedio_votos_p2 > promedio_votos_p3)
        {
            cout << " El partido con mejor promedio de votos es: " << "PARTIDO UNIDAD" << " con: " << promedio_votos_p2 << endl;
        } else
        if (promedio_votos_p3 > promedio_votos_p2 && promedio_votos_p3 > promedio_votos_p1)
        {
            cout << " El partido con mejor promedio de votos es: " << "PARTIDO PROGRESO" << " con: " << promedio_votos_p3 << endl;
        } else
        {
            cout << " Hay un empate técnico entre los promedios de los partidos " << endl << endl;
        }

        cout << "\n¿Desea realizar otro simulacro de conteo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir = false;
        }
    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatrizVotos(float matriz[NUMERO_CANDIDATOS][NUMERO_ZONAS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_CANDIDATOS; y++)
    {
        float sumaVotosCandidato = 0;
        for (x = 0; x < NUMERO_ZONAS; x++)
        {
            // Simulamos votos por zona (Zona Norte, Sur, Este, Oeste) con diferentes rangos
            int votos = busquedaAleatorios(100, 500);
            sumaVotosCandidato += (float)votos;
            matriz[y][x] = votos;
        }
        // El total de votos del candidato se guarda en la última columna
        matriz[y][NUMERO_ZONAS] = sumaVotosCandidato;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "+------------";
    for (x = 0; x < NUMERO_ZONAS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

float imprimirEstadisticas(float matriz[NUMERO_CANDIDATOS][NUMERO_ZONAS + 1], char candidatos[NUMERO_CANDIDATOS][MAXIMA_LONGITUD_CADENA], string nombrePartido)
{
    int y, x;
    float votosMayor = matriz[0][NUMERO_ZONAS];
    float votosMenor = matriz[0][NUMERO_ZONAS];
    float totalVotosPartido = 0;
    float promedioVotosPartido = 0;

    char candidatoMasVotado[MAXIMA_LONGITUD_CADENA];
    char candidatoMenosVotado[MAXIMA_LONGITUD_CADENA];

    memcpy(candidatoMasVotado, candidatos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(candidatoMenosVotado, candidatos[0], MAXIMA_LONGITUD_CADENA);

    cout << "--- " << nombrePartido << " ---" << endl;
    cout << "(Z1)=>Zona Norte  (Z2)=>Zona Sur  (Z3)=>Zona Este  (Z4)=>Zona Oeste" << endl;

    imprimirMatrizLinea();
    cout << "!" << setw(11) << "Candidato" << "!";
    for (x = 0; x < NUMERO_ZONAS; x++)
    {
        cout << setw(7) << "Zona " << x + 1 << "!";
    }
    cout << setw(8) << "TOTAL" << "!" << endl;
    imprimirMatrizLinea();

    for (y = 0; y < NUMERO_CANDIDATOS; y++)
    {
        cout << "!" << setw(11) << candidatos[y] << "!";
        for (x = 0; x < NUMERO_ZONAS; x++)
        {
            cout << setw(9) << (int)matriz[y][x] << "!";
        }

        float totalCandidato = matriz[y][NUMERO_ZONAS];
        totalVotosPartido += totalCandidato;

        if (totalCandidato > votosMayor)
        {
            votosMayor = totalCandidato;
            memcpy(candidatoMasVotado, candidatos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (totalCandidato < votosMenor)
        {
            votosMenor = totalCandidato;
            memcpy(candidatoMenosVotado, candidatos[y], MAXIMA_LONGITUD_CADENA);
        }

        cout << setw(9) << fixed << setprecision(0) << totalCandidato << "!" << endl;
        imprimirMatrizLinea();
    }

    promedioVotosPartido = totalVotosPartido / NUMERO_CANDIDATOS;

    cout << "Candidato más votado:  " << setw(15) << candidatoMasVotado << " Votos: " << votosMayor << endl;
    cout << "Candidato menos votado: " << setw(15) << candidatoMenosVotado << " Votos: " << votosMenor << endl;
    cout << "Promedio votos/partido: " << setw(15) << promedioVotosPartido << endl << endl;

    return promedioVotosPartido;
}
