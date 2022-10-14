/*************************************************************************
 Nom du fichier : 04-plusGrandSur3.cpp
 Description :  Test de 3 entiers saisis par l'utilisateur et renvoi sur
                la console du plus grand parmi les 3.
 Auteur : J.Serrand
 Date : 10.10.22
 BTS SNIR - TS1
**************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a(0), b(0), c(0);

    cout << "Saisissez 3 entiers" << endl;
    cin >> a >> b >> c; // L'utilisateur saisi les 3 entiers, le programme les stocke dans a,b et c

    if(a>=b && a>=c) // Test si a est le plus grand
        cout << "Le plus grand est "<< a;
    else if(b>=a && b>=c) // Test si b est le plus grand
        cout << "Le plus grand est "<< b;
    else // Si ni a est le plus et ni b alors c est le plus grand
        cout << "Le plus grand est " << c;

    return 0;
}