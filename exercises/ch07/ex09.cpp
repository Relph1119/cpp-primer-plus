//
// Created by HRF on 2022/2/5.
//
#include <iostream>

using namespace std;
const int SLEN = 30;
struct Student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

/*
getinfo() has tow arguments: a pointer to the first element of
an array of student structures and an int representing the
number of element of the array. The function solicits and
stores data about student. It terminates input upon filling
the array or upon encountering a blank line for the student
name. The function returns the actual number of array elements
filled.
*/
int getinfo(Student pa[], int n);

//display1() take a student structures as an argukment
//and displays its contents
void display1(Student st);

//display2() take the address of student structures as an
//argument and displays the structure's contents
void display2(const Student *ps);

//display3() takes the address of the first element of an array
//of student structures and the number of the array elements as
//arguments and displays the cotents of structures
void display3(const Student pa[], int n);

int main() {
    cout << "Enter the class size:";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    auto *ptr_stu = new Student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < class_size; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(Student pa[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        cout << "Please input the student's name:";
        cin.getline(pa[i].fullname, SLEN);
        cout << "Please input the student's hobby:";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Please input the student's level:";
        cin >> pa[i].ooplevel;
        cin.get();
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input. process terminated\n";
            break;
        }
        count++;
    }
    return count;
}

void display1(Student st) {
    cout << "Student Name: " << st.fullname << endl;
    cout << "Student hobby: " << st.hobby << endl;
    cout << "Student level: " << st.ooplevel << endl << endl;
}

void display2(const Student *ps) {
    cout << "Student Name: " << ps->fullname << endl;
    cout << "Student hobby: " << ps->hobby << endl;
    cout << "Student level: " << ps->ooplevel << endl << endl;
}

void display3(const Student pa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Student Name: " << pa[i].fullname << endl;
        cout << "Student hobby: " << pa[i].hobby << endl;
        cout << "Student level: " << pa[i].ooplevel << endl << endl;
    }
}