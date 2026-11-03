
#include <iostream>
#include "BankAccount.hpp"

using namespace std;

int main() {

    // Création d'un compte avec un solde initial de 1000 DH
    BankAccount compte1("A12345", 1000.0);

    // Afficher les informations initiales
    cout << "===== INFORMATIONS INITIALES =====" << endl;
    compte1.afficher();

    // Tester le dépôt
    cout << "\n===== TEST DEPOT =====" << endl;
    compte1.deposer(500.0);

    // Tester un dépôt invalide
    compte1.deposer(-100.0);

    // Tester le retrait
    cout << "\n===== TEST RETRAIT =====" << endl;
    compte1.retirer(200.0);

    // Tester un retrait supérieur au solde disponible
    compte1.retirer(2000.0);

    // Afficher le solde final
    cout << "\n===== SOLDE FINAL =====" << endl;
    compte1.afficher();

    // Tester les accesseurs
    cout << "\nNumero du compte : " << compte1.getNumero() << endl;
    cout << "Solde actuel : " << compte1.getSolde() << " DH" << endl;

    return 0;
}
