/*************************************************************************
 Nom du fichier : 06-calculatrice.cpp
 Description :  Demande à l'utilisateur de saisir un opérateur parmi : +-/*
                Puis demande de saisir 2 opérandes a et b.
                Le programme affiche ensuite le résultat du calcul
 Auteur : J.Serrand
 Date : 12.10.22
 BTS SNIR - TS1
**************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a (0), b (0);
    char operateur(0);
    cout << "Rentrez un opérateur parmi +-/* : ";
    cin >> operateur;
    cout << "Rentrez 2 opérandes : ";
    cin >> a >> b

    switch(operateur)
    {
        case '+':
            cout << a << "+" << b << "=" << a+b <<endl;
            break;
        case '-':
            cout << a << "-" << b << "=" << a-b <<endl;
            break;
        case '/':
            cout << a << "/" << b << "=" << a/b <<endl;
            break;
        case '*':
            cout << a << "*" << b << "=" << a*b <<endl;
            break;
        default :
            cout << "Achtung ! Vous avez rentré n'importe quoi !" << endl;
            break;
    }

    return 0;
}