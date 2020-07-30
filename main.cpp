#include <iostream>

using namespace std;

int main()
{
    // declaramos las variables suma, total y dato
    // con tipo de datos double
    double suma = 1;
    double total;
    double dato = 0.00001;

    // creamos un bucle que se ejecutara 100 veces
    for (int i = 0; i < 100; i++)
    {
        // inicializamos el valor de total en 0
        total = 0;

        // creamos un bucle que se repetira 100 veces
        for (int j = 0; j < 100; j++)
        {
            // asignamos el valor de la suma de total + dato a la variable dato
            total += dato;
        }

        // asignamos el valor de la suma + total a la variable suma
        suma += total;
    }

    // imprimimos en consola la suma total obtenida
    cout << "Suma total: " << suma << endl;

    return 0;
}
