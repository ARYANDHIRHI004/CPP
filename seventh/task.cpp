#include <iostream>

using namespace std;

int add(int a, int b);

int main(){
    int c = add(4,5);
    cout << c;
    return 0;
}

int add(int a, int b){
    return a + b;
}


