
#include "Book.hpp"

// Constructeur par defaut
// Initialise les attributs avec des valeurs par defaut
Book::Book()
    : m_titre("Inconnu"),
      m_auteur("Inconnu"),
      m_isbn(""),
      m_annee(0) {}

// Constructeur parametre
// Initialise le livre avec les informations fournies
Book::Book(const std::string& titre, const std::string& auteur,
           const std::string& isbn, int annee)
    : m_titre(titre),
      m_auteur(auteur),
      m_isbn(isbn),
      m_annee(annee) {}

// Getter pour recuperer le titre
std::string Book::getTitre() const {
    return m_titre;
}

// Getter pour recuperer l'auteur
std::string Book::getAuteur() const {
    return m_auteur;
}

// Getter pour recuperer l'ISBN
std::string Book::getISBN() const {
    return m_isbn;
}

// Getter pour recuperer l'annee de publication
int Book::getAnnee() const {
    return m_annee;
}

// Methode pour afficher les informations du livre
void Book::afficher() const {
    std::cout << "Titre : " << m_titre
              << " | Auteur : " << m_auteur
              << " | ISBN : " << m_isbn
              << " | Annee : " << m_annee << std::endl;
}
