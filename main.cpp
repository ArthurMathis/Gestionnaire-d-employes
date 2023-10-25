#include <iostream>
#include "header/employe.h"
#include "header/employequalifie.h"
#include "header/gestionnaireemployes.h"

using std::cout, std::endl;

void testEmploye(){
    employe e{"michel", 1677};
    e.affiche(cout);
}

void testEmployeQualifie(){
    employequalifie e{"Jean-Josué", 260, 55};
    e.affiche(cout);
}

void testGestionnaire(){
    gestionnaireEmployes ges;
    ges.execute();
}

int main() {
    testGestionnaire();
    return 0;
}
