/*************************************************************************
 Nom du fichier : 05-equation1Degre.cpp
 Description :  Programme permettant de calculer et d'afficher sur la console
                les solutions d'une équation du 1er degré après avoir demandé
                à l'utilisateur les valeurs des 3 coefficients.
 Auteur : J.Serrand
 Date : 10.10.22
 BTS SNIR - TS1
**************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a(0), b(0), c(0),delta(0);

    cout << "Saisissez les valeurs des 3 coefficients :" << endl;
    cin >> a >> b >> c; // L'utilisateur saisi les 3 entiers, le programme les stocke dans a,b et c
    delta = b*b-4*a*c;

    if(delta  < 0) // Test si delta < 0 pas de solutions
        cout << "Pas de solutions dans le domaine des réels" << endl;
    else if(delta == 0 ) // Test si delta = 0 --> 2 solutions
        cout << "x1 = x2 = " << (-b)/(2*a) << endl;
    else // Cas ou delta > 0 --> 2 solutions
    {
        cout << "x1 = " << (-b - sqrt(delta)) / (2 * a);
        cout << "   x2 = " << (-b + sqrt(delta)) / (2 * a);
    }
    return 0;
}