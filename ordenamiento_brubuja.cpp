#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main() {

    int swich = 1;
    int larguito;

    srand(time(0));

    cout << "Ingrese el largo del array: ";
    cin >> larguito;

    int arrai[larguito];

    for (int i = 0; i < larguito; i++) {

        arrai[i] = rand() % 100;

/*
        int numeroTemp;
        cout << "Ingrese el " << i <<"esimo numero del array: ";
        cin >> numeroTemp;

        arrai[i] = numeroTemp;
*/
    }

    cout << "Asi se ve el array ahora: " << endl;

    for (int value : arrai) cout << value << " ";

    do {

        swich = 0;

        for (int i = 0; i < larguito - 1; i++) {

            if (arrai[i] > arrai[i+1]) {

                int temp = arrai[i];
                arrai[i] = arrai[i+1];
                arrai[i+1] = temp;
                swich = 1;

            }

        }
    } while (swich);

    cout << endl << endl << "El array ordenado de menor a mayor queda asi:" << endl;

    for (int i = 0; i < larguito; i++) cout << arrai[i] << " ";

    getch();



    return 0;
}
