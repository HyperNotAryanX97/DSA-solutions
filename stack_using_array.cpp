#include <iostream>

using namespace std;
int *stack;
int stack_index = 0, stack_len;

void push(int x) {
    if (stack_index == stack_len) {
        cout << "Overflow!" << endl;
    } else {
        stack[stack_index++] = x;
    }
}

void pop() {
    if (stack_index == 0) {
        cout << "Underflow!" << endl;
    } else {
        cout << "Popped - " << stack[--stack_index] << endl;
    }
}

void fetchstack() {
    for (int i = 0; i < stack_index; i++) {
        cout << stack[i] << endl;
    }
}

void top() {
    cout << "Top element: " << stack[stack_index - 1] << endl;
}

void bottom() {
    cout << "Bottom element: " << stack[0] << endl;
}

int main() {
    cout << "\nEnter size of the stack : ";
    cin >> stack_len;
    stack = new int[stack_len];
    int user_choice, insert_element;
    do {
        
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print stack" << endl;
        cout << "4. Print top element" << endl;
        cout << "5. Print bottom element" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> user_choice;
        if (user_choice == 1) {
            cout << "\nPush: ";
            cin >> insert_element;
            push(insert_element);
        } else if (user_choice == 2) {
            pop();
        } else if (user_choice == 3) {
            fetchstack();
        } else if (user_choice == 4) {
            top();
        } else if(user_choice == 5) {
            bottom();
        }
    } while (user_choice != 6);

    delete[] stack;

    return 0;
}
