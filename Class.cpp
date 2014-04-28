#include "Class.h"
#include <iostream>
#include <sstream>

Class::Class(string classNameValue, int maxSizeValue) {
    className = classNameValue;
    maxSize = maxSizeValue;
    classSize = 0;
    studentsInClass = new Student* [maxSize]{nullptr};
}

string Class::getClassName() const
{
    return className;
}
int Class::getClassSize() const
{
    return classSize;
}




void Class::addStudent(Student* const ptrAddStudent) {
    if (classSize < maxSize)
    {
        studentsInClass[classSize] = ptrAddStudent;
        classSize++;
    }
    else
    {
        cout << "There is no more space left." << endl;
    }

}


Student& Class::getStudent(int number)
{

    Student* s1;
    s1 = studentsInClass[number];
    return *s1;
}



void Class::print() const
{
    std::stringstream output;
    output << className << endl;
    output << " Students: " << endl;
    for ( int i = 0; i < classSize; i++)
    {
        output << " " << studentsInClass[i]->getInfoString() << endl;
    }
    cout << output.str()<< endl;
}

Class::~Class()
{
    delete[] studentsInClass;
}
