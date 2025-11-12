
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1, v2, sum;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements of first vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v1.push_back(x);
    }
    cout << "Enter elements of second vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v2.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        sum.push_back(v1[i] + v2[i]);
    }

    cout << "Resultant vector: ";
    for (int i : sum) {
        cout << i << " ";
    }
}
