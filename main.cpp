#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int entier;

    cout << "Entrez un entier" << endl;
    cin >> entier;

    float racine = sqrt(entier);

    cout << "La racine de " << entier << " est : " << racine << endl;

    return 0;
}
