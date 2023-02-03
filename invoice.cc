/**
 *   @file: invoice.cc
 * @author: Mac Watson
 *   @date: 02/02/2023
 *  @brief: Homework 1, Monitor Invoice
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

string monitoroption;
string ohioresident;

const int s = 190; 
const int v = 170;
const int discount_price = 5;
const int tax_price = 7;


double Monitor, Brand, quantity, price, Ohio, Resident, TotalPrice, Discount, Subtotal, Taxes, Total;

cout << "Monitors Invoice" << endl;
cout << "---------------------" << endl;
cout << "Monitor Brand: " << endl;
cin >> monitoroption;
if (monitoroption == "v"){
    cout << "monitor viwesonic" << endl;
}else if(monitoroption == "s"){
   cout << "monitor samsung" << endl; 
}else{
    cout << "invaild input" << endl;
}
cout << "Quantity: ";
cin >> quantity;

cout << "Price: $" << endl;
cin >> price;
if (monitoroption = 's'){
    cout << 190;
}
else if(monitoroption ='v'){
    cout << 170;
}

cout << "Ohio Resident: " << endl;
cin >> ohioresident;
if (ohioresident == "yes"){
    cout << "Ohio Resident: Yes" << endl;
}else if(ohioresident == "no"){
    cout << "Ohio Resident: No" << endl;
}else{
    cout << "invalid input" << endl;
}


cout << "Total Price: " << endl;
cin >> TotalPrice = quantity*price;
cout << "Discount: " << endl;
if(quantity>=3){
    Discount=TotalPrice*discount_price/100;
}
cout << "Subtotal: " << endl;
cin >> Subtotal= TotalPrice - Discount
cout << "Taxes: " << endl;
if( ohioresident == "yes"){
    Taxes=Subtotal*tax_price/100;
}
cout << "Total: " << endl;
cin >> Total = Subtotal+Taxes

    return 0;
} /// main
