#include <iostream>
#include <string>

using namespace std;

int main(){
    int cups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of tea cup\n";
    cin >> cups;

    if(cups > 20){
       discount = 0.20;
    }else if(cups >=10 && cups <=20){
        discount = 0.10;
    }else{
        discount = 0;
    }
    totalPrice -= totalPrice * discount;
    cout << "Total price is: " << totalPrice << endl;
    return 0;
}