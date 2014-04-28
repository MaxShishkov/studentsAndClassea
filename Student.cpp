#include "Student.h"

Student::Student()
{
    firstName = "?";
    lastName = "?";
    idNum = "?";
}

Student::Student(string firstNameValue, string lastNameValue, string idValue)
{
    firstName = firstNameValue;
    lastName = lastNameValue;
    idNum = idValue;
}

string Student::getName()
{
    return firstName + " " + lastName;
}

string Student::getID()
{
    return idNum;
}

string Student::getInfoString()
{
    return getName() + " (" + idNum + ")";
}

void Student::setID(string val)
{
    idNum = val;
}

void Student::setFirstName(string val)
{
    firstName = val;
}

void Student::setLastName(string val)
{
    lastName = val;
}

