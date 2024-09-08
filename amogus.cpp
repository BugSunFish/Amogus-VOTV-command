#include <iostream>
#include <Windows.h>
#pragma comment(lib, "Winmm.lib")

int main() {
    std::cout << ">when alien is sus" << std::endl;
    std::cout << ">" << std::endl;
    std::cout << "................" << std::endl;
    std::cout << "...AMONGUS......" << std::endl;
    std::cout << ".UNA.....N......" << std::endl;
    std::cout << ".SGO.....N......" << std::endl;
    std::cout << ".MOGUSAMON......" << std::endl;
    std::cout << "...G.....U......" << std::endl;
    std::cout << "...SA....MO....." << std::endl;

    PlaySound(L"sound.wav", NULL, SND_FILENAME | SND_SYNC | SND_LOOP);

    return 0;
}
