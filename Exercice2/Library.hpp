
#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"
#include <vector>
#include <string>

class Library {
public:

    // Methode pour ajouter un livre au catalogue
    void ajouterLivre(const Book& livre);

    // Methode pour rechercher un livre par son ISBN
    // Retourne un pointeur constant vers le livre ou nullptr
    // si le livre n'existe pas
    const Book* trouverParISBN(const std::string& isbn) const;

    // Methode pour afficher tous les livres du catalogue
    void listerLivres() const;

private:

    // Vecteur contenant les livres de la bibliotheque
    std::vector<Book> m_livres;
};

#endif // LIBRARY_HPP
