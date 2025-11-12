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

    int ascendingorder = 1;
    for (int i = 1; i < n; i++) {
        if (numbers[i] < numbers[i - 1]) {
            ascendingorder = 0;
            break;
        }
    }

    if (ascendingorder == 1) {
        cout << "The vector is in ascending order." << endl;
    } else {
        cout << "The vector is in descending order." << endl;
    }

    return 0;
}
