#include <vector>
#include <array>
#include <string>

#ifndef TEACHER_TOOLS
#define TEACHER_TOOLS

namespace TeacherTools {
    std::vector<int> round_down_scores(std::vector<double> student_scores);
    int count_failed_students(std::vector<int> student_scores);
    std::array<int, 4> letter_grades(int score);
    std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names);
    std::string perfect_score(std::vector<std::string> student_names, std::vector<int> student_scores);
}

#endif


