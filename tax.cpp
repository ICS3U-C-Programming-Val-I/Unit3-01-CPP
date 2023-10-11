// Copyright (c) 2023 Val Ijaola All rights reserved.
//
// Created by: Val Ijaola
// Created on: October. 11, 2023
// This program calculates the tax and total of items
// using the HST of New Brunswick

#include <iostream>
float subtotal, tax, total;
const float HST = 0.15;

int main() {
    // input - getting the subtotal
    std::cout << "What is the subtotal of your item?\n";
    std::cin >> subtotal;

    // Process - Calculating tax and total
    tax = subtotal * HST;
    total = subtotal + tax;

    // Output - display tax and total
    std::cout << "The tax on your item is $" << tax << ".\n";
    std::cout << "The total on your item is $" << total << ".\n";
}
