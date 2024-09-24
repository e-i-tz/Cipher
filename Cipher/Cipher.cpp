#include <iostream>

char* encoder(register char example[], register int size) {
    for (int i = 0; i < size; ++i) {
        example[i] = ~example[i]; 
    }
    return example;
}

char* decoder(register char EnExample[], register int size) {
    register char pointer;
    for (int i = 0; i < size; ++i) {
        EnExample[i] = ~EnExample[i];
    }
    return EnExample;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    register int size = 64;
    register char* message = new char[64];

    std::cout << "Введите строку для шифрования: ";
    std::cin.getline(message, size);
    register int newSize = strlen(message);

    char* encoded_message = encoder(message, newSize);
    std::cout << "Вывод зашифрованной строки: " << encoded_message << "\n";

    std::cout << "Вывод дешифрованной строки: ";
    char* decoded_message = decoder(encoded_message, newSize);
    std::cout << decoded_message;

    delete[] message;
    return 0;
}


