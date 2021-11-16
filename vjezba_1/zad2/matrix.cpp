#include "zad2.h"
#include <iostream>
#include <iomanip>

using namespace std;

void unos(matricaa& mat, matricaa &mata, matricaa &matb)
{
    mat.matrica = new float*[mata.m];
    for(int i = 0; i < mata.m; i++)
        mat.matrica[i] = new float[matb.n];
}

void unos_matrice(matricaa& mat)
{
    int i = 0 , j = 0;
    while (mat.m > i) 
    {
        while (mat.n > j) 
        {
            cout << "Unesite Element matrice: ";
            cin >> mat.matrica[i][j];
            j++;
        }
        j = 0;
        i++;
    }
}

void zbrajanje(matricaa &mata, matricaa &matb)
{
    for(int i = 0; i < mata.m; ++i)
        for(int j = 0; j < mata.n; ++j)
            mata.matrica[i][j] = mata.matrica[i][j] + matb.matrica[i][j];
}

void oduzimanje(matricaa &mata, matricaa &matb)
{
    for(int i = 0; i < mata.m; ++i)
        for(int j = 0; j < mata.n; ++j)
            mata.matrica[i][j] = mata.matrica[i][j] - matb.matrica[i][j];
}

void mnozenje(matricaa &mata, matricaa &matb, matricaa &matc)
{
    for (int i = 0; i<matc.m;i++)
        for (int j = 0; i<matc.n;j++)
            matc.matrica[i][j] = 0;
    for(int i = 0; i < matc.m; ++i)
        for(int j = 0; j < matc.n; ++j)
        { 
            float sum = 0;
            for (int k = 0; k < mata.m; k++)
            {
                sum +=  (mata.matrica[i][k] * matb.matrica[k][j]);
            }
            matc.matrica[i][j] = sum;
            cout << sum;
        }
}

void transponiranje(matricaa &mata, matricaa &matb)
{
    for (int i = 0; i < mata.n; ++i)
      for (int j = 0; j < mata.m; ++j) 
      {
        mata.matrica[j][i] = matb.matrica[i][j];
      }
}

void ispis(matricaa &mat)
{
    for(int i = 0; i < mat.m; ++i)
    {
        for(int j = 0; j < mat.n; ++j)
        {
            cout << right << fixed << setprecision(4) << mat.matrica[i][j] << " ";
            if (j == mat.n - 1)
                cout << endl;
        }
    }    
}
void matrica()
{
    char operacija;
    char odabir;
    matricaa matrica_a;
    matricaa matrica_b;
    matricaa matrica_c;
    cout << "Unesite dimenziju prve matrice: " << endl;
    cin >> matrica_a.m >> matrica_a.n;
    cout << "Unesite dimenziju druge matrice: " << endl;
    cin >> matrica_b.m >> matrica_b.n;
    unos(matrica_a,matrica_a,matrica_a);
    unos(matrica_b,matrica_b,matrica_b);
    cout << "Unesite elemente prve matrice: " << endl;
    unos_matrice(matrica_a);
    cout << "Unesite elemente druge matrice: " << endl;
    unos_matrice(matrica_b);
   cout << "Unesite operaciju(t,m,z,o): "  << endl;
    cin >> operacija;
    if (operacija == 'z')
    {
        if (matrica_a.m == matrica_b.m && matrica_a.n == matrica_b.n)
        {
            zbrajanje(matrica_a,matrica_b);
            ispis(matrica_a);
        }
        else
            cout << "Matrice nisu istog tipa ne mogu se zbrajati!!" << endl;
    }
    else if (operacija == 'm')
    {
        if (matrica_a.m==matrica_b.n)
        {
            unos(matrica_c, matrica_a, matrica_b);
            matrica_c.m=matrica_a.m;
            matrica_c.n=matrica_b.n;
            mnozenje(matrica_a,matrica_a,matrica_c);
            ispis(matrica_c);
        }
        else 
            cout << "Matrice nisu ulancane, ne mogu se mnoziti!!" << endl;
    }
    else if (operacija == 'o')
    {
        if (matrica_a.m==matrica_b.m && matrica_a.n==matrica_b.n)
        {
            oduzimanje(matrica_a,matrica_b);
            ispis(matrica_a);
        }
        else
            cout << "Matrice nisu istog tipa ne mogu se oduzimati" << endl;
    }
    else if (operacija == 't')
    {
        cout << "Koju matricu zelite transponirati A ili B?" << endl;
        cin >> odabir;
        matricaa transponirana;
        if (odabir == 'A')
        {
            transponirana.m = matrica_a.n;
            transponirana.n = matrica_a.m;
            unos(transponirana,matrica_a,matrica_a);
            transponiranje(transponirana,matrica_a);
            ispis(transponirana);
            for(int i = 0; i < matrica_a.n; i++)
                delete [] transponirana.matrica[i];
            delete [] transponirana.matrica;
        }
        else if (odabir == 'B')
        {
            transponirana.m = matrica_b.n;
            transponirana.n = matrica_b.m;
            unos(transponirana,matrica_b,matrica_b);
            transponiranje(transponirana,matrica_b);
            ispis(transponirana);
            for(int i = 0; i < matrica_b.n; i++)
                delete [] transponirana.matrica[i];
            delete [] transponirana.matrica;
        }
        else
            cout << "Pogrešan unos." << endl;
    }
    for(int i = 0; i < matrica_a.m; i++)
        delete [] matrica_a.matrica[i];
    delete [] matrica_a.matrica;
    for(int i = 0; i < matrica_b.m; i++)
        delete [] matrica_b.matrica[i];
    delete [] matrica_b.matrica;
    for(int i = 0; i < matrica_c.m; i++)
        delete [] matrica_c.matrica[i];
    delete [] matrica_c.matrica;
}