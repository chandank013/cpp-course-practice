#include <iostream>
#include <vector>
#include <list>
#include <deque>


using namespace std;


int main() {

    // pair<int, int> p = {1, 5};
    // cout << p.first << " " << p.second << endl;

    // pair<int, string> p2(20, "World");
    // cout << p2.first << " " << p2.second << endl;

    // pair<int, string> p3(p2);
    // cout << p3.first << " " << p3.second << endl;

    // pair< int, pair<string, int> > p4(10, {"Hello", 100});
    // cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl;

    vector<pair<int, int> > v = {{1, 2}, {3, 4}, {5, 6}};

    v.push_back({7, 8});  // insert a pair at the end of the vector
    v.emplace_back(9, 10); // construct a pair in place at the end of the vector

    for(auto p: v) {
        cout << p.first << " " << p.second << endl;
    }


    return 0;
}