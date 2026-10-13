#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    // Caso 1: edad de un estudiante -> tipo de dato simple (int)
    int edad = 20;
    cout << "=== Caso 1: edad de un estudiante (int) ===" << endl;
    cout << "Edad: " << edad << endl
         << endl;

    // Caso 2: notas de 30 estudiantes -> arreglo de tamano fijo (double[30])
    const int N = 30;
    double notas[N];
    double suma = 0;
    for (int i = 0; i < N; i++)
    {
        notas[i] = 5.0 + (i % 11) * 0.5;
        suma += notas[i];
    }
    cout << "=== Caso 2: notas de 30 estudiantes (arreglo) ===" << endl;
    cout << "Nota del estudiante 1: " << notas[0] << endl;
    cout << "Nota del estudiante 30: " << notas[N - 1] << endl;
    cout << "Promedio del curso: " << suma / N << endl
         << endl;

    // Caso 3: lista de nombres -> arreglo dinamico (vector<string>)
    vector<string> nombres = {"Ana", "Luis", "Maria", "Carlos"};
    nombres.push_back("Bayron"); 
    cout << "=== Caso 3: lista de nombres (vector) ===" << endl;
    for (int i = 0; i < (int)nombres.size(); i++)
    {
        cout << i + 1 << ". " << nombres[i] << endl;
    }
    cout << endl;

    // Caso 4: fila de atencion en un banco -> cola (FIFO)
    queue<string> fila;
    fila.push("Cliente 1");
    fila.push("Cliente 2");
    fila.push("Cliente 3");
    cout << "=== Caso 4: fila de un banco (cola, FIFO) ===" << endl;
    while (!fila.empty())
    {
        cout << "Atendiendo a: " << fila.front() << endl;
        fila.pop(); // sale el primero que llego
    }
    cout << endl;

    // Caso 5: historial del navegador -> pila (LIFO)
    stack<string> historial;
    historial.push("www.google.com");
    historial.push("www.youtube.com");
    historial.push("www.wikipedia.org");
    cout << "=== Caso 5: historial de paginas (pila, LIFO) ===" << endl;
    cout << "Pagina actual: " << historial.top() << endl;
    historial.pop();
    cout << "Despues de volver atras: " << historial.top() << endl;

    return 0;
}