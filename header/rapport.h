//
// Created by Arthur Mathis on 25/10/2023.
//

#ifndef TP2_RAPPORT_H
#define TP2_RAPPORT_H

#include <iostream>
#include "employe.h"
#include "employequalifie.h"

/**
 * @brief Class parent des rapport contenant les méthode virtuelle nécessaires au typage dynamique
 */
class rapport {
public:
    virtual ~rapport() = default;

    /**
     * @brief Méthode virtuelle affichant le titre du rapport
     * @param ost Le flux de sortie
     */
    virtual void imprimeTitre(std::ostream &ost) const = 0;
    /**
     * @brief Méthode virtuelle affichant le nom et le salaire d'un employé
     * @param e L'employe
     * @param ost Le flux de sortie
     */
    virtual void imprimeEmploye(const employe &e, std::ostream &ost) const = 0;
};

/**
 * @brief Class enfant de rapport permettant de réaliser un rapport textuel
 */
class rapportTexte : public rapport{
public :
    rapportTexte(const std::string &chaine);

    /**
     * @brief Méthode affichant dans un flux de sortie le titre du rapport
     * @param ost Le flux de sortie
     */
    void imprimeTitre(std::ostream &ost) const override;
    /**
     * @brief Méthode affichant dans un flux de sortie le nom et le salaire de l'employe
     * @param e
     * @param ost
     */
    void imprimeEmploye(const employe &e, std::ostream &ost) const override;

private :
    /**
     * @brief Titre du rapport
     */
    std::string d_titre;
};

#endif //TP2_RAPPORT_H
