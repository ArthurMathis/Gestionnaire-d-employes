//
// Created by Arthur Mathis on 21/10/2023.
//

#include "../header/employequalifie.h"

employequalifie::employequalifie(const std::string &nom, int indice, int qualification):
    employe{nom, indice}, d_qualification{qualification}{
}

int employequalifie::qualification() const{
    return d_qualification;
}

double employequalifie::salaireMensuel() const{
    return 50 * indice() + 10 * qualification();
}

void employequalifie::affiche(std::ostream& ost) const{
    ost<<"employe "<<nom()<<" indice "<<indice()<<" salaire "
    <<salaireMensuel()<<" qualification "<<qualification();
}