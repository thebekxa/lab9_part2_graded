#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cout << "Enter the numbers: ";
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        cin >> x;
        numbers.push_back(x);
    }
    int maxvalue = numbers[0];
    int maxindex = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > maxvalue) {
            maxvalue = numbers[i];
            maxindex = i;
        }
    }
    cout<< "The maximum value is: " << maxvalue << endl;
    cout << "The maximum index is: " << maxindex << endl;
}

