#ifndef VEND_H
#define VEND_H

int continue_shopping = 1;
int choice;
int price;
int credit, change;
int denom_count;

// drink infor
const char *drinks[] = {"Coke", "Pepsi", "Sprite", "Fanta", "Mirinda"};
const int prices[] = {1500, 1000, 1500, 1500, 1000};
int stock[] = {5, 5, 5, 5, 5}; // Initial stock
// Denominations
int denominations[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};

int select_drink();
void available_drinks();
void change_credit();
void calculate_change(int change);
int get_continue_choice();

#endif