#include <iostream>

using namespace std;

int totlaChaiServed(int chai[], int size){
    int total = 0;
    for (int i = 0; i < size; i++){
        total += chai[i];
    }
    return total;
    
}

int main(){
    
    int chaiServed[7] = {50,60,55,70,65,80,75};

    int total = totlaChaiServed(chaiServed, 7);
    cout << "Total chai served: " << total;

    return 0;
}