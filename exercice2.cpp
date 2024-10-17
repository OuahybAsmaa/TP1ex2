// exercice2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"cercle.h"
using namespace std;


int main()
{
    point* p1 = new point(2, 3);
    cercle* c1 = new cercle(1, 2, *p1);//on a une copie de p1 c'est pour cela il y a un appel à le descructeur car il faut supprimer la copie car on a un passage par valeur dans la creation de cercle
    cout <<  "" << endl;
    c1->afficher();
    cout << "" << endl;
    double D, P;
    D = c1->surface();
    cout << "D= " << D <<" m2" << endl;
    P = c1->perimetre();
    cout << "P= " << P << " m" << endl;
    cout << "" << endl;
    c1->translate(1, 1);
    c1->afficher();
    cout << "" << endl;
    c1->modifier_rayou(4);
    c1->afficher();

    delete p1;
    delete c1;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
