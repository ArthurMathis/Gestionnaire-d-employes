#ifndef GESTIONNAIREEMPLOYES_H
#define GESTIONNAIREEMPLOYES_H

#include <vector>
#include "employe.h"
#include "employequalifie.h"
#include "rapport.h"

class gestionnaireEmployes {
public:
    /**
     * @brief Méthode lançant le gestionnaire
     */
    void execute();

private:
    /**
     * @brief Méthode permettant à l'utilisateur de naviguer entre les différents menus du gestionnaire
     */
    int choixMenu();

    /**
     * @brief Méthode ajoutant un employé au gestionnaire
     * @param e
     */
    void ajouteEmploye();
    /**
     * @brief Méthode affichat tous les employés du gestionnaire
     */
    void afficheEmployes() const;

    /**
     * @brief Méthode affichant le total des salaires des employés
     */
    void afficheChargeMensuelleEmployes() const;
    /**
     * @brief Méthode calculant le total des salaires des employé
     * @return
     */
    double chargeMensuelleEmployes() const;

    void afficheRapportEmploye(const rapport &r, std::ostream &ost) const;
    void afficheRapport() const;

    /**
     * @brief Tableau dynamique contenant les employés du gestionnaire
     */
    std::vector<std::unique_ptr<employe>> d_employe;
};


#endif // GESTIONNAIREEMPLOYES_H
