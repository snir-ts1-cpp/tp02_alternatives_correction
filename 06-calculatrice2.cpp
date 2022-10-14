/*************************************************************************
 Nom du fichier : 06-calculatrice2.cpp
 Description :  Même programme que 06-calculatrice mais avec saisie util-
                isateur différente.
                Demande à l'utilisateur de saisir un calcul sous la forme
                operande1 operateur operande2
                Par exemple : 6 * 7
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

    cout << "Rentrez le calcul sous la forme : Operande1 Operateur Operande2 : ";
    cin >> a >> operateur >> b;

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