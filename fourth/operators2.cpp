#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Assignment operator challange

    int numberOfTeaBags;
    cout << "Enter the number of the tea bags you have:\n";
    cin >> numberOfTeaBags;
    
    if (numberOfTeaBags <= 10){
        numberOfTeaBags += 5;
        cout << "Now you have "<< numberOfTeaBags <<" bags After adding 5 bags\n";
    }
    return 0;
}
