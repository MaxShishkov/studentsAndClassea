#ifndef CLASS_H
#define CLASS_H

#include "Student.h"

#include <string>

using namespace std;

class Class
{
public:
    Class(string classNameValue, int maxSizeValue);
    virtual ~Class();

    string getClassName() const;
    int getClassSize() const;


    /**
     * \brief Adds a student to the list of pointers to enrolled students.
     *
     * \param ptrAddStudent Student* const Memory address of the student we want to
     *                                      add to our list of student pointers
     * \return void
     *
     *  Assumed we do NOT own the objects pointed to by the list
     */
    void addStudent(Student* const ptrAddStudent);

    /**
     * \brief Returns a reference to the specified student in the class (0 gets first, 1 gets second...)
     *
     * \param number int Assumed to be between 0 and (classsize - 1)
     * \return Student& Student at that particular location in class.
     *
     * Precondition : we will assume this is only called on a valid index in the array.
     *   Return value will be undefined if indexNumber is not valid
     *    (If you want can return a made up temporary student like stub version does in this case)
     *
     * Caller does not take ownership over the object.
     *
     */
    Student& getStudent(int indexNumber);


    /**
     * \brief Prints out all details to console.
     *
     *  Expected format:
     *  CS161
     *  Students :
     *     John Smith (K123123)
     *     Katie Jones (K232343)
     *     ...
     */
    void print() const;

private:
    string className;
    int maxSize;         //how many students can be enrolled
    int classSize;       //how many students are enrolled
    Student** studentsInClass;

    //TODO - storage for students

};

#endif // CLASS_H
