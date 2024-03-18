#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H

#include <QMainWindow>
#include "fm_sobre.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class fm_principal;
}
QT_END_NAMESPACE

class fm_principal : public QMainWindow
{
    Q_OBJECT

public:
    fm_principal(QWidget *parent = nullptr);
    ~fm_principal();

    // MINHAS FUNÇÕES
    void inicializa_fm_principal();
    void populaCombo();
    double quilometrosEmMilhas(double quilometros);
    double milhasEmQuilometros(double milhas);
    double celsiusEmFahrenheit(double celsius);
    double fahrenheitEmCelsius(double fahrenheit);
    double celsiusEmKelvin(double celsius);
    double kelvinEmCelsius(double kelvin);
    double fahrenheitEmKelvin(double fahrenheit);
    double kelvinEmFahrenheit(double kelvin);
    double milimetrosEmPolegadas(double milimetros);
    double polegadasEmMilimetros(double polegadas);
    double metrosEmPes(double metros);
    double pesEmMetros(double pes);
    double quilogramasEmLibras(double quilogramas);
    double librasEmQuilogramas(double libras);
    double centimetrosEmPolegadas(double centimetros);
    double polegadasEmCentimetros(double polegadas);
    double polegadasEmPes(double polegadas);
    double pesEmPolegadas(double pes);
    double gramasEmOncas(double gramas);
    double oncasEmGramas(double oncas);
    double librasEmOncas(double libras);
    double oncasEmLibras(double oncas);



private slots:
    void on_actionSair_triggered();

    void on_actionSobre_triggered();

    void on_pushButton_fechar_clicked();

    void on_pushButton_converter_clicked();

    void on_pushButton_limpar_clicked();

private:
    Ui::fm_principal *ui;
};
#endif // FM_PRINCIPAL_H
