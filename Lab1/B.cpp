#include <iostream>

using namespace std;

int odd_sum(int N) {
    return N * N;    
}

int main() {
    int N;

    cout << "Enter N :" << endl;
    cin >> N;

    cout << "Odd sum of N is : " << odd_sum(N) << endl;
        
}
