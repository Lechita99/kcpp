#include <iostream>

int main() {

    char znak;
    double liczba1, liczba2;
    std::cout << "Kalkulator" << std::endl;
    
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;

    std::cout << "Podaj znak + = * / ";
    std::cin >> znak;

    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;

    switch(znak){
        case '+':
            std::cout << "Wynik: " << liczba1 + liczba2 << std::endl;
            break;
        case '-':
            std::cout << "Wynik: " << liczba1 - liczba2 << std::endl;
            break;
        case '*':
            std::cout << "Wynik: " << liczba1 * liczba2 << std::endl;
            break;
        case '/':
            if (liczba2 != 0)
                std::cout << "Wynik: " << liczba1 / liczba2 << std::endl;
            else
                std::cout << "Blad! Nie dziel przez zero." << std::endl;
            break;
        default:
            std::cout << "Nieznana operacja!" << std::endl;
    }

    return 0;
}