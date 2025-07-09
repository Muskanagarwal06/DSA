#include <iostream>
#include <string>

using namespace std;

void addName(string *&DArr, int &size, string newName)
{
    string *temp = new string[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = DArr[i];
    }
    temp[size] = newName;
    delete[] DArr;

    DArr = temp;
    ++size;
}
void deleteName(string *&DArr, int &size, int index)
{
    string *temp = new string[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = DArr[i];
    }
    for (int i = index; i < size - 1; i++)
    {
        temp[i] = DArr[i + 1];
    }
    delete[] DArr;
    DArr = temp;

    --size;
}

void searchName(string *&DArr, int &size, string nametosearch)
{
    for (int i = 0; i < size; i++)
    {
        if (DArr[i] == nametosearch)
        {
            cout << "Name found at index : " << i << endl;
        }
    }
}
int main()
{
    int n = 5;
    string *DArr = new string[n]; // Initial allocation for 5 names

    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> DArr[i];
    }

    string resp; // Declare input variable here

    cout << "\n--- All Names ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << DArr[i] << endl;
    }

    while (true)
    {
        cout << "select operation" << endl;
        cout << "Search" << endl;
        cout << "Add" << endl;
        cout << "delete" << endl;
        cout << "Exit" << endl;

        cin >> resp;

        if (resp == "add" || resp == "Add")
        {

            string newName;
            cout << "Enter new name to add: ";
            cin >> newName;

            addName(DArr, n, newName);
        }
        else if (resp == "search" || resp == "Search")
        {
            string Sname;
            cout << "enter name to search : ";
            cin >> Sname;
            searchName(DArr, n, Sname); // Exit the loop if the user enters "no"
        }
        else if (resp == "exit" || resp == "Exit")
        {
            break;
        }
        else if (resp == "delete" || resp == "Delete")
        {
            int index;
            cout << "Enter index of name to delete: ";
            cin >> index;

            if (index >= 0 && index < n)
            {
                deleteName(DArr, n, index);
                cout << "Name at index " << index << " deleted." << endl;
            }
            else
            {
                cout << "Invalid index. Please enter a valid index." << endl;
            }
        }
        else
        {
            cout << "Invalid input. Please select Above operations ." << endl;
            // Optionally, you might want to clear the input buffer here if you
            // anticipate issues with malformed input, but for simple 'yes/no'
            // responses, it's often not strictly necessary.
        }
    }

    cout << "\n--- All Names ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << DArr[i] << endl;
    }

    // Don't forget to free the dynamically allocated memory
    delete[] DArr;
    // This line is not necessary as it does not delete the last element properly

    return 0; //
}
