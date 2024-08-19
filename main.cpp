#include <iostream>  // Include the iostream library to use input-output functionality.
using namespace std;  // Use the standard namespace to avoid prefixing std:: before standard functions.

// Define a stack array of size 100 to hold integer values.
int stack[100];  
// Set the maximum size of the stack.
int n = 100;  
// Initialize the 'top' variable to -1, indicating that the stack is currently empty.
int top = -1;

// Function to push an element onto the stack.
void push(int value) {
    // Check if the stack is full (top is at maximum index).
    if (top >= n-1) {
        // If the stack is full, print "Stack overflow" and don't push the value.
        cout << "Stack overflow" << endl;
    } else {
        // If the stack is not full, increment the top index.
        top++;
        // Place the new value at the top of the stack.
        stack[top] = value;
    }
}

// Function to pop the top element from the stack.
void pop() {
    // Check if the stack is empty (top is below 0).
    if (top <= -1) {
        // If the stack is empty, print "Stack underflow" and don't pop any value.
        cout << "Stack underflow" << endl;
    } else {
        // If the stack is not empty, print the value being popped.
        cout << "The popped element is " << stack[top] << endl;
        // Decrement the top index to remove the top element from the stack.
        top--;
    }
}

// Function to display all elements in the stack.
void display() {
    // Check if the stack is not empty (top is at or above 0).
    if (top >= 0) {
        // Loop through the stack starting from the top element.
        for (int i = top; i >= 0; i--) {
            // Print each element followed by a space.
            cout << stack[i] << " ";
        }
        // Move to the next line after printing all elements.
        cout << endl;
    } else {
        // If the stack is empty, print "Stack is empty".
        cout << "Stack is empty" << endl;
    }
}

// Main function - the entry point of the program.
int main() {
    int character, value;  // Declare variables to store user input.

    // Ask the user to enter a value to push onto the stack.
    cout << "Enter value to be pushed: " << endl;
    cin >> value;  // Read the user's input.
    push(value);  // Call the push function to add the value to the stack.

    // Repeat the process to push more values onto the stack.
    cin >> value;
    push(value);
    cin >> value;
    push(value);

    // Pop the top element from the stack.
    pop();

    // Display the current state of the stack.
    display();

    // Return 0 to indicate successful execution of the program.
    return 0;
}
