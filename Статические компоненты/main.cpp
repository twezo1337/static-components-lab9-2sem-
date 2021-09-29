#include <iostream>
using namespace std;
#include "roundCone.h"

int roundCone::howMany = 0;
int main(void) {

    const int Max = 5;
    roundCone* A[Max];
    roundCone* B[Max];
    int i;
  
    cout << "How many objects? " << roundCone::getHowMany() << endl;

    for (i = 0; i < Max; i++)  {

        A[i] = new roundCone();
        cout << "How many objects? " << roundCone::getHowMany() << endl;
    }

    for (i = 0; i < Max; i++) {

        delete(A[i]);
        cout << "How many objects? " << roundCone::getHowMany() << endl;
    }


    cout << "How many objects? " << roundCone::getHowMany() << endl;

    for (i = 0; i < Max; i++) {

        B[i] = new roundCone(2, 2, 2, 2, 2);
        cout << "How many objects? " << roundCone::getHowMany() << endl;
    }

    for (i = 0; i < Max; i++) {

        delete(B[i]);
        cout << "How many objects? " << roundCone::getHowMany() << endl;
    }

    return 0;
}