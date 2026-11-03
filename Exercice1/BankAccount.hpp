
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

// Inclusion des bibliothèques nécessaires
#include <string>
#include <iostream>

class BankAccount {
public:

    // Constructeur par défaut : initialise le solde à zéro
    BankAccount();

    // Constructeur paramétré : initialise le numéro et le solde du compte
    BankAccount(const std::string& numero, double soldeInitial = 0.0);

    // Méthode permettant de déposer de l'argent
    void deposer(double montant);

    // Méthode permettant de retirer de l'argent
    // Retourne true si le retrait est effectué, false sinon
    bool retirer(double montant);

    // Méthode permettant d'afficher les informations du compte
    void afficher() const;

    // Accesseur permettant de récupérer le numéro du compte
    std::string getNumero() const;

    // Accesseur permettant de récupérer le solde du compte
    double getSolde() const;

private:

    // Attributs privés : accessibles uniquement depuis la classe
    std::string m_numero;
    double m_solde;
};

#endif // BANKACCOUNT_HPP
