
// Calculadora01 com array de ponteiros para funções

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void adicao( int );
void subtracao( int );
void multiplicacao( int );
void divisao( int );
void temp( int );
void bhaskara( int );
void circulo( int );
void perimetro( int );
void diametro( int );



int main(int argc, char const *argv[])
{
    void (*menu[ 9 ])( int ) = { adicao, subtracao, multiplicacao, divisao, temp,
                                 bhaskara, circulo, perimetro, diametro };
    int escolha;

    cout << "   CALCULADORA\n" << endl;
    cout << "0  ADIÇÃO" << endl;
    cout << "1  SUBTRAÇÃO" << endl;
    cout << "2  MULTIPLICAÇÃO" << endl;
    cout << "3  DIVISÃO" << endl;
    cout << "4  ºC = ºF" << endl;
    cout << "5  BHASKARA" << endl;
    cout << "6  ÁREA A=π·r2" << endl;
    cout << "7  PERÍMETRO  U=2·π·r" << endl;
    cout << "8  DIAMETRO d=2·r" << endl;
    cout << "9  SAIR" << endl;
    cout << "\n  QUAL A OPÇÃO: ";
    cin >> escolha;

    while ( escolha >= 0 && escolha < 9 ) {
        (*menu[ escolha ])( escolha );
        cout << "   CALCULADORA\n" << endl;
        cout << "0  ADIÇÃO" << endl;
        cout << "1  SUBTRAÇÃO" << endl;
        cout << "2  MULTIPLICAÇÃO" << endl;
        cout << "3  DIVISÃO" << endl;
        cout << "4  ºC = ºF" << endl;
        cout << "5  BHASKARA" << endl;
        cout << "6  ÁREA A=π·r2" << endl;
        cout << "7  PERÍMETRO  U=2·π·r" << endl;
        cout << "8  DIAMETRO d=2·r" << endl;
        cout << "9  SAIR" << endl;
        cout << "\n  QUAL A OPÇÃO: ";
        cout << endl;
        cin >> escolha;
        
    }

    cout << "Fim! PROGRAMADOR carlosmargraf@gmail.com" << endl;
    cout << endl;

    return 0;
}

void adicao( int a )
{
    int valor1, valor2, soma;
    cout << "\nADIÇÃO" << endl;
    cout << "Valor: "; 
    cin >> valor1;
    cout << "  + \n";
    cout << "Valor: ";
    cin >> valor2;
    soma = valor1 += valor2;
    cout << "Resultado = " << soma << endl;
    cout << endl;
}

void subtracao( int s )
{
    int valor1, valor2, sub;
    cout << "\nSUBTRAÇÃO" << endl;
    cout << "Valor: ";
    cin >> valor1;
    cout << "  - \n";
    cout << "Valor: ";
    cin >> valor2;
    sub = valor1 -= valor2;
    cout << "Resultado = " << sub << endl;
    cout << endl;
}

void multiplicacao( int m )
{
    int valor1, valor2, mult;
    cout << "\nMULTIPLICAÇÃO" << endl;
    cout << "Valor: ";
    cin >> valor1;
    cout << "  * \n";
    cout << "Valor: ";
    cin >> valor2;
    mult = valor1 *= valor2;
    cout << "Resultado = " << mult << endl;
    cout << endl;
}

void divisao( int d )
{
    float valor1, valor2, divi;
    cout << "\nDIVISÃO" << endl;
    cout << "Valor: ";
    cin >> valor1;
    cout << "  / \n";
    cout << "Valor: ";
    cin >> valor2;
    divi = valor1 /= valor2;
    cout << "Resultado = " << divi << endl;
    cout << endl;
}

void temp( int t )
{
    float Celsius;
    float Fahrenheit = 160;
    float tempe;
    cout << "\nCONVERSÃO CELSIUS (ºC) PARA FAHRENHEIT (ºF)" << endl;
    cout << "Celsius: ";
    cin >> Celsius;
    cout << "  ºF \n";
    tempe = ( 9 * Celsius + Fahrenheit ) / 5;
    cout << "Resultado = " << tempe << "ºF" << endl;
    cout << endl;
}

void bhaskara( int bh )
{
    double a, b, c, t, r1, r2;
    cout << "\nBHASKARA" << endl;
    cout << "Coeficiente quadrático: ";
    cin >> a;
    cout << "Coeficiente linear: ";
    cin >> b;
    cout << "Constante: ";
    cin >> c;

    if( ( ( b * b) - 4 * a * c ) < 0 || a == 0 )
    {
        cout << "Impossivel calcular \n" << endl;
    }
    else
    {
        t = sqrt( ( b * b ) - 4 * a * c );
        r1 = ( ( - b + t ) / ( 2 * a ) );
        r2 = ( ( - b - t ) / ( 2 * a ) );
        cout << fixed;
        cout << setprecision(5) << "1º Raíz = " << r1 << endl;
        cout << setprecision(5) << "2º Raíz = " << r2 << endl; 
        cout << endl;
    }
}

void circulo( int c )
{
    double raio, calculo;
    cout << "\nCALCULO ÁREA" << endl;
    cout << "Raio: ";
    cin >> raio;
    cout << fixed << setprecision(4);
    calculo = 3.14159 * raio * raio;
    cout << "Área = " << calculo << endl;
    cout << endl;
}

void perimetro( int p )
{
    double pe, calculo;
    cout << "\nCALCULO PERÍMETRO" << endl;
    cout << "Perímetro: ";
    cin >> pe;
    cout << fixed << setprecision(4);
    calculo = 2 * 3.14159 * pe;
    cout << "Perímetro = " << calculo << endl;
    cout << endl;
}

void diametro( int d )
{
    double di, calculo;
    cout << "\nCALCULO DIÂMETRO" << endl;
    cout << "Diâmetro: ";
    cin >> di;
    //cout << fixed << setprecision(4);
    calculo = 2 * di;
    cout << "Perímetro = " << calculo << endl;
    cout << endl;
}