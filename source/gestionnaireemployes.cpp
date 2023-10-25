#include<iostream>
#include <fstream>
#include<string>
#include"../header/gestionnaireemployes.h"

using std::cout, std::endl;
using std::cin;

void gestionnaireEmployes::execute()
{
  auto choix = choixMenu();
  while (choix != 5)
  {
    switch (choix)
    {
      case 1 : ajouteEmploye(); break;
      case 2 : afficheEmployes(); break;
      case 3 : afficheChargeMensuelleEmployes(); break;
      case 4 : afficheRapport(); break;
    }
    choix = choixMenu();
  }
}

int gestionnaireEmployes::choixMenu()
{
    int choix {-1};
    do
    {
        cout<<"Voulez-vous :\n";
        cout<<"(1) Ajouter un employe\n";
        cout<<"(2) Afficher les employes\n";
        cout<<"(3) Afficher la charge mensuelle des employes\n";
        cout<<"(4) Générer un rapport\n";
        cout<<"(5) Quitter le programme\n";
        cout<<"Votre choix : ";
        cin>>choix;
    }
    while (choix < 0 || choix > 5);
    return choix;
}

void gestionnaireEmployes::ajouteEmploye()
{
    std::string c;
    int i, q;
    cout<<"Saisir le nom : ";
    cin>>c;
    cout<<"Saisir l'indice : ";
    cin>>i;

    do{
        cout<<"Est-il qualifié ? "<<endl<<"(1) oui ; (2) non"<<endl;
        cin>>q;
    } while(q != 1 && q != 2);
    if(q == 1 ){
        cout<<"Saisir la qualification : ";
        cin>>q;
        employequalifie e{c,i,q};
        d_employe.push_back(std::make_unique<employequalifie>(e));
    } else {
        employe e{c,i};
        d_employe.push_back(std::make_unique<employe>(e));
    }
}

void gestionnaireEmployes::afficheEmployes() const
{
    if(d_employe.size() == 0){
        cout<<"Pas d'employés"<<endl;
    } else {
        for(const auto &object : d_employe){
            object->affiche(cout);
            cout<<endl;
        }
    }
}

void gestionnaireEmployes::afficheChargeMensuelleEmployes() const
{
    cout<<"charge mensuelle des employes : "<<chargeMensuelleEmployes()<<'\n';
}

double gestionnaireEmployes::chargeMensuelleEmployes() const
{
    double res{0};
    for(const auto &c : d_employe){
         res += c->salaireMensuel();
    }
    return res;
}

void gestionnaireEmployes::afficheRapportEmploye(const rapport &r, std::ostream &ost) const {
    r.imprimeTitre(ost);
    ost<<endl;
    for(const auto &c : d_employe){
        r.imprimeEmploye(*c, ost);
        ost<<endl;
    }
}
void gestionnaireEmployes::afficheRapport() const{
    int choix;
    do{
        cout<<"Voulez-vous :\n";
        cout<<"(1) Créer un rapport\n";
        cout<<"(2) Créer un rapport texte\n";
        cout<<"(3) Créer un rapport HTML\n";
        cout<<"Votre choix : ";
        cin>>choix;
    } while(choix <= 0 || choix > 3);

    if(choix == 1){
        rapportTexte r{"Rapport employés"};
        afficheRapportEmploye(r, cout);
    } else if(choix == 2){
        std::string c;
        cout<<"Saisir le nom du rapport : ";
        cin>>c;

        rapportTexte r{c};
        std::ofstream of{"../" + c + ".txt"};
        if(!of) return;

        afficheRapportEmploye(r, of);
        cout<<"Rapport généré ! "<<endl;
    } else{
        std::string c;
        cout<<"Saisir le nom du rapport : ";
        cin>>c;

        rapportHTML r{c};
        std::ofstream of{"../" + c + ".html"};
        if(!of) return;

        afficheRapportEmploye(r, of);
        cout<<"Rapport généré ! "<<endl;
    }

}