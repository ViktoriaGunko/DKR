#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"

// Функції для критеріїв вибору даних
std::vector<Student> getStudentsByFaculty(const std::vector<Student> &students, const std::string &faculty);
std::vector<Student> getStudentsByCourseAndFaculty(const std::vector<Student> &students);
std::vector<Student> getStudentsBornAfter(const std::vector<Student> &students, const std::string &year);
std::vector<Student> getStudentsByGroup(const std::vector<Student> &students, const std::string &group);

int main() {
    // Створення масиву об'єктів
    std::vector<Student> students = {
        Student(1, "Gunko", "Victoria", "2005-07-30", "068078****", "RTF", 2, "RE-21"),
        // Додати інші об'єкти студентів
    };

    // Виведення студентів заданого факультету
    std::vector<Student> rtfStudents = getStudentsByFaculty(students, "RTF");
    std::cout << "Students from RTF faculty:\n";
    for (const auto &student : rtfStudents) {
        std::cout << student << std::endl;
    }

    // Інші критерії вибору даних...

    return 0;
}

// Реалізація функцій
std::vector<Student> getStudentsByFaculty(const std::vector<Student> &students, const std::string &faculty) {
    std::vector<Student> result;
    std::copy_if(students.begin(), students.end(), std::back_inserter(result), [&faculty](const Student &student) {
        return student.getFaculty() == faculty;
    });
    return result;
}

std::vector<Student> getStudentsByCourseAndFaculty(const std::vector<Student> &students) {
    // Реалізація...
}

std::vector<Student> getStudentsBornAfter(const std::vector<Student> &students, const std::string &year) {
    // Реалізація...
}

std::vector<Student> getStudentsByGroup(const std::vector<Student> &students, const std::string &group) {
    std::vector<Student> result;
    std::copy_if(students.begin(), students.end(), std::back_inserter(result), [&group](const Student &student) {
        return student.getGroup() == group;
    });
    return result;
}
