#include <iostream>

using namespace std;

int main(){
    int numberOfCups;
    int price = 10;
    int totalPrice;
    int discount = 0;

    cout << "Enter the number of the cups:\n";
    cin >> numberOfCups;

    totalPrice = numberOfCups * price;

    if (totalPrice >= 100){
        discount = totalPrice * 0.05;
        totalPrice -= discount;
    }
    
    cout << "Total price is: " << totalPrice << endl;    

    return 0;
}
