/************************************************
 Nom du fichier : 01-pairImpair.cpp
 Description :  Test de parité sur un nombre saisi
                par l'utilisateur et affichage du
                résultat sur la console.
 Auteur : J.Serrand
 Date : 10.10.22
 BTS SNIR - TS1
************************************************/

#include <iostream>
using namespace std;

int main() {
    int nombre(0);
    int rslt(0);
    cout<<"rentrez un nombre"<<endl;
    cin >> nombre;
    rslt = nombre%2;
    if (rslt== 0)
        cout <<"le nombre est pair" <<endl;
    else
        cout <<"le nombre est impair"<< endl;

    return 0;
}