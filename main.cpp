#include <iostream>
#include <fstream>

#include "Student.h"
#include "Class.h"

using namespace std;

int main()
{

    ifstream inFile;
    inFile.open ("students.txt");
    int numOfStudents = 0;
    inFile >> numOfStudents;

    Student *studentPtr;

    studentPtr = new Student[numOfStudents];


    for (int i = 0; i < numOfStudents; i++)
    {
         Student temp;
        string firstN,lastN,id;
        inFile >> firstN;
        inFile >> lastN;
        inFile >> id;

        temp.setFirstName(firstN);
        temp.setLastName(lastN);
        temp.setID(id);
        studentPtr[i] = temp;

    } //end for loop


    Class c1 ("EXTA101", 20);

    for (int i = 0; i < 20; i++)
    {
    c1.addStudent(&studentPtr[i]);
    }
    c1.print();

    Class c2 ("XYZ101", 25);

    for (int i = 0; i < 25; i++)
    {
        c2.addStudent(&studentPtr[2*i]);
    }
    c2.print();

    studentPtr[6].setFirstName("Jorge");
    studentPtr[6].setLastName("Jorero");

    c1.print();
    c2.print();

    c1.getStudent(2).setFirstName("J");

    c2.print();


    delete[] studentPtr;
    studentPtr = nullptr;

    return 0;
}
