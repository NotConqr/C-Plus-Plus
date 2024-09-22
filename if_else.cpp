// if/else gate in c++
#include <iostream>
#include <cstdlib>
#include <ctime>

int Global_Max = 100;
int Global_Min = 1;
int Chooseint = 50;

int main() {

    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    // Generate a random number between Global_Min and Global_Max
    int random_ = rand() % (Global_Max - Global_Min + 1) + Global_Min;

    if (Chooseint == random_) {
        std::cout << "The number you chose is equal to the random number, which is " << random_ << std::endl;
    } else if (Global_Max == random_) {
        std::cout << "The random number is equal to the max number, which is " << random_ << std::endl;
    } else if (Global_Min == random_) {
        std::cout << "The random number is equal to the min number, which is " << random_ << std::endl;
    } else {
        std::cout << "The random number doesn't match any special numbers. The number is " << random_ << std::endl;
        //   ^^            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^            ^^^         ^^^
        //  print                               custom text                                   varible       end
    }

    return 0;
}
