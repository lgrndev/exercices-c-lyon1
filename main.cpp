#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Entrez le premier nombre" << endl;
    cin >> a;

    cout << "Entrez le deuxieme nombre" << endl;
    cin >> b;

    cout << "Entrez le troisieme nombre" << endl;
    cin >> c;

    if (a > b  && a > c) {
        cout << "C'est le premier nombre qui est le plus grand" << endl;
    }
    else if (b > a  && b > c) {
        cout << "C'est le deuxieme nombre qui est le plus grand" << endl;
    }
    else {
        cout << "C'est le troisieme nombre qui est le plus grand" << endl;
    };

    return 0;
}
