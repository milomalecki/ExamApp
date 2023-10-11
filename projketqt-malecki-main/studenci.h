#ifndef STUDENCI_H
#define STUDENCI_H
#include <QMainWindow>

class Studenci
{
private:
    QString m_imie;
    QString m_nazwisko;
    //double m_sredniaOcen=0;
    //double m_ocenaKoncowa=0;
    //int m_dodatkowePytania=0;
public:
    Studenci();

    void setImie(QString imie);
    void setNazwisko(QString nazwisko);
    //void setSrednia(double srednia);
    //void setOcenaKoncowa(double ocena);
    //double getOcenaKoncowa(){return m_ocenaKoncowa;}
    //int getDodatkowePytania(){return m_dodatkowePytania;}

};

#endif // STUDENCI_H
