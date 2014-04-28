#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
    public:
        Student();
        Student(string firstNameValue, string lastNameValue, string idValue);

        string getName();
        string getID();

        string getInfoString();

        void setFirstName(string val);
        void setLastName(string val);
        void setID(string val);

    private:
        string firstName;
        string lastName;
        string idNum;
};

#endif // STUDENT_H
