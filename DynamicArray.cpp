#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 5;
    string* DArr = new string[n]; // Initial allocation for 5 names

    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> DArr[i];
    }

    string input; // Declare input variable here

    while (true) {
        cout << "Do you want to add more elements? (yes/no): ";
        cin >> input;

        if (input == "yes") {
            string newName;
            cout << "Enter new name to add: ";
            cin >> newName;

            // Create a new, larger temporary array
            string* temp = new string[n + 1];

            // Copy existing elements from old array to new temporary array
            for (int i = 0; i < n; i++) {
                temp[i] = DArr[i];
            }

            // Add the new name to the end of the temporary array
            temp[n] = newName;

            // Delete the old array to free memory
            delete[] DArr;

            // Point DArr to the new, larger array
            DArr = temp;

            // Increment the size counter
            ++n;
        } else if (input == "no") {
            break; // Exit the loop if the user enters "no"
        } else {
            cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
            // Optionally, you might want to clear the input buffer here if you
            // anticipate issues with malformed input, but for simple 'yes/no'
            // responses, it's often not strictly necessary.
        }
    }

    cout << "\n--- All Names ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << DArr[i] << endl;
    }

    // Don't forget to free the dynamically allocated memory
    delete[] DArr;

    return 0; // 
}