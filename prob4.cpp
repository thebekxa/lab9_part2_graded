#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x, unique = 0;
    cin >> n;
    vector<int> numbers;
    for(int i=0; i<n; i++) {
        cin>>x;
        numbers.push_back(x);
    }
    for(int i=0; i<n; i++) {
        bool is_unique = true;
        for(int j=0; j<i; j++) {
            if (numbers[i]==numbers[j]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            unique++;
        }
    }
    cout << "Unique elements: " << unique << endl;
    for(int i:numbers) {
        cout << i << " ";
    }

}
