/*************************************************************************
 Nom du fichier : 02-anneesBissextiles.cpp
 Description :  Test d'une année saisie par l'utilisateur et affichage si
                année est bissextile ou non sur la console
 Auteur : J.Serrand
 Date : 10.10.22
 BTS SNIR - TS1
**************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int annee (0);

    cout << "Entrez une annee :" ;
    cin >> annee;

    if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0 )
        cout << "l'annee est bissextile";
    else
        cout <<" l'annee n'est pas bissextile";

    return 0;
}