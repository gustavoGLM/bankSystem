#pragma once

extern float wallet;

float invalidDeposit();

float depositOperation();

float invalidWithdraw();

float withdrawOperation();

std::vector<std::string> nameBills();

std::vector<float> billValues();

static void welcomeTxt() {

    std::cout << "#### Welcome to the GO Bank! ####   --> WALLET: R$" << wallet << std::endl;

}

static void welcomeTxt2() {

    std::cout << "#### Welcome to the GO Bank! ####" << std::endl;

}

static void welcomeTxt3() {

    std::cout << "#### Welcome to the GO Bank! ####";

}