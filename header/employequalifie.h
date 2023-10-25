//
// Created by Arthur Mathis on 21/10/2023.
//

#ifndef TP2_EMPLOYEQUALIFIE_H
#define TP2_EMPLOYEQUALIFIE_H

#include "employe.h"

class employequalifie : public employe{
public :
    employequalifie(const std::string &nom, int indice, int qualification);

    /**
     * @brief Méthode retournant la qualification de l'employe
     * @return
     */
    int qualification() const;
    /**
     * @brief Méthode retournant le salaire de l'employer
     * @return
    */
    double salaireMensuel() const override;
    /**
   * @brief Méthode écrivant dans un flux de sortie les données de l'employer
   * @param ost
   */
    void affiche(std::ostream& ost) const override;

private :
    int d_qualification;
};


#endif //TP2_EMPLOYEQUALIFIE_H
