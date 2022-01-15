#include "main.h"
#include <iostream>


const unsigned char ARRAY_SIZE = 5;

const char *variables[ARRAY_SIZE] = { "MIXaisealx",
                                      "mixAIsealx",
                                      "mixaiSEalx",
                                      "mixaiseALx",
                                      "mixaisealX" };

int main(void) {
    std::ios_base::sync_with_stdio(false);

    std::cout << "  FL  => MixailAlexeevich" << std::endl;
    crossleep(2);
    std::cout << " F-L  => Mixail Alexeevich" << std::endl;
    crossleep(2);
    std::cout << "F-F-L => Mixail Sen Alexeevich" << std::endl;
    crossleep(2);
    std::cout << "f-f-l => Mixai Se Alx" << std::endl;
    crossleep(2);
    std::cout << " ffl  => MixaiSeAlx" << std::endl;
    crossleep(2);
    std::cout << "-i ffl=> mixaisealx" << std::endl;
    crossleep(2);
    std::cout << std::endl << "    NOW" << std::endl;
    crossleep(1);
    std::cout << "   SERCH" << std::endl;
    crossleep(1);
    std::cout << "    BY" << std::endl;
    crossleep(1);
    std::cout << std::endl << "@mixaisealx" << std::endl;
    crossleep(3);
    std::cout << "github.com/mixaisealx" << std::endl << std::endl;
    crossleep(5);

    while (true) {
        std::cout << variables[((unsigned)rand()) % ARRAY_SIZE] << std::endl;
        crossleep(1);
    }

    return 0;
}