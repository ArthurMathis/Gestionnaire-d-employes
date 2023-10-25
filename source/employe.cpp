#include "../header/employe.h"

employe::employe(const std::string& nom, int indice):
                d_nom{nom}, d_indice{indice}
{}

std::string employe::nom() const
{
  return d_nom;
}

int employe::indice() const
{
  return d_indice;
}

double employe::salaireMensuel() const
{
  return d_indice*40;
}

void employe::affiche(std::ostream& ost) const
{
  ost<<"employe "<<d_nom<<" indice "<<d_indice<<" salaire "<<salaireMensuel();
}

