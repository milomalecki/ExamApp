#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGlobal>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->radioButton_p1D_BAD->setDisabled(true);
    ui->radioButton_p2D_BAD->setDisabled(true);
    ui->radioButton_p1D_OK->setDisabled(true);
    ui->radioButton_p2D_OK->setDisabled(true);
    ui->radioButton_p1D_PARTIAL->setDisabled(true);
    ui->radioButton_p2D_PARTIAL->setDisabled(true);
    ui->checkBox_zaawansowany->setDisabled(true);
    czyMoznaDodatkowe();
    srand(time(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_losujPyt_clicked()
{
    wyswietlPytania();
    ui->pushButton_losujPyt->setDisabled(true);
}

void MainWindow::on_radioButton_p1_OK_clicked()
{
    setOcenaKoncowa(getOcenaKoncowa()+1);

}

void MainWindow::on_radioButton_p2_OK_clicked()
{
    setOcenaKoncowa(getOcenaKoncowa()+1);
}

void MainWindow::on_radioButton_p3_OK_clicked()
{
    setOcenaKoncowa(getOcenaKoncowa()+1);
}

void MainWindow::on_radioButton_p1D_OK_clicked()
{
    setOcenaKoncowa(getOcenaKoncowa()+1);
}


void MainWindow::on_radioButton_p1D_PARTIAL_clicked()
{
    setOcenaKoncowa(getOcenaKoncowa()+0.5);

}

void MainWindow::on_radioButton_p2D_OK_clicked()
{
    setOcenaKoncowa(getOcenaKoncowa()+1);
}


void MainWindow::on_radioButton_p2D_PARTIAL_clicked()
{
    setOcenaKoncowa(getOcenaKoncowa()+0.5);
}

void MainWindow::on_checkBox_zaawansowany_clicked(bool checked)
{
    if(checked==true){
        ui->radioButton_p1D_BAD->setEnabled(true);
        ui->radioButton_p2D_BAD->setEnabled(true);
        ui->radioButton_p1D_OK->setEnabled(true);
        ui->radioButton_p2D_OK->setEnabled(true);
        ui->radioButton_p1D_PARTIAL->setEnabled(true);
        ui->radioButton_p2D_PARTIAL->setEnabled(true);
    }
    else{
        ui->radioButton_p1D_BAD->setDisabled(true);
        ui->radioButton_p2D_BAD->setDisabled(true);
        ui->radioButton_p1D_OK->setDisabled(true);
        ui->radioButton_p2D_OK->setDisabled(true);
        ui->radioButton_p1D_PARTIAL->setDisabled(true);
        ui->radioButton_p2D_PARTIAL->setDisabled(true);
    }
}

void MainWindow::on_pushButton_zakoncz_clicked()
{
    this->close();
}

void MainWindow::on_spinBox_srednia_valueChanged(double arg1)
{
    setSrednia(arg1);
    ui->label_ileDodPytan->setText(QString::number(getDodatkowePytania()));
    czyMoznaDodatkowe();
}

void MainWindow::on_spinBox_srednia_editingFinished()
{
    setSrednia(ui->spinBox_srednia->value());
    ui->label_ileDodPytan->setText(QString::number(getDodatkowePytania()));
    czyMoznaDodatkowe();
}

void MainWindow::setSrednia(double srednia){
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
        m_dodatkowePytania=(m_sredniaOcen-3.0)*2;
    }
    ileDodZostalo=m_dodatkowePytania;

}

void MainWindow::setOcenaKoncowa(double ocena){

    if(ocena>=3) {
        if(ocena>=6)
            m_ocenaKoncowa=6;
        else
            m_ocenaKoncowa=ocena;
        ui->label_jakaOcena->setText(QString::number(getOcenaKoncowa()));
        ui->checkBox_zaawansowany->setEnabled(true);
    }
    else {
        if(ocena<=0)
            m_ocenaKoncowa=0;
        else
            m_ocenaKoncowa=ocena;
        ui->label_jakaOcena->setText("2");
    }
}

void MainWindow::on_spinBox_ilePyt1_valueChanged(int arg1)
{
    ilePyt[0]=zmianaDodPytan(ilePyt[0],arg1);
    czyMoznaDodatkowe();
}

void MainWindow::on_spinBox_ilePyt2_valueChanged(int arg1)
{
    ilePyt[1]=zmianaDodPytan(ilePyt[1],arg1);
    czyMoznaDodatkowe();
}

void MainWindow::on_spinBox_ilePyt3_valueChanged(int arg1)
{
    ilePyt[2]=zmianaDodPytan(ilePyt[2],arg1);
    czyMoznaDodatkowe();
}

void MainWindow::on_spinBox_ilePytZ_valueChanged(int arg1)
{
    ilePyt[3]=zmianaDodPytan(ilePyt[3],arg1);
    czyMoznaDodatkowe();
}

void MainWindow::on_pushButton_resetuj_clicked()
{
    resetAll();
}

int MainWindow::ilePyt[]={1,1,1,2};

int MainWindow::losujPytanie(QVector<QString>*zest,int*wylosowane){
    bool brakPowtorzenia;
    int iloscPytan=zest->size()-1;
    int numer=0;
    do {
        numer=rand()%iloscPytan;
        brakPowtorzenia=true;

        for(int i=0;i<m_ileWylos;i++){
            if(numer==wylosowane[i])
                brakPowtorzenia=false;
        }
        if (brakPowtorzenia==true){
            wylosowane[m_ileWylos]=numer;
        }
    } while(!brakPowtorzenia);
    m_ileWylos++;
    return numer;
}

void MainWindow::zwolnijWylosowane(){
    delete[] m_wylosowane1;
    m_wylosowane1=nullptr;
    delete[] m_wylosowane2;
    m_wylosowane2=nullptr;
    delete[] m_wylosowane3;
    m_wylosowane3=nullptr;
    delete[] m_wylosowaneZ;
    m_wylosowaneZ=nullptr;
}

void MainWindow::wyswietlPytania(){
    ui->textEditPytaniaP->append("\t\tPOZIOM PODSTAWOWY:\n");
    ui->textEditPytaniaP->append("1) Programowanie proceduralne, obsługa pamięci dynamicznej i złożone typy danych:");
    do {
        ui->textEditPytaniaP->append(m_pytaniaDzial_1[losujPytanie(&m_pytaniaDzial_1,m_wylosowane1)]);
        ilePyt[0]--;
    }while(ilePyt[0]>=1);

    ui->textEditPytaniaP->append("\n2) Podstawy programowania obiektowego:");
    do {
        ui->textEditPytaniaP->append(m_pytaniaDzial_2[losujPytanie(&m_pytaniaDzial_2,m_wylosowane2)]);
        ilePyt[1]--;
    }while(ilePyt[1]>=1);

    ui->textEditPytaniaP->append("\n3) Zarządzanie pamięcią w klasach, programowanie generyczne:");
    do {
        ui->textEditPytaniaP->append(m_pytaniaDzial_3[losujPytanie(&m_pytaniaDzial_3,m_wylosowane3)]);
        ilePyt[2]--;
    }while(ilePyt[2]>=1);

    ui->textEditPytaniaZ->append("\tPOZIOM ZAAWANSOWANY:");
    do {
        ui->textEditPytaniaZ->append(m_pytaniaZaawansowane[losujPytanie(&m_pytaniaZaawansowane,m_wylosowaneZ)]);
        ilePyt[3]--;
    }while(ilePyt[3]>=1);
};

void MainWindow::czyMoznaDodatkowe(){

    if(ileDodZostalo==0){
        ui->spinBox_ilePyt1->setDisabled(true);
        ui->spinBox_ilePyt2->setDisabled(true);
        ui->spinBox_ilePyt3->setDisabled(true);
        ui->spinBox_ilePytZ->setDisabled(true);
    }
    else{
        ui->spinBox_ilePyt1->setEnabled(true);
        ui->spinBox_ilePyt2->setEnabled(true);
        ui->spinBox_ilePyt3->setEnabled(true);
        ui->spinBox_ilePytZ->setEnabled(true);
    }
}

int MainWindow::zmianaDodPytan(int tempV,int arg){
    if(tempV<arg){
        ileDodZostalo--;
        ui->label_ileDodPytan->setText(QString::number(ileDodZostalo));
        return ++tempV;
    }
    else{
        ileDodZostalo++;
        ui->label_ileDodPytan->setText(QString::number(ileDodZostalo));
        return --tempV;
    }
}

void MainWindow::resetLiczbaPyt(){
    MainWindow::ilePyt[0]=1;
    MainWindow::ilePyt[1]=1;
    MainWindow::ilePyt[2]=1;
    MainWindow::ilePyt[3]=2;
}

void MainWindow::resetRadio(QButtonGroup*groupa){
    QAbstractButton*checked = groupa->checkedButton();
    if(checked){
        groupa->setExclusive(false);
        checked->setChecked(false);
        groupa->setExclusive(true);
    }
}

void MainWindow::resetAll(){
    ui->spinBox_srednia->setValue(3.00);
    ui->spinBox_ilePyt1->setValue(1);
    ui->spinBox_ilePyt2->setValue(1);
    ui->spinBox_ilePyt3->setValue(1);
    ui->spinBox_ilePytZ->setValue(2);
    ui->textEditPytaniaP->clear();
    ui->textEditPytaniaZ->clear();
    on_checkBox_zaawansowany_clicked(false);
    ui->checkBox_zaawansowany->setCheckState(Qt::CheckState::Unchecked);
    ui->checkBox_zaawansowany->setDisabled(true);
    setOcenaKoncowa(0.0);
    ui->pushButton_losujPyt->setEnabled(true);
    ileDodZostalo=0;
    ui->label_ileDodPytan->setText("0");
    czyMoznaDodatkowe();

    resetLiczbaPyt();
    resetRadio(ui->buttonGroup_4);
    resetRadio(ui->buttonGroup_5);
    resetRadio(ui->buttonGroup);
    resetRadio(ui->buttonGroup_2);
    resetRadio(ui->buttonGroup_3);

    m_ileWylos=0;
}












