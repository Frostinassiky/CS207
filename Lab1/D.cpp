#include <iostream>
#include <vector>

using namespace std;

void largest_numbers(vector<int> & numbers, vector<int> & bignumbers) {
    vector<int>::iterator vit;

    int largest = 0, seclargest = 0;
    for (vit = numbers.begin(); vit != numbers.end(); vit++){
        if (largest < *vit) {
            seclargest = largest;
            largest = *vit;
        } else if (seclargest < *vit) {
            seclargest = *vit;      
        }
    }

    bignumbers.push_back(largest);
    bignumbers.push_back(seclargest);
}

int main() {
    cout << "Enter positive numbers, 0 is end signal." << endl;
    vector<int> numbers, bignumbers;

    while (1) {
        int num;
        cin >> num;
        
        if (num == 0) {
            break;
        }

        numbers.push_back(num);
    }

    largest_numbers(numbers, bignumbers);
    cout << "Largest number is : " << bignumbers[0] << endl;
    cout << "Second largest is : " << bignumbers[1] << endl;
}
