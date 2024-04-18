#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include "main.h"

//### GLOBAL VARIABLES ###
float wallet = 500.0f, depositValue, withdrawValue;
int choose, billtoPay;
char returnMainMenu;
std::string confirm;

//########################

int main() {

    /*###FIRST 
    ###EXECUTION*/

    std::cout << "###### Welcome to the GO Bank! ######" << std::endl;

    std::cout << "------ Press ENTER to proceed. ------" << std::endl;
    std::cin.get();

    std::cout << std::fixed << std::setprecision(2);

    system("cls");
    
    /*###SECOND
    ###EXECUTION*/

do{
    welcomeTxt();
     
    std::cout << "\n1. Deposit         2. Withdraw\n";
    std::cout << "3. Pay a bill        4. Exit" << std::endl;

    std::cout << "\nChoose an operation: " ;
    std::cin >> choose;

    system("cls");

    /*###THIRD
    ###EXECUTION*/

    welcomeTxt();

    std::vector<std::string> randNameBills = nameBills();
    std::vector<float> randBillValues = billValues();

    switch (choose) {
    case 1:

        std::cout << "\nWhat value would you like to deposit: R$";
        std::cin >> depositValue;

        system("cls");
        invalidDeposit();
        welcomeTxt2();

        std::cout << "\nDeposit completed successfully! Your current wallet is: R$" << depositOperation() << "." << std::endl;

        break;

    case 2:

        std::cout << "\nWhat value would you like to withdraw: R$";
        std::cin >> withdrawValue;

        system("cls");
        invalidWithdraw();
        welcomeTxt2();

        std::cout << "\nWithdraw completed successfully! Your current wallet is: R$" << withdrawOperation() << "." << std::endl;

        break;

    case 3:

        do {
            std::cout << "\n-------YOUR BILLS-------\n";
            std::cout << "\n1. " << randNameBills[0] << " > R$" << randBillValues[0] << std::endl;
            std::cout << "\n2. " << randNameBills[1] << " > R$" << randBillValues[1] << std::endl;
            std::cout << "\n3. " << randNameBills[2] << " > R$" << randBillValues[2] << std::endl;
            std::cout << "\n4. " << randNameBills[3] << " > R$" << randBillValues[3] << std::endl;
            std::cout << "\n------------------------\n";
            std::cout << "\nWhich bill would you like to pay: ";
            std::cin >> billtoPay;

            system("cls");

            welcomeTxt();

            switch (billtoPay) {
            case 1:

                std::cout << "\nAre you sure you want to pay the */" << randNameBills[0] << "/* bill at the value of R$" << randBillValues[0] << "?" << std::endl;
                std::cout << "\nCONFIRM or RETURN: ";
                std::cin >> confirm;

                if (confirm == "CONFIRM") {

                    system("cls");

                    float billDiscount = wallet - randBillValues[0];

                    welcomeTxt3();

                    std::cout << "   --> WALLET: R$" << billDiscount << std::endl;

                    std::cout << "\n*/" << randNameBills[0] << "*/ bill successfully paid! What do you want to do now?" << std::endl;
                    std::cout << "\nPress ENTER to return to the main menu." << std::endl;
                    std::cin >> returnMainMenu;
                    if (returnMainMenu == 1) {
                        system("cls");
                    }
                }   
                break;

            case 2:

                std::cout << "\nAre you sure you want to pay the */" << randNameBills[1] << "/* bill at the value of R$" << randBillValues[1] << "?" << std::endl;
                std::cout << "\nCONFIRM or RETURN: ";
                std::cin >> confirm;
                if (confirm == "CONFIRM") {

                    system("cls");

                    float billDiscount = wallet - randBillValues[1];

                    welcomeTxt3();

                    std::cout << "   --> WALLET: R$" << billDiscount << std::endl;

                    std::cout << "\n*/" << randNameBills[1] << "*/ bill successfully paid! What do you want to do now?";
                }
                break;

            case 3:

                std::cout << "\nAre you sure you want to pay the */" << randNameBills[2] << "/* bill at the value of R$" << randBillValues[2] << "?" << std::endl;
                std::cout << "\nCONFIRM or RETURN: ";
                std::cin >> confirm;
                if (confirm == "CONFIRM") {

                    system("cls");

                    float billDiscount = wallet - randBillValues[2];

                    welcomeTxt3();

                    std::cout << "   --> WALLET: R$" << billDiscount << std::endl;

                    std::cout << "\n*/" << randNameBills[2] << "*/ bill successfully paid! What do you want to do now?";
                }
                break;

            case 4:

                std::cout << "\nAre you sure you want to pay the */" << randNameBills[3] << "/* bill at the value of R$" << randBillValues[3] << "?" << std::endl;
                std::cout << "\nCONFIRM or RETURN: ";
                std::cin >> confirm;
                if (confirm == "CONFIRM") {

                    system("cls");

                    float billDiscount = wallet - randBillValues[3];

                    welcomeTxt3();

                    std::cout << "   --> WALLET: R$" << billDiscount << std::endl;

                    std::cout << "\n*/" << randNameBills[3] << "*/ bill successfully paid! What do you want to do now?";
                }
                break;

            default:

                std::cout << "Invalid option.";

                continue;

            }

            if (confirm == "RETURN") {
                system("cls");
                welcomeTxt();
            }
         
        } while (confirm == "RETURN");
    
       
    case 4:
        
        std::cout << "\nExiting the application...";
        break;
    }
    
    
    } while (returnMainMenu == 1);

    return 0;
}
