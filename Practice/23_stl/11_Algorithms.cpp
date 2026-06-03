#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    // Max and Min
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min: " << *min_element(v.begin(), v.end()) << endl;
    

    // Sort
    sort(v.begin(), v.end(), greater<int>());

    cout << "Sorted in descending order: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Binary Search
    int key = 3;
    if (binary_search(v.begin(), v.end(), key, greater<int>())) {
        cout << "\nElement " << key << " found in the vector." << endl;
    } else {
        cout << "\nElement " << key << " not found in the vector." << endl;
    }

    // Count set bits

    long int num1 = 29; // Binary: 11101
    int count = __builtin_popcount(num1);
    cout << "Number of set bits in " << num1 << " is: " << count << endl;

    long  int num2 = 15; // Binary: 1111
    count = __builtin_popcountl(num2);
    cout << "Number of set bits in " << num2  << " is: " << count << endl;

    long long int num3 = 29; // Binary: 11101
    count = __builtin_popcountll(num3);
    cout << "Number of set bits in " << num3 << " is: " << count << endl;

    return 0;
}