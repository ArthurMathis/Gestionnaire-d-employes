//
// Created by Arthur Mathis on 25/10/2023.
//

#include "../header/rapport.h"

rapportTexte::rapportTexte(const std::string &chaine):d_titre{chaine}{
}

void rapportTexte::imprimeTitre(std::ostream &ost) const{
    ost<<d_titre;
}

void rapportTexte::imprimeEmploye(const employe &e, std::ostream &ost) const{
    ost<<"Employé : nom "<<e.nom()<<" salaire mensuel "<<e.salaireMensuel();
}