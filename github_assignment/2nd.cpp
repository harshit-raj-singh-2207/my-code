#include <iostream>
using namespace std;
int main() {
    int subject_1, subject_2, subject_3;

    cout << "marks of Subject 1: ";
    cin >> subject_1;
    cout << "marks of Subject 2: ";
    cin >> subject_2;
    cout << "marks of subject 3: ";
    cin >> subject_3;

    if (subject_1 >= 33 && subject_2 >= 33 && subject_3 >= 33) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}