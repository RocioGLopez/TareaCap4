#include <iostream>
using namespace std;

int main() {
    //declaracion de variables e inicializacion
    int x = 5;
    int y = 8;

    // Caso a)
    if (y == 8) {
        if (x == 5) {
            cout << "@@@@@" << endl;
        } else {
            cout << "#####" << endl;
        }
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }

    // Caso b)
    if (y == 8) {
        if (x == 5) {
            cout << "@@@@@" << endl;
        }
    }

    // Caso c)
    if (y == 8) {
        if (x == 5) {
            cout << "@@@@@" << endl;
        }
        cout << "&&&&&" << endl;
    }

    // Caso d)
    if (y == 7) {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }

    return 0;
}
