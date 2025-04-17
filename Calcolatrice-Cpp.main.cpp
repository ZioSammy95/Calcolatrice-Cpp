#include <iostream>

int main() {
    double num1, num2;
    char operatore;

    std::cout << "Inserisci il primo numero: ";
    std::cin >> num1;

    std::cout << "Inserisci un operatore (+, -, *, /): ";
    std::cin >> operatore;

    std::cout << "Inserisci il secondo numero: ";
    std::cin >> num2;

    switch (operatore) {
        case '+':
            std::cout << "Risultato: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Risultato: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Risultato: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0)
                std::cout << "Risultato: " << num1 / num2 << std::endl;
            else
                std::cout << "Errore: divisione per zero!" << std::endl;
            break;
        default:
            std::cout << "Operatore non valido!" << std::endl;
    }

    return 0;
}