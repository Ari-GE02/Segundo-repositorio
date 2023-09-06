#include <iostream>

int main() {

    bool button_OnOff{false};

    std::cout << "Turn on Robot: 1"<< std::endl;
    std::cin>> button_OnOff;

    while (button_OnOff == 1) {

        std::cout << button_OnOff<< std::endl;
        break;

        }

    std::cout << button_OnOff;

    return 0;
}