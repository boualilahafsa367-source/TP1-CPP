
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>

class Book {
public:

    // Constructeur par defaut
    Book();

    // Constructeur parametre
    Book(const std::string& titre, const std::string& auteur,
         const std::string& isbn, int annee);

    // Getters : recuperer les informations du livre
    std::string getTitre() const;
    std::string getAuteur() const;
    std::string getISBN() const;
    int getAnnee() const;

    // Methode pour afficher les informations du livre
    void afficher() const;

private:

    // Attributs prives du livre
    std::string m_titre;
    std::string m_auteur;
    std::string m_isbn;
    int m_annee;
};

#endif // BOOK_HPP
