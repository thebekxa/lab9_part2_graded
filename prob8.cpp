#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cout << "Enter the numbers: ";
    cin >> n;
    vector<int> numbers;
    for (int i = 0; true; i++) {
        cin >> x;
        if (x<0) {
            break;
        }
        numbers.push_back(x);
    }
    vector<int> result;
    if (numbers.size() > 0) {
        result.push_back(numbers[0]); // always keep the first element
        for (int i = 1; i < numbers.size(); i++) {
            if (numbers[i] != numbers[i - 1]) {
                result.push_back(numbers[i]);
            }
        }
    }
    cout << "Original numbers: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    cout << "After removing consecutive duplicates: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

