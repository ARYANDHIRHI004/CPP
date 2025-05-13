#include <iostream>

using namespace std;

void pourChai(int cups){
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main(){
    
    int chaiCupes = 2;
    pourChai(chaiCupes);
    cout << chaiCupes;

    return 0;
}