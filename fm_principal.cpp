#include "fm_principal.h"
#include "ui_fm_principal.h"

fm_principal::fm_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::fm_principal)
{
    ui->setupUi(this);

    inicializa_fm_principal();
}

fm_principal::~fm_principal()
{
    delete ui;
}

/*********************************************
 *
 * MINHAS FUNÇÕES
 *
 ********************************************/

void fm_principal::inicializa_fm_principal()
{
    populaCombo();
}

void fm_principal::populaCombo()
{
    ui->comboBox_conversao->clear();

    int quantidade = 23;

    QPair<int, QString> opcoes[quantidade];

    opcoes[0] = std::make_pair(0, "Selecione...");
    opcoes[1] = std::make_pair(1, "Quilômetros em Milhas");
    opcoes[2] = std::make_pair(2, "Milhas em Quilômetros");
    opcoes[3] = std::make_pair(3, "Celsius em Fahrenheit");
    opcoes[4] = std::make_pair(4, "Fahrenheit em Celsius");
    opcoes[5] = std::make_pair(5, "Celsius em Kelvin");
    opcoes[6] = std::make_pair(6, "Kelvin em Celsius");
    opcoes[7] = std::make_pair(7, "Fahrenheit em Kelvin");
    opcoes[8] = std::make_pair(8, "Kelvin em Fahrenheit");
    opcoes[9] = std::make_pair(9, "Milímetros em Polegadas");
    opcoes[10] = std::make_pair(10, "Polegadas em Milímetros");
    opcoes[11] = std::make_pair(11, "Metros em Pés");
    opcoes[12] = std::make_pair(12, "Pés em Metros");
    opcoes[13] = std::make_pair(13, "Quilogramas em Libras");
    opcoes[14] = std::make_pair(14, "Libras em Quilogramas");
    opcoes[15] = std::make_pair(15, "Centímetros em Polegadas");
    opcoes[16] = std::make_pair(16, "Polegadas em Centímetros");
    opcoes[17] = std::make_pair(17, "Polegadas em Pés");
    opcoes[18] = std::make_pair(18, "Pés em Polegadas");
    opcoes[19] = std::make_pair(19, "Gramas em Onças");
    opcoes[20] = std::make_pair(20, "Onças em Gramas");
    opcoes[21] = std::make_pair(21, "Libras em Onças");
    opcoes[22] = std::make_pair(22, "Onças em Libras");

    for (int i = 0; i < quantidade; i++)
    {
        ui->comboBox_conversao->addItem(opcoes[i].second, opcoes[i].first);
    }
}

double fm_principal::quilometrosEmMilhas(double quilometros)
{
    double milhas;
    milhas = quilometros * 0.62137;
    return milhas;
}

double fm_principal::milhasEmQuilometros(double milhas)
{
    double quilometros;
    quilometros = milhas / 0.62137;
    return quilometros;
}

double fm_principal::celsiusEmFahrenheit(double celsius)
{
    double fahrenheit;
    fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

double fm_principal::fahrenheitEmCelsius(double fahrenheit)
{
    double celsius;
    celsius = (fahrenheit - 32) / 1.79999999;
    return celsius;
}

double fm_principal::celsiusEmKelvin(double celsius)
{
    double kelvin;
    kelvin = celsius + 273.15;
    return kelvin;
}

double fm_principal::kelvinEmCelsius(double kelvin)
{
    double celsius;
    celsius = kelvin - 273.15;
    return celsius;
}

double fm_principal::fahrenheitEmKelvin(double fahrenheit)
{
    double kelvin;
    kelvin = ( fahrenheit - 32 ) * ( 5 / 9) + 273.15;
    return kelvin;
}

double fm_principal::kelvinEmFahrenheit(double kelvin)
{
    double fahrenheit;
    fahrenheit = ( kelvin - 273.15 ) * ( 9 / 5 ) + 32;
    return fahrenheit;
}

double fm_principal::milimetrosEmPolegadas(double milimetros)
{
    double polegadas;
    polegadas = milimetros * 0.0393700787402;
    return polegadas;
}

double fm_principal::polegadasEmMilimetros(double polegadas)
{
    double milimetros;
    milimetros = polegadas / 0.0393700787402;
    return milimetros;
}

double fm_principal::metrosEmPes(double metros)
{
    double pes;
    pes = metros * 3.2808;
    return pes;
}

double fm_principal::pesEmMetros(double pes)
{
    double metros;
    metros = pes / 3.2808;
    return metros;
}

double fm_principal::quilogramasEmLibras(double quilogramas)
{
    double libras;
    libras = quilogramas * 2.2046;
    return libras;
}

double fm_principal::librasEmQuilogramas(double libras)
{
    double quilogramas;
    quilogramas = libras / 2.2046;
    return quilogramas;
}

double fm_principal::centimetrosEmPolegadas(double centimetros)
{
    double polegadas;
    polegadas = centimetros * 0.39370;
    return polegadas;
}

double fm_principal::polegadasEmCentimetros(double polegadas)
{
    double centimetros;
    centimetros = polegadas / 0.39370;
    return centimetros;
}

double fm_principal::polegadasEmPes(double polegadas)
{
    double pes;
    pes = polegadas * 0.083333;
    return pes;
}

double fm_principal::pesEmPolegadas(double pes)
{
    double polegadas;
    polegadas = pes * 12.000;
    return polegadas;
}

double fm_principal::gramasEmOncas(double gramas)
{
    double oncas;
    oncas = gramas * 0.035274;
    return oncas;
}

double fm_principal::oncasEmGramas(double oncas)
{
    double gramas;
    gramas = oncas / 0.035274;
    return gramas;
}

double fm_principal::librasEmOncas(double libras)
{
    double oncas;
    oncas = libras * 16.000;
    return oncas;
}

double fm_principal::oncasEmLibras(double oncas)
{
    double libras;
    libras = oncas * 0.062500;
    return libras;
}

/*********************************************
 *
 * SLOTS
 *
 ********************************************/

void fm_principal::on_actionSair_triggered()
{
    QApplication::quit();
}

void fm_principal::on_actionSobre_triggered()
{
    fm_sobre f_sobre;
    f_sobre.exec();
}

void fm_principal::on_pushButton_fechar_clicked()
{
    QApplication::quit();
}

void fm_principal::on_pushButton_converter_clicked()
{
    int conversao;
    double valor_recebido, valor_convertido;
    QString mensagem;

    conversao = ui->comboBox_conversao->currentIndex();
    valor_recebido = ui->lineEdit_valor->text().trimmed().toDouble();

    if(conversao == 10 || conversao == 16 || conversao == 17){
        QString valor_recebido_em_string, p1, p2, q1, q2;
        QList<QString> quebra_espaco, quebra_barra;

        valor_recebido_em_string = ui->lineEdit_valor->text();
        qDebug() << "valor_recebido_em_string: " << valor_recebido_em_string;
        if (valor_recebido_em_string.contains(" "))
        {
            quebra_espaco = valor_recebido_em_string.split(" ");
            p1 = quebra_espaco[0];
            qDebug() << "p1: "<< p1;
            p2 = quebra_espaco[1];
            qDebug() << "p2: " << p2;
            if (p2.contains("/"))
            {
                quebra_barra = p2.split("/");
                q1 = quebra_barra[0];
                qDebug() << "q1: " << q1;
                q2 = quebra_barra[1];
                qDebug() << "q2: " << q2;
            }
            valor_recebido = p1.toDouble() + (q1.toDouble() / q2.toDouble());

        }
        else if (valor_recebido_em_string.contains("/"))
        {
            quebra_barra = valor_recebido_em_string.split("/");
            q1 = quebra_barra[0];
            qDebug() << "q1: " << q1;
            q2 = quebra_barra[1];
            qDebug() << "q2: " << q2;
            valor_recebido = (q1.toDouble() / q2.toDouble());
        }
    }

    if (conversao == 0)
    {
        QMessageBox::warning(this, "", "Selecione a conversão.");
        return;
    }

    switch (conversao)
    {

    // 1, "Quilômetros em Milhas"
    case 1:
        valor_convertido = quilometrosEmMilhas(valor_recebido);
        mensagem = QString::number(valor_recebido) + " quilometros equivalem a " + QString::number(valor_convertido) + " milhas.";
        break;

    // 2, "Milhas em Quilômetros"
    case 2:
        valor_convertido = milhasEmQuilometros(valor_recebido);
        mensagem = QString::number(valor_recebido) + " milhas equivalem a " + QString::number(valor_convertido) + " quilômetros.";
        break;

    // 3, "Celsius em Fahrenheit"
    case 3:
        valor_convertido = celsiusEmFahrenheit(valor_recebido);
        mensagem = QString::number(valor_recebido) + " ºCelsius equivalem a " + QString::number(valor_convertido) + " ºFahrenheit.";
        break;

    // 4, "Fahrenheit em Celsius"
    case 4:
        valor_convertido = fahrenheitEmCelsius(valor_recebido);
        mensagem = QString::number(valor_recebido) + " ºFahrenheit equivalem a " + QString::number(valor_convertido) + " ºCelsius.";
        break;

    // 5, "Celsius em Kelvin"
    case 5:
        valor_convertido = celsiusEmKelvin(valor_recebido);
        mensagem = QString::number(valor_recebido) + " ºCelsius equivalem a " + QString::number(valor_convertido) + " ºKelvin.";
        break;

    // 6, "Kelvin em Celsius"
    case 6:
        valor_convertido = kelvinEmCelsius(valor_recebido);
        mensagem = QString::number(valor_recebido) + " ºKelvin equivalem a " + QString::number(valor_convertido) + " ºCelsius.";
        break;

    // 7, "Fahrenheit em Kelvin"
    case 7:
        valor_convertido = fahrenheitEmKelvin(valor_recebido);
        mensagem = QString::number(valor_recebido) + " ºFahrenheit equivalem a " + QString::number(valor_convertido) + " ºKelvin.";
        break;

        // 8, "Kelvin em Fahrenheit"
    case 8:
        valor_convertido = kelvinEmFahrenheit(valor_recebido);
        mensagem = QString::number(valor_recebido) + " ºKelvin equivalem a " + QString::number(valor_convertido) + " ºFahrenheit.";
        break;

        // 9, "Milímetros em Polegadas"
    case 9:
        valor_convertido = milimetrosEmPolegadas(valor_recebido);
        mensagem = QString::number(valor_recebido) + " milímetros equivalem a " + QString::number(valor_convertido) + " polegadas.";
        break;

    // 10, "Polegadas em Milímetros"
    case 10:
        valor_convertido = polegadasEmMilimetros(valor_recebido);
        mensagem = QString::number(valor_recebido) + " polegadas equivalem a " + QString::number(valor_convertido) + " milímetros.";
        break;

    // 11, "Metros em Pés"
    case 11:
        valor_convertido = metrosEmPes(valor_recebido);
        mensagem = QString::number(valor_recebido) + " metros equivalem a " + QString::number(valor_convertido) + " pés.";
        break;

    // 12, "Pés em Metros"
    case 12:
        valor_convertido = pesEmMetros(valor_recebido);
        mensagem = QString::number(valor_recebido) + " pés equivalem a " + QString::number(valor_convertido) + " metros.";
        break;

        // 13, "Quilogramas em Libras"
    case 13:
        valor_convertido = quilogramasEmLibras(valor_recebido);
        mensagem = QString::number(valor_recebido) + " quilogramas equivalem a " + QString::number(valor_convertido) + " libras.";
        break;

        // 14, "Libras em Quilogramas"
    case 14:
        valor_convertido = librasEmQuilogramas(valor_recebido);
        mensagem = QString::number(valor_recebido) + " libras equivalem a " + QString::number(valor_convertido) + " quilogramas.";
        break;

        // 15, "Centímetros em Polegadas"
    case 15:
        valor_convertido = centimetrosEmPolegadas(valor_recebido);
        mensagem = QString::number(valor_recebido) + " centimetros equivalem a " + QString::number(valor_convertido) + " polegadas.";
        break;

        // 16, "Polegadas em Centímetros"
    case 16:
        valor_convertido = polegadasEmCentimetros(valor_recebido);
        mensagem = QString::number(valor_recebido) + " polegadas equivalem a " + QString::number(valor_convertido) + " centimetros.";
        break;

        // 17, "Polegadas em Pés"
    case 17:
        valor_convertido = polegadasEmPes(valor_recebido);
        mensagem = QString::number(valor_recebido) + " polegadas equivalem a " + QString::number(valor_convertido) + " pés.";
        break;

        // 18, "Pés em Polegadas"
    case 18:
        valor_convertido = pesEmPolegadas(valor_recebido);
        mensagem = QString::number(valor_recebido) + " pés equivalem a " + QString::number(valor_convertido) + " polegadas.";
        break;

        // 19, "Gramas em Onças"
    case 19:
        valor_convertido = gramasEmOncas(valor_recebido);
        mensagem = QString::number(valor_recebido) + " gramas equivalem a " + QString::number(valor_convertido) + " onças.";
        break;

        // 20, "Onças em Gramas"
    case 20:
        valor_convertido = oncasEmGramas(valor_recebido);
        mensagem = QString::number(valor_recebido) + " onças equivalem a " + QString::number(valor_convertido) + " gramas.";
        break;

        // 21, "Libras em Onças"
    case 21:
        valor_convertido = librasEmOncas(valor_recebido);
        mensagem = QString::number(valor_recebido) + " libras equivalem a " + QString::number(valor_convertido) + " onças.";
        break;

        // 22, "Onças em Libras"
    case 22:
        valor_convertido = oncasEmLibras(valor_recebido);
        mensagem = QString::number(valor_recebido) + " onças equivalem a " + QString::number(valor_convertido) + " libras.";
        break;
    }
    ui->label_resultado->setText(mensagem);
}

void fm_principal::on_pushButton_limpar_clicked()
{
    ui->lineEdit_valor->clear();
    ui->label_resultado->clear();
    ui->lineEdit_valor->setFocus();
}
