#include <iostream>
#include <vector>
#include <array>
#include <string>

#include "teacher_tools.h"

template<typename T>
void print_vector(std::vector<T> vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

template<typename T, std::size_t N>
void print_array(std::array<T, N> arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {

    // part 1
    std::vector<double> scores = {90.33, 40.5, 55.44, 70.05, 30.55, 25.45, 80.45, 95.3, 38.7, 40.3};
    print_vector(scores);

    // part 2
    std::vector<int> rounded_scores = TeacherTools::round_down_scores(scores);
    print_vector(rounded_scores);

    // part 3
    int failed_students = TeacherTools::count_failed_students(rounded_scores);
    std::cout << failed_students << std::endl;

    // part 4
    std::array<int, 4> grade_barriers = {0, 0, 0, 0};
    grade_barriers = TeacherTools::letter_grades(88);
    print_array(grade_barriers);

    // part 4
    std::vector<int> student_scores = {100, 99, 90, 84, 66, 53, 47};
    std::vector<std::string> student_names = {"Joci", "Sara","Kora","Jan","Indra","Bern", "Fred"};
    std::vector<std::string> student_ranks = TeacherTools::student_ranking(student_scores, student_names);
    print_vector(student_ranks);


    // part 5
    std::string perfect_student = TeacherTools::perfect_score(student_names, student_scores);
    std::cout << perfect_student << std::endl;

    return 0;
}

