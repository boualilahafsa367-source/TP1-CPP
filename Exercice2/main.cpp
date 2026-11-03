
#include <iostream>
#include "Book.hpp"
#include "Library.hpp"

using namespace std;

int main() {

    // Creation d'une bibliotheque
    Library bibliotheque;

    // Creation de plusieurs livres
    Book livre1("Le Petit Prince", "Antoine de Saint-Exupery",
                "978-0156012195", 1943);

    Book livre2("L'Etranger", "Albert Camus",
                "978-2070360024", 1942);

    Book livre3("Les Miserables", "Victor Hugo",
                "978-2253096344", 1862);

    // Ajouter les livres au catalogue
    cout << "===== AJOUT DES LIVRES =====" << endl;

    bibliotheque.ajouterLivre(livre1);
    bibliotheque.ajouterLivre(livre2);
    bibliotheque.ajouterLivre(livre3);

    // Tester l'ajout d'un livre avec un ISBN deja existant
    cout << "\n===== TEST DOUBLON =====" << endl;

    Book livre4("Autre Livre", "Auteur Inconnu",
                "978-0156012195", 2020);

    bibliotheque.ajouterLivre(livre4);

    // Afficher tous les livres
    cout << "\n===== LISTE DES LIVRES =====" << endl;

    bibliotheque.listerLivres();

    // Rechercher un livre par ISBN
    cout << "\n===== RECHERCHE D'UN LIVRE =====" << endl;

    const Book* resultat =
        bibliotheque.trouverParISBN("978-2070360024");

    if (resultat != nullptr) {

        cout << "Livre trouve :" << endl;

        resultat->afficher();

    } else {

        cout << "Livre introuvable." << endl;
    }

    // Rechercher un ISBN inexistant
    cout << "\n===== RECHERCHE INEXISTANTE =====" << endl;

    const Book* resultat2 =
        bibliotheque.trouverParISBN("0000000000");

    if (resultat2 != nullptr) {

        resultat2->afficher();

    } else {

        cout << "Aucun livre ne correspond a cet ISBN."
             << endl;
    }

    return 0;
}
