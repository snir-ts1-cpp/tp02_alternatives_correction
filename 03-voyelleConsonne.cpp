/*************************************************************************
 Nom du fichier : 03-voyelleConsonne.cpp
 Description :  Test d'une lettre saisie par l'utilisateur et affichage si
                la lettre est une consonne ou une voyelle.
                Affiche message d'erreur si pas une lettre, et quitte le
                programme si saisi '0'.
 Auteur : J.Serrand
 Date : 10.10.22
 BTS SNIR - TS1
**************************************************************************/

#include <iostream>
using namespace std;

int main() {
    char lettre(0);

    while (1) { //Boucle infinie
        // Demande saisi utilisateur
        cout << "Saisissez une lettre, 0 pour quitter : ";
        cin >> lettre;

        // Test demande de sortie utilisateur (Si lettre vaut 0 --> On quitte)
        if(lettre == '0')
            break; // Sortie de la boucle do...while()

        // Sinon test lettre est bien une majuscule ou une minuscule
        else if((int(lettre)>=65 && int(lettre)<=90)||(int(lettre)>=97 && int(lettre)<=122)) {
            // Test si lettre est une voyelle minuscule
            if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u' || lettre == 'y')
                cout << "C'est une voyelle" << endl;
            // Test si lettre est une voyelle majuscule
            else if (lettre == 'A' || lettre == 'E' || lettre == 'I' || lettre == 'O' || lettre == 'U' || lettre == 'Y')
                cout << "C'est une voyelle" << endl << endl;
            else
                cout << "C'est une consonne" << endl << endl;
        }
        else
            cout << "Vous n'avez pas saisi une lettre !"<<endl<<endl;
    }

    return 0;
}