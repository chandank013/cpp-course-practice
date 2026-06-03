#include <iostream>;
#include <vector>;
#include <map>;
#include <set>;
#include <list>;
#include<algorithm>

using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2 ) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    if (p1.first > p2.first) return true;
    else return false
}

int main() {

    int arr[5] = {2,5,3,6,8};

    sort(arr, arr+5);

    for(int val: arr) {
        cout << val << endl;
    }
    cout << endl << " ";


    vector<pair<int, int>> vec = {{3,1}, {4,5}, {3,2},{7,4},{5,2}};

    sort(vec.begin(), vec.end(), comparator);

    for(auto p:vec)
    {  
        cout << p.first << " " << p.second << endl ;
    }
    cout << endl << " ";

    return 0;
}