// Q1- 5 7
// Q2- set
// Q3- O(logn)
// Q4- they are special data structures containers that have thier own methods and libraries.
// Q5- push_back()
// Q6- 4
// Q7- 1
// Q8- O(1)
// Q9- gives a runtime error meaning it will run infinitly
// Q10- it is a special type of pointer that take a datatype and iterates a special data struc.
// Part B
//      ordering type  |  duplicates | size | complexity
// Q1-  Array: {not ordered, Yes, fixed, O(1)}
//      vector: {not ordered, Yes, dynamic, O(1)}
//      set: {ordered, NO, dynamic, O(logn)}
// Q2-  binary search: sorts the data
//      compare between x searched val and m average
//       if x > m-> we exclude all the data less than m by adjusting l value to me m+1
//       if x < m-> we exclude all the data more than m by adjusting r value to me m-1
//       if x = m-> then the value is founded.
// Q3-  it's a way of typing algorithms,
//      consisting of:
// 1- input
// 2- base case
// 3- transition
// we need base case to prevent it from runing infinitly
// Part c
// Q1- no change occures on the vector elements values bec. we use passing by value in the iterator.
// Part d
// Part e
#include<bits/stdc++.h>
#include<map>
#include<deque>
#define ll long long
#define endl '\n'
using namespace std;
void addStudent(vector<pair<string, int>> &db, string name, int grade) {
    db.emplace_back(name, grade);
}
string SearchStudent(vector<pair<string, int>> &db, int id) {
    return db[id].first;
}
void DisplayAllStudents(vector<pair<string, int>> &db) {
    cout << "ID" << " | " << "Name" << " | " << "Grade" << endl;
    for (int i = 0; i < db.size(); i++) {
        cout << i << " | " << db[i].first << " | " << db[i].second << " | " << endl;
    }
}
int AvgGrade(vector<pair<string, int>> &db) {
    int sum = 0;
    for (int i = 0; i < db.size(); i++) {
        sum += db[i].second;
    }
    return sum/db.size();
}
void ShowMinue() {
    cout << "Chose an option: " << endl;
    cout << "1- Add a student: " << endl;
    cout << "2- Search student by id: " << endl;
    cout << "3- Display all students: " << endl;
    cout << "4- display average grade: " << endl;
    cout << "5- Exit program: " << endl;
}

int main() {
    vector<pair<string, int>> db;
    int choice;
    do {
        ShowMinue();
        cin >> choice;
        switch (choice) {
            case 1: {
                string name;
                int grade;
                cout << "Enter student name: " << endl;
                cin >> name;
                cout << "Enter student grade: " << endl;
                cin >> grade;
                addStudent(db, name, grade);
                cout << "Student added successfuly! " << endl;
                break;
            }
            case 2: {
                int id;
                cout << "Enter student id: " << endl;
                cin >> id;
                SearchStudent(db, id);
                break;
            }
            case 3: {
                DisplayAllStudents(db);
                break;
            }
            case 4: {
                cout << "Average grades: " << endl;
                cout << AvgGrade(db) << endl;
                break;
            }
            default:
                cout << endl << "[Invalid Option] Please enter a valid number from the menu." << endl;
                break;
        }

    } while (choice != 5);
    cout << endl << "Thank you for using the program!" << endl;
}

