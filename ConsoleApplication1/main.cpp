#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <limits>
#include "main.h"

//### GLOBAL VARIABLES ###

float wallet = 500.0f, depositValue, withdrawValue;
int choose, billtoPay;
std::string confirm, returnMenu, returnBills;
std::vector<std::string> randNameBills = nameBills();
std::vector<float> randBillValues = billValues();
int enter;
//### FUNCTION DECLARATIONS ###



//#############################


int main() {

    /*###FIRST 
    ###EXECUTION*/
    /*do {*/
        std::cout << "###### Welcome to the GO Bank! ######" << std::endl;

        std::cout << "------ Press ENTER to proceed. ------" << std::endl;
        std::cin.get();

        std::cout << std::fixed << std::setprecision(2);

        system("cls");

        /*###SECOND
        ###EXECUTION*/

        do {


            system("cls"), std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

            std::cout << "\n1. Deposit         2. Withdraw\n";
            std::cout << "3. Pay a bill        4. Exit" << std::endl;

            std::cout << "\nChoose an operation: ";
            std::cin >> choose;

            system("cls");

            /*###THIRD
            ###EXECUTION*/

            std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

            switch (choose) {
            case 1:

                std::cout << "\nWhat value would you like to deposit: R$";
                std::cin >> depositValue;

                system("cls");
                invalidDeposit();

                std::cout << "#### Welcome to the GO Bank! ####" << std::endl;

                std::cout << "\nDeposit completed successfully! Your current wallet is: R$" << depositOperation() << "." << std::endl;
                std::cout << "\nPress ENTER twice to return to the main menu.";

                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();

                break;

            case 2:

                if (wallet == 0) {

                    std::cout << "\nYou don't have funds. Type RETURN to return to the main menu." << std::endl;
                    std::cout << "\n";
                    std::cin >> returnMenu;

                }
                else {
                    std::cout << "\nWhat value would you like to withdraw: R$";
                    std::cin >> withdrawValue;

                    system("cls");
                    invalidWithdraw();

                    std::cout << "#### Welcome to the GO Bank! ####" << std::endl;

                    std::cout << "\nWithdraw completed successfully! Your current wallet is: R$" << withdrawOperation() << "." << std::endl;
                    std::cout << "\nPress ENTER twice to return to the main menu.";

                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cin.get();
                }
                break;

            case 3:

                std::cout << "\n-------YOUR BILLS-------\n";
                std::cout << "\n1. " << randNameBills[0] << " > R$" << randBillValues[0] << std::endl;
                std::cout << "\n2. " << randNameBills[1] << " > R$" << randBillValues[1] << std::endl;
                std::cout << "\n3. " << randNameBills[2] << " > R$" << randBillValues[2] << std::endl;
                std::cout << "\n4. " << randNameBills[3] << " > R$" << randBillValues[3] << std::endl;
                std::cout << "\n------------------------\n";
                std::cout << "\nWhich bill would you like to pay: ";
                std::cin >> billtoPay;

                system("cls");

                std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

                if (billtoPay == 1) {
                    std::cout << "\nAre you sure you want to pay the */" << randNameBills[0] << "/* bill at the value of R$" << randBillValues[0] << "?" << std::endl;
                    std::cout << "\nCONFIRM or RETURN: ";
                    std::cin >> confirm;
                

                    if (confirm == "CONFIRM" && randBillValues[0] > wallet) {

                        system("cls");

                        std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

                        std::cout << "\nInvalid operation. You don't have enough amount to pay this bill. Please, type RETURN to return to the main menu." << std::endl;
                        std::cout << "\n";
                        std::cin >> returnMenu;
                    }
                    else {

                        if (confirm == "CONFIRM") {

                            system("cls");

                            wallet -= randBillValues[0];

                            std::cout << "#### Welcome to the GO Bank! ####";

                            std::cout << "   --> WALLET: R$" << wallet << std::endl;

                            std::cout << "\n" << randNameBills[0] << " bill successfully paid!" << std::endl;
                            std::cout << "\nPress ENTER twice to return to the main menu." << std::endl;

                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cin.get();

                        }
                    }
                }
                else if (billtoPay == 2) {
                    std::cout << "\nAre you sure you want to pay the */" << randNameBills[1] << "/* bill at the value of R$" << randBillValues[1] << "?" << std::endl;
                    std::cout << "\nCONFIRM or RETURN: ";
                    std::cin >> confirm;

                    if (confirm == "CONFIRM" && randBillValues[1] > wallet) {

                        system("cls");

                        std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

                        std::cout << "\nInvalid operation. You don't have enough amount to pay this bill. Please, type RETURN to return to the main menu." << std::endl;
                        std::cout << "\n";
                        std::cin >> returnMenu;
                    }
                    else {

                        if (confirm == "CONFIRM") {

                            system("cls");

                            wallet -= randBillValues[1];

                            std::cout << "#### Welcome to the GO Bank! ####";

                            std::cout << "   --> WALLET: R$" << wallet << std::endl;

                            std::cout << "\n" << randNameBills[1] << " bill successfully paid!" << std::endl;
                            std::cout << "\nPress ENTER twice to return to the main menu." << std::endl;

                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cin.get();
                        }
                    }
                }
                else if (billtoPay == 3)
                {
                    std::cout << "\nAre you sure you want to pay the */" << randNameBills[2] << "/* bill at the value of R$" << randBillValues[2] << "?" << std::endl;
                    std::cout << "\nCONFIRM or RETURN: ";
                    std::cin >> confirm;

                    if (confirm == "CONFIRM" && randBillValues[2] > wallet) {

                        system("cls");

                        std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

                        std::cout << "\nInvalid operation. You don't have enough amount to pay this bill. Please, type RETURN to return to the main menu." << std::endl;
                        std::cout << "\n";
                        std::cin >> returnMenu;
                    }
                    else {

                        if (confirm == "CONFIRM") {

                            system("cls");

                            wallet -= randBillValues[2];

                            std::cout << "#### Welcome to the GO Bank! ####";

                            std::cout << "   --> WALLET: R$" << wallet << std::endl;

                            std::cout << "\n" << randNameBills[2] << " bill successfully paid!" << std::endl;
                            std::cout << "\nPress ENTER twice to return to the main menu.";

                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cin.get();
                        }
                    }
                }
                else if (billtoPay == 4)
                {
                    std::cout << "\nAre you sure you want to pay the */" << randNameBills[3] << "/* bill at the value of R$" << randBillValues[3] << "?" << std::endl;
                    std::cout << "\nCONFIRM or RETURN: ";
                    std::cin >> confirm;

                    if (confirm == "CONFIRM" && randBillValues[3] > wallet) {

                        system("cls");

                        std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

                        std::cout << "\nInvalid operation. You don't have enough amount to pay this bill. Please, type RETURN to return to the main menu." << std::endl;
                        std::cout << "\n";
                        std::cin >> returnMenu;
                    }
                    else {

                        if (confirm == "CONFIRM") {

                            system("cls");

                            wallet -= randBillValues[3];

                            std::cout << "#### Welcome to the GO Bank! ####";

                            std::cout << "   --> WALLET: R$" << wallet << std::endl;

                            std::cout << "\n" << randNameBills[3] << " bill successfully paid!" << std::endl;
                            std::cout << "\nPress ENTER twice to return to the main menu.";

                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cin.get();

                        }
                    }
                }
                else {

                    system("cls");

                    std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

                    std::cout << "\nInvalid choose, type RETURN to return to the main menu." << std::endl;
                    std::cout << "\n";
                    std::cin >> returnMenu;
                }

                if (confirm == "RETURN") {

                    system("cls");

                    std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;
                }

                break;

            case 4:

                system("cls");

                std::cout << "\nExiting the application... \n";
                exit(0);
                
                break;

            default:

                std::cout << "\nInvalid option, press ENTER twice to return to the main menu.";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get();
                
                break;

            }

        } while (std::cin.get() || returnMenu == "RETURN" || confirm == "RETURN");

    return 0;
}



