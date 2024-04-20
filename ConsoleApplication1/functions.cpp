#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include "main.h"

extern float wallet, depositValue, withdrawValue;




float invalidDeposit() {

    while (depositValue <= 0) {

        std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

        std::cout << "\nThat's an invalid amount. Please, choose a value again: R$";

        std::cin >> depositValue;

        system("cls");


        return invalidDeposit();
    }
}

float depositOperation() {

    float depositSum = wallet += depositValue;


    return depositSum;
}

float invalidWithdraw() {

    while (withdrawValue > wallet || withdrawValue <= 0) {

        std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

        std::cout << "\nThat's an invalid amount. Please, choose a value again: R$";

        std::cin >> withdrawValue;

        system("cls");


        return invalidWithdraw();
    }
}

float withdrawOperation() {

    float withdrawSubtraction = wallet -= withdrawValue;


    return withdrawSubtraction;
}

std::vector<std::string> nameBills() {

    std::vector<std::string> billsWhich = { "NUBANK CREDIT CARD", "CG 160 INSTALLMENT", "IPTU", "INTERNET & ELETRICITY" };

    std::random_device rd;

    std::mt19937 g(rd());

    std::shuffle(billsWhich.begin(), billsWhich.end(), g);


    return billsWhich;

}

std::vector<float> billValues() {

    srand(time(NULL));

    std::vector<float> numbers;

    for (int i = 0; i < 4; i++) {

        numbers.push_back(200.0f + static_cast<float>(rand() % 151));
    }
    return numbers;
}



