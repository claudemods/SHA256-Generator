#include <iostream>
#include <cstdlib>

// Custom Colors
#define COLOR_RED     "\033[31m"
#define COLOR_RGB_CYAN "\033[38;2;0;255;255m"  // Your exact RGB cyan
#define COLOR_RESET   "\033[0m"

int main() {
    // Your ASCII art in red
    std::cout << COLOR_RED << R"(
░█████╗░██╗░░░░░░█████╗░██╗░░░██╗██████╗░███████╗███╗░░░███╗░█████╗░██████╗░░██████╗
██╔══██╗██║░░░░░██╔══██╗██║░░░██║██╔══██╗██╔════╝████╗░████║██╔══██╗██╔══██╗██╔════╝
██║░░╚═╝██║░░░░░███████║██║░░░██║██║░░██║█████╗░░██╔████╔██║██║░░██║██║░░██║╚█████╗░
██║░░██╗██║░░░░░██╔══██║██║░░░██║██║░░██║██╔══╝░░██║╚██╔╝██║██║░░██║██║░░██║░╚═══██╗
╚█████╔╝███████╗██║░░██║╚██████╔╝██████╔╝███████╗██║░╚═╝░██║╚█████╔╝██████╔╝██████╔╝
░╚════╝░╚══════╝╚═╝░░╚═╝░╚═════╝░╚═════╝░╚══════╝╚═╝░░░░░╚═╝░╚════╝░╚═════╝░╚═════╝░
)" << COLOR_RESET << std::endl;

// Your cyan title (using your RGB cyan)
std::cout << COLOR_RGB_CYAN << "claudemods sha256 generator v1.0" << COLOR_RESET << std::endl;

// Get filename (using your RGB cyan for input prompt)
std::string filename;
std::cout << COLOR_RGB_CYAN << "Enter file to hash: " << COLOR_RESET;
std::cin >> filename;

// Generate SHA256
std::string cmd = "sha256sum " + filename + " > " + filename + ".sha256";
system(cmd.c_str());

// Output result in your RGB cyan
std::cout << COLOR_RGB_CYAN << "SHA256 saved to: " << filename << ".sha256" << COLOR_RESET << std::endl;

return 0;
}
