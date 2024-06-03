#include "Student.h"

// Конструктори
Student::Student() : id(0), course(0) {}

Student::Student(int id, const std::string &surname, const std::string &name, const std::string &birthDate, const std::string &phone, const std::string &faculty, int course, const std::string &group)
    : id(id), surname(surname), name(name), birthDate(birthDate), phone(phone), faculty(faculty), course(course), group(group) {}

// Методи set...() та get...()
void Student::setId(int id) { this->id = id; }
int Student::getId() const { return id; }

void Student::setSurname(const std::string &surname) { this->surname = surname; }
std::string Student::getSurname() const { return surname; }

void Student::setName(const std::string &name) { this->name = name; }
std::string Student::getName() const { return name; }

void Student::setBirthDate(const std::string &birthDate) { this->birthDate = birthDate; }
std::string Student::getBirthDate() const { return birthDate; }

void Student::setPhone(const std::string &phone) { this->phone = phone; }
std::string Student::getPhone() const { return phone; }

void Student::setFaculty(const std::string &faculty) { this->faculty = faculty; }
std::string Student::getFaculty() const { return faculty; }

void Student::setCourse(int course) { this->course = course; }
int Student::getCourse() const { return course; }

void Student::setGroup(const std::string &group) { this->group = group; }
std::string Student::getGroup() const { return group; }

// Метод toString()
std::string Student::toString() const {
    return "ID: " + std::to_string(id) + ", Surname: " + surname + ", Name: " + name + ", Birth Date: " + birthDate +
           ", Phone: " + phone + ", Faculty: " + faculty + ", Course: " + std::to_string(course) + ", Group: " + group;
}

// Перевантаження оператора <<
std::ostream& operator<<(std::ostream &os, const Student &student) {
    os << student.toString();
    return os;
}
