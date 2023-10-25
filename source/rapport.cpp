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

rapportHTML::rapportHTML(const std::string &chaine):d_titre{chaine}{
}

void rapportHTML::imprimeTitre(std::ostream &ost) const{
    ost<<"<h1>"<<d_titre<<"</h1";
}

void rapportHTML::imprimeEmploye(const employe &e, std::ostream &ost) const{
    ost<<"<p>Employé : nom "<<e.nom()<<" salaire mensuel "<<e.salaireMensuel()<<"/<p>";
}