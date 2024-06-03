#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <vector>

class Student {
private:
    int id;
    std::string surname;
    std::string name;
    std::string birthDate;
    std::string phone;
    std::string faculty;
    int course;
    std::string group;

public:
    // Конструктори
    Student();
    Student(int id, const std::string &surname, const std::string &name, const std::string &birthDate, const std::string &phone, const std::string &faculty, int course, const std::string &group);

    // Методи set...() та get...()
    void setId(int id);
    int getId() const;

    void setSurname(const std::string &surname);
    std::string getSurname() const;

    void setName(const std::string &name);
    std::string getName() const;

    void setBirthDate(const std::string &birthDate);
    std::string getBirthDate() const;

    void setPhone(const std::string &phone);
    std::string getPhone() const;

    void setFaculty(const std::string &faculty);
    std::string getFaculty() const;

    void setCourse(int course);
    int getCourse() const;

    void setGroup(const std::string &group);
    std::string getGroup() const;

    // Метод toString()
    std::string toString() const;

    // Перевантаження оператора <<
    friend std::ostream& operator<<(std::ostream &os, const Student &student);
};

#endif
