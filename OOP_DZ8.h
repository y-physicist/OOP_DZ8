//
// Created by yPhysicist on 16.04.2022.
//

#ifndef OOP_DZ8_OOP_DZ8_H
#define OOP_DZ8_OOP_DZ8_H

#include <string>
#include <iostream>

using namespace std;

class Student {
private:
    string firstName;
    string lastName;
    string group;
public:
    Student();
    ~Student();
    void setfirstName(string name);
    void setlastName(string name);
    void setGroup(string name);
    string getfirstName() const;
    string getlastName() const;
    string getGroup() const;
    friend ostream& operator<<(ostream&, const Student&);
    friend istream& operator>>(istream&, Student&);
    Student& operator=(const Student&);
};

#endif //OOP_DZ8_OOP_DZ8_H
