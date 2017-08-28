#include <iostream>
#include <vector>
#include <string>

using namespace std;

double avg (vector<double> v) {
    vector<double>::iterator vit;

    double sum = 0.0;
    int cnt = 0;

    for (vit = v.begin(); vit != v.end(); vit++) {
        sum += *vit;
        cnt += 1;
    }

    return sum / cnt; 
}

int main () {
    cout << "Enter a sequence of numbers, $ is end signal." << endl;
    vector<double> v;
    
    while (1) {
        string number_str;
        getline(cin, number_str);
        
        if (number_str.compare("$") == 0) {
            break;    
        }
        
        v.push_back(stod(number_str));
    }

    cout << "Average of numbers is : " << avg(v) << endl;
}
