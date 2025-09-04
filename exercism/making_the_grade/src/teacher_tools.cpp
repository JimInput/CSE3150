#include <vector>
#include <array>
#include <string>

#include "teacher_tools.h"

namespace TeacherTools {
    std::vector<int> round_down_scores(std::vector<double> student_scores) {
        std::vector<int> rounded_scores;

        for (size_t i = 0; i < student_scores.size(); i++) {
            rounded_scores.emplace_back(static_cast<int>(student_scores.at(i)));
        }

        return rounded_scores;
    }

    int count_failed_students(std::vector<int> student_scores) {
        int count = 0;
        for (size_t i = 0; i < student_scores.size(); ++i) {
            if (student_scores[i] <= 40) count++;
        }
        return count;
    }

    std::array<int, 4> letter_grades(int score) {
        int ratio = (score - 40) / 4;
        std::array<int, 4> output = {0, 0, 0, 0};
        output[3] = score - ratio + 1;
        for (int i = 2; i >= 0; --i) {
            output[i] = output[i+1] - ratio;
        }
        return output;
    }

    std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
        std::vector<std::string> output;
        for (size_t i = 0; i < student_scores.size(); i++) {
            output.emplace_back(std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
        }
        return output;
    }

    std::string perfect_score(std::vector<std::string> student_names, std::vector<int> student_scores) {
        for (size_t i = 0; i < student_names.size(); ++i) if (student_scores[i] == 100) return student_names[i];
        return "";
    }
}

