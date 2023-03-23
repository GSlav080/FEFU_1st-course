#include <iostream>
#include <algorithm>


struct cordinats {
    std::string str;
    int y;
    int x;
};
bool find(std::string &str1, std::string &str2) {
    if (str1.size() < str2.size())
        return true;
    else if (str2.size() < str1.size())
        return false;

    for (int i = 0; i < str1.size(); i++) {
        if (int(str1[i]) < int(str2[i]))
            return true;
        else if (int(str1[i]) > int(str2[i]))
            return false;
    }

    return false;
}
int main() {
    int a, b;
    std::cin >> a >> b;
    auto **otvet = new std::string *[a + 1];
    for (int i = 0; i <= a; i++) {
        otvet[i] = new std::string[b + 1];
        std::fill(&otvet[i][0], &otvet[i][b + 1], "-1");
    }
    cordinats lins[8] = {
            {"0", 6, 0},
            {"1", 2, 1},
            {"2", 3, 1},
            {"3", 2, 2},
            {"4", 4, 0},
            {"5", 5, 0},
            {"6", 4, 1},
            {"8", 7, 0},
    };
    for (auto &digit: lins) {
        if (digit.str == "0")
            continue;
        if (digit.y <= a && digit.x <= b)
            otvet[digit.y][digit.x] = digit.str;
    }
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            std::string new_value = otvet[i][j];
            for (auto &digit: lins) {
                int prev_y = i - digit.y, prev_x = j - digit.x;
                if (prev_y >= 0 && prev_x >= 0) {
                    auto prev_num = otvet[prev_y][prev_x];
                    auto this_num = prev_num + digit.str;
                    if (prev_num != "-1" && (new_value == "-1" or find(this_num, new_value)))
                        new_value = this_num;
                }
            }
            otvet[i][j] = new_value;
        }
    }
    if (otvet[a][b] == "-1")
        std::cout << "Wrong";
    else
        std::cout << otvet[a][b];
    return 0;
}
