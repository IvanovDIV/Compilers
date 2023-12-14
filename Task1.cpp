#include <iostream>
#include <vector>
#include <string>

int main() {
    setlocale(LC_ALL, "ru");
    // Ввод цепочек языка L1
    std::vector<std::string> L1;
    int n1;
    std::cout << "Введите количество цепочек в языке L1: ";
    std::cin >> n1;

    std::cout << "Введите цепочки языка L1:\n";
    for (int i = 0; i < n1; ++i) {
        std::string str;
        std::cin >> str;
        L1.push_back(str);
    }

    // Ввод цепочек языка L2
    std::vector<std::string> L2;
    int n2;
    std::cout << "Введите количество цепочек в языке L2: ";
    std::cin >> n2;

    std::cout << "Введите цепочки языка L2:\n";
    for (int i = 0; i < n2; ++i) {
        std::string str;
        std::cin >> str;
        L2.push_back(str);
    }

    // Конкатенация языков L1 и L2
    std::vector<std::string> L1L2;
    for (const auto& s1 : L1) {
        for (const auto& s2 : L2) {
            L1L2.push_back(s1 + s2);
        }
    }

    // Вывод результата
    std::cout << "\nРезультат конкатенации языков L1 и L2 (L1L2):\n";
    for (const auto& result : L1L2) {
        std::cout << result << "\n";
    }

    return 0;
}