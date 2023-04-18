#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack overflow!" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack underflow!" << endl;
            return -1;
        }
        int x = arr[top];
        top--;
        return x;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;
    s.push(41);
    s.push(23);
    s.push(4);
    s.push(14);
    s.push(56);
    s.push(1);

    cout << "Top element: " << s.peek() << endl;
    cout << "Elements in stack: ";
    while (!s.isEmpty()) {
        int x = s.pop();
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
