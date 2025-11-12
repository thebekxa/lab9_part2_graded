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
        if (x%2==0) {
            x = x/2;
        }else {
            x = x*2;
        }
        numbers.push_back(x);
    }
    for(int i=0; i<n; i++) {
        cout << numbers.at(i) << " ";
    }
}
