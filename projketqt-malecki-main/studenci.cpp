#include "studenci.h"

Studenci::Studenci()
{

}

void Studenci::setImie(QString imie){
    m_imie=imie;
}
void Studenci::setNazwisko(QString nazwisko){
    m_nazwisko=nazwisko;
}
/*void Studenci::setSrednia(double srednia){
    if(srednia <=3.0){
        m_sredniaOcen=3.0;
        m_dodatkowePytania=0;
    }
    else if(srednia>=6.0) {
        m_sredniaOcen=6.0;
        m_dodatkowePytania=6;
    }
    else {
        m_sredniaOcen=srednia;
        m_dodatkowePytania=srednia*0.5;
    }
}*/
/*void Studenci::setOcenaKoncowa(double ocena){
    if(ocena<=0)
        m_ocenaKoncowa=0;
    else if (ocena>=6)
        m_ocenaKoncowa=6;
    else
        m_ocenaKoncowa=ocena;
}*/
