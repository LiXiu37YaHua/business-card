#include <iostream>
#include <string>

int main()
{
    // Business card information
    std::string name = "\033[38;2;244;194;194mLuminita\033[0m";
    std::string email = "\033[38;2;244;194;194myour.Marissa.lanza@snhu.edu\033[0m";
    std::string phone = "\033[38;2;244;194;194m978-227-2310\033[0m";
    std::string github = "\033[38;2;244;194;194mhttps://github.com/LiXiu37YaHua/CPlusplus-Program\033[0m";

    // Display business card in light blue color
    std::cout << "\033[38;5;117m---------------------------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[38;5;117m|                                                              |\033[0m" << std::endl;
    std::cout << "\033[38;5;117m|        BUSINESS CARD                                         |\033[0m" << std::endl;
    std::cout << "\033[38;5;117m|                                                              |\033[0m" << std::endl;
    std::cout << "\033[38;5;117m---------------------------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[38;5;117m|  Name:  " << name << "\033[0m" << std::endl;
    std::cout << "\033[38;5;117m|  Email: " << email << "\033[0m" << std::endl;
    std::cout << "\033[38;5;117m|  Phone: " << phone << "\033[0m" << std::endl;
    std::cout << "\033[38;5;117m|  GitHub: " << github << "\033[0m" << std::endl;
    std::cout << "\033[38;5;117m|  \033[1mPlease Hire Me!\033[0m" << "\033[0m" << std::endl;
    std::cout << "\033[38;5;117m----------------------------------------------------------------\033[0m" << std::endl;

    // Display console message in light blue color
    std::cout << "\033[38;5;117mC:\\Users\\mlanz\\source\\repos\\business card\\x64\\Debug\\business card.exe (process 6480) exited with code 0.\033[0m" << std::endl;

    return 0;
}
