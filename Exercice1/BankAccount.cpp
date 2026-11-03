
#include "BankAccount.hpp"

// Constructeur par défaut
// Initialise le numéro à "N/A" et le solde à 0
BankAccount::BankAccount() : m_numero("N/A"), m_solde(0.0) {}

// Constructeur paramétré
// Initialise le compte avec un numéro et un solde initial
BankAccount::BankAccount(const std::string& numero, double soldeInitial)
    : m_numero(numero), m_solde(soldeInitial) {}

// Méthode pour déposer de l'argent
void BankAccount::deposer(double montant) {

    // Vérifier que le montant est strictement positif
    if (montant <= 0) {
        std::cerr << "[Erreur] Le montant à déposer doit être positif.\n";
        return;
    }

    // Ajouter le montant au solde
    m_solde += montant;

    // Afficher la confirmation du dépôt
    std::cout << "[Info] Dépôt de " << montant
              << " DH effectué. Nouveau solde : "
              << m_solde << " DH\n";
}

// Méthode pour retirer de l'argent
bool BankAccount::retirer(double montant) {

    // Vérifier que le montant est positif
    if (montant <= 0) {
        std::cerr << "[Erreur] Le montant à retirer doit être positif.\n";
        return false;
    }

    // Vérifier que le solde est suffisant
    if (montant > m_solde) {
        std::cerr << "[Erreur] Fonds insuffisants. Solde actuel : "
                  << m_solde << " DH\n";
        return false;
    }

    // Soustraire le montant du solde
    m_solde -= montant;

    // Afficher la confirmation du retrait
    std::cout << "[Info] Retrait de " << montant
              << " DH effectué. Nouveau solde : "
              << m_solde << " DH\n";

    return true;
}

// Méthode pour afficher les informations du compte
void BankAccount::afficher() const {
    std::cout << "Compte N°: " << m_numero
              << " | Solde: " << m_solde << " DH\n";
}

// Méthode pour récupérer le numéro du compte
std::string BankAccount::getNumero() const {
    return m_numero;
}

// Méthode pour récupérer le solde du compte
double BankAccount::getSolde() const {
    return m_solde;
}
