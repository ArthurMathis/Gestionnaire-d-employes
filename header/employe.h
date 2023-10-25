#ifndef EMPLOYE_H
#define EMPLOYE_H

#include<string>
#include<iostream>

class employe {
public:
  employe(const std::string& nom, int indice);
  virtual ~employe() = default;

  /**
   * @brief Méthode retournant le nom de l'employer
   * @return
   */
  std::string nom() const;
  /**
   * @brief Méthode reoturnant l'indice de l'employer
   * @return
   */
  int indice() const;
  /**
   * @brief Méthode retournant le salaire de l'employer
   * @return
   */
  virtual double salaireMensuel() const;
  /**
   * @brief Méthode écrivant dans un flux de sortie les données de l'employer
   * @param ost
   */
  virtual void affiche(std::ostream& ost) const;

private:
  std::string d_nom;
  int d_indice;
};

#endif // EMPLOYE_H
