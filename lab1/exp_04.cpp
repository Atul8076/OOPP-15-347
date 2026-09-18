#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Array traversal using auto and range-based for loop
    int arr[] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (auto val : arr) {
        cout << val << " ";
    }
    cout << endl;

    
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector elements ";
    for (auto &x : vec) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
