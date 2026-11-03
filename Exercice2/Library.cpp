
#include "Library.hpp"

// Methode pour ajouter un livre au catalogue
void Library::ajouterLivre(const Book& livre) {

    // Verifier si un livre avec le meme ISBN existe deja
    if (trouverParISBN(livre.getISBN()) != nullptr) {

        std::cerr << "[Erreur] Un livre avec le meme ISBN existe deja."
                  << std::endl;

        return;
    }

    // Ajouter le livre au vecteur
    m_livres.push_back(livre);

    std::cout << "[Info] Livre ajoute au catalogue."
              << std::endl;
}

// Methode pour rechercher un livre par ISBN
const Book* Library::trouverParISBN(const std::string& isbn) const {

    // Parcourir tous les livres du catalogue
    for (const auto& livre : m_livres) {

        // Comparer l'ISBN du livre avec celui recherche
        if (livre.getISBN() == isbn) {

            // Retourner l'adresse du livre trouve
            return &livre;
        }
    }

    // Retourner nullptr si aucun livre n'est trouve
    return nullptr;
}

// Methode pour afficher tous les livres
void Library::listerLivres() const {

    // Verifier si le catalogue est vide
    if (m_livres.empty()) {

        std::cout << "Le catalogue est vide." << std::endl;

        return;
    }

    // Afficher le titre du catalogue
    std::cout << "\n--- Catalogue des Livres ---"
              << std::endl;

    // Parcourir et afficher chaque livre
    for (const auto& livre : m_livres) {
        livre.afficher();
    }

    std::cout << "---------------------------"
              << std::endl;
}
