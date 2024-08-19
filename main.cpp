#include <iostream>
using namespace std;

int stack[100], n = 100, top = -1;

void push(int value){
    if(top >= n-1){
        cout << "Stack overflow" << endl;
    } else {
        top++;
        stack[top] = value;
    }
}

void pop(){
    if (top <= -1){
        cout << "Stack underflow" << endl;
    } else {
        cout << "The popped element is " << stack[top] << endl;
        top--;
    }
}

void display(){
    if (top >= 0){
        for (int i = top; i >= 0; i--){
            cout << stack[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
}

int main() {

    int character, value;
    cout << "Enter value to be pushed: " << endl;
    cin >> value;
    push(value);

    cin >> value;
    push(value);
    cin >> value;
    push(value);

    pop();

    display();

    return 0;
}
