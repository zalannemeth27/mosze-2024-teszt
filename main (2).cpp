#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // Pontosvessző hiánya
    for (int i = 0;) //Hiányos ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //I-ig megy a ciklus
    {
        std::cout << "Ertek:"  // ; hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ;
    {
        atlag += b[i] //Hiányzik egy ;
    } 
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
