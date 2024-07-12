#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int tableau[10];
    int somme(0);
    float moyenne;
    int plusGrand(0);
    int nPaire(0);

    cout << "Le tableau est : " << endl;

    for (int i(0);i < 10 ;i++) {
        tableau[i] = rand() % (200 - 100 + 1) + 100;
        cout << tableau[i] << " " ;
    }

    cout << endl;

    for (int i(0);i < 10;i++) {
        somme += tableau[i];
    };

    cout << "La somme des elements est : " << somme << endl;

    moyenne = somme / 10;

    cout << "La moyenne des elements est : " << moyenne << endl;

    for (int i(0);i < 10;i++) {
        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        };
    };

    cout << "Le plus grand des elements est : " << plusGrand << endl;


    for (int i(0);i < 10;i++) {
        if (tableau[i]%2 == 0) {
            cout << tableau[i] << " est pair" << endl;
            nPaire ++;
        };
    };

    cout << "Il y a " << nPaire << " nombres paires !" << endl;

    return 0;
}
