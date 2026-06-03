#include<iostream>
#include<stack>
using namespace std;

int main() {

    //creation
    stack<int> st;
    //insertion
    st.push(10);
    //10
    st.push(20);
    //10,20
    st.push(30);
    //10,20,30
    cout << st.size() << endl;

    st.pop();
    //10,20
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    //10
    cout << st.top() << endl;
    cout << st.size() << endl;

    // if-else condition to check if stack is empty or not
    if(st.empty() == true) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "stack is not empty" << endl;
    }

    // loop to print all the elements of the stack and pop them
    while(st.empty() == false) {
        cout << st.top() << endl;
        st.pop();
    }

    // check swap function of stack
    stack<int> st1, st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st2.push(4);
    st2.push(5);
    st2.push(6);

    st1.swap(st2);

        while(st1.empty() == false) {
            cout << st1.top() << endl;
            st1.pop();
        }
    
        while(st2.empty() == false) {
            cout << st2.top() << endl;
            st2.pop();
        }



    return 0;
}