#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> numbers;
    int x;
    for(int i=0; i<n; i++) {
        cin>>x;
        numbers.push_back(x);
    }
    for(int i=n-1; i>=0; --i) {
        cout << numbers.at(i);
    }
}
