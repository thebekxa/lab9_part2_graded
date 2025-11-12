#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;
    int x, odd=0, even=0;
    for(int i=0; true; i++) {
        cin>>x;
        if (x<=-1) {
            break;
        }
        if (x%2==0) {
            even++;
        }else {
            odd++;
        }
        numbers.push_back(x);
    }
    for(int i:numbers) {
        cout << i << " ";
    }
    cout <<  endl <<  "Even: " << even;
    cout << endl << "Odd: " << odd;
}
