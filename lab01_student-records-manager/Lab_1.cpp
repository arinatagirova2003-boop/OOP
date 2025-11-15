#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <iomanip>

using namespace std;

const int maxlen = 255;

#pragma pack(push, 1)
struct students {
    char lastName[maxlen];
    int numberGroup;
    char placeLiving[maxlen];
    char phoneNumber[maxlen];
};
#pragma pack(pop)

students arr[maxlen];
int student_index = 0;

int menu();
void readFromFile(const char* fileName);
void saveToFile(const char* fileName);
void sortStudents();
void edit();
void addNew();
void del();

int main() {

    setlocale(LC_ALL, "English");

    while (1) {
        switch (menu()) {
        case 1:
            readFromFile("file.dat");
            break;
        case 2:
            saveToFile("file.dat");
            break;
        case 3:
            addNew();
            break;
        case 4:
            del();
            break;
        case 5:
            edit();
            break;
        case 6:
            sortStudents();
            break;
        case 7:
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }
}

int menu() {
    cout << "\n";
    int ans;
    cout << "Choose an option\n";
    cout << "1 - Read from file\n";
    cout << "2 - Save to file\n";
    cout << "3 - Add new record\n";
    cout << "4 - Delete a record\n";
    cout << "5 - Edit a record\n";
    cout << "6 - Sort records\n";
    cout << "7 - Exit\n";
    cout << "\n";
    cout << "Your choice: ";
    cin >> ans;
    return ans;
}

void saveToFile(const char* fileName) {
    ofstream f;
    f.open(fileName, ios::binary);
    f.write((char*)arr, sizeof(students) * student_index);
    f.close();
    cout << "Entered data has been saved to the file\n";
}

void readFromFile(const char* fileName) {
    ifstream f(fileName);
    if (!f) {
        cout << "File does not exist\n";
    }
    else {
        students student;
        student_index = 0;
        while (f.read((char*)&student, sizeof(student))) {
            arr[student_index++] = student;
        }
        f.close();
        cout << "Data has been read from the file\n";
        cout << left << setw(20) << "Last Name" << setw(15) << "Group Number"
            << setw(25) << "Address" << "Phone Number" << endl;

        for (int i = 0; i < student_index; i++) {
            cout << left << setw(20) << arr[i].lastName
                << setw(15) << arr[i].numberGroup
                << setw(25) << arr[i].placeLiving
                << arr[i].phoneNumber << endl;
        }
    }
}

void sortStudents() {
    cout << "Sorting the list by last name " << endl;

    sort(arr, arr + student_index, [](const students& a, const students& b) {
        return strcmp(a.lastName, b.lastName) < 0;
        });

    cout << "\nSorted list:\n";
    cout << left << setw(20) << "Last Name" << setw(15) << "Group Number"
        << setw(25) << "Address" << "Phone Number" << endl;

    for (int i = 0; i < student_index; i++) {
        cout << left << setw(20) << arr[i].lastName
            << setw(15) << arr[i].numberGroup
            << setw(25) << arr[i].placeLiving
            << arr[i].phoneNumber << endl;
    }
    cout << "\n";
}

void addNew() {
    cout << "Adding a new record\n\n";
    cout << "Record number " << student_index + 1 << "\n";
    cin.ignore();
    cout << "Enter last name: ";
    cin.getline(arr[student_index].lastName, maxlen);
    cout << "Enter address: ";
    cin.getline(arr[student_index].placeLiving, maxlen);
    cout << "Enter phone number: ";
    cin.getline(arr[student_index].phoneNumber, maxlen);
    cout << "Enter group number: ";
    cin >> arr[student_index].numberGroup;

    student_index++;
    cout << "\n";

    cout << left << setw(20) << "Last Name" << setw(15) << "Group Number"
        << setw(25) << "Address" << "Phone Number" << endl;

    for (int i = 0; i < student_index; i++) {
        cout << left << setw(20) << arr[i].lastName
            << setw(15) << arr[i].numberGroup
            << setw(25) << arr[i].placeLiving
            << arr[i].phoneNumber << endl;
    }
    cout << "\n";
}

void del() {
    int d;
    cout << "Choose the record number to delete: ";
    cin >> d;
    for (int i = d - 1; i < student_index - 1; i++) {
        arr[i] = arr[i + 1];
    }
    student_index--;
    cout << "\n";

    cout << left << setw(20) << "Last Name" << setw(15) << "Group Number"
        << setw(25) << "Address" << "Phone Number" << endl;

    for (int i = 0; i < student_index; i++) {
        cout << left << setw(20) << arr[i].lastName
            << setw(15) << arr[i].numberGroup
            << setw(25) << arr[i].placeLiving
            << arr[i].phoneNumber << endl;
    }
    cout << "\n";
}

void edit() {
    cout << "Editing a record\n\n";
    int index;
    cout << "Enter the number of the record to edit (from 1 to " << student_index << "): ";
    cin >> index;

    if (index < 1 || index > student_index) {
        cout << "Error: invalid record number.\n";
        return;
    }
    index--;

    cout << "Enter new last name: ";
    cin.ignore();
    cin.getline(arr[index].lastName, maxlen);
    cout << "Enter new group number: ";
    cin >> arr[index].numberGroup;
    cin.ignore();
    cout << "Enter new address: ";
    cin.getline(arr[index].placeLiving, maxlen);
    cout << "Enter new phone number: ";
    cin.getline(arr[index].phoneNumber, maxlen);

    saveToFile("file.dat");
    cout << "Record updated and saved to file.\n";

    cout << "\n";
    cout << left << setw(20) << "Last Name" << setw(15) << "Group Number"
        << setw(25) << "Address" << "Phone Number" << endl;

    for (int i = 0; i < student_index; i++) {
        cout << left << setw(20) << arr[i].lastName
            << setw(15) << arr[i].numberGroup
            << setw(25) << arr[i].placeLiving
            << arr[i].phoneNumber << endl;
    }
    cout << "\n";
}
