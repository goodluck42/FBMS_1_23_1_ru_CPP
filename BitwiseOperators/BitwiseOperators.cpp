#include <iostream>

const short KEY = 19999;

char* encrypt(char* text, short key)
{
    auto len = strlen(text);
    auto encrypted = new char[len + 1]{};

    for (int i = 0; i < len; ++i)
    {
        encrypted[i] = text[i] ^ key;
    }

    return encrypted;
}

char* decrypt(char* text, short key)
{
    return encrypt(text, key);
}

int main(int argc, char* argv[])
{
    // Bitwise AND
    /*{
        // little endian & big endian
        short a = 345; // 00000001 01011001 // 1 + 8 + 16 + 64 + 256
        short b = 100; // 00000000 01100100 // 4 + 32 + 64
                       //        0 01000000

        short result = a & b;

        std::cout << result << '\n';
    }*/

    // Bitwise OR
    /*{
        short a = 28231; // 01101110 01000111
        short b = 17458; // 01000100 00110010
                         // 01101110 01110111
        short result = a | b; 

        std::cout << result;
    }*/

    // Bitwise inversion ~ pt1
    /*{
        int value = 12500; // 00000000 00000000 00110000 11010100
                 //           11111111 11111111 11001111 00101011

        std::cout << ~value << '\n';
    }*/

    // Bitwise inversion ~ pt2
    /*{
        short value = 12500; // 00110000 11010100
                             // 11001111 00101011

        // 32768 - 20267
        std::cout << ~value << '\n';
        std::cout << 32768 - 20267 << '\n';
    }*/

    // ^ XOR
    /*{
        // 
        short a = 123; // 00000000 01111011
        short b = 100; // 00000000 01100100
                       // 00000000 00011111

        short result = (a ^ b);
        std::cout << result << '\n';

        short result2 = result ^ b; // 00000000 00011111
                                    // 00000000 01100100 // b
                                    // 00000000 01111011

        // 00000000 00011111
        // 00000000 01111011
        // 00000000 01100100        
    }*/


    // Encrypt/Decrypt
    /*{
        char text[] = "Hello Python!";
    
        auto result = encrypt(text, KEY);
        // auto decrypted = decrypt(result, 70);
        //
        // std::cout << decrypted << '\n';
        {
        
        
            FILE* file;

            fopen_s(&file, "test.txt", "w");

            if (file == nullptr)
            {
                return -1;
            }

            // for (int i = 0; i < SHRT_MAX; i += 256)
            // {
            //     std::cout << i + 70 << '\n';
            // }
            for (int i = 0; i < SHRT_MAX; ++i)
            {
                auto decrypted = decrypt(result, i);
                auto buffer = new char[16]{};
        
                _itoa_s(i, buffer, 16, 10);
                fputs(buffer, file);
                fputs("--------", file);
                fputs(decrypted, file);
                fputc('\n', file);
            
                delete[] decrypted;
                delete[] buffer;
            }
        
        

            fclose(file);
        }
        delete[] result;
    }*/

    // Right shift
    /*{
        short c = 12345; // 00110000 00111001
                         // 00001100 00001110
        short result = c >> 2;

        std::cout << result << '\n';
    }*/

    // Left shift
    /*{
        short c = 12345; // 00110000 00111001
                         // 11000000 11100100
        short result = c << 2;

        std::cout << result << '\n';
    }*/

    // 00000011
    // << 1
    // 00000110
    // << 1
    // 00001100
    // {
    //     std::cout << (3 << 2);
    // }


    //
    {
        short a = 28525; // 01101111 01101101
        short b = 12892; // 00110010 01011100

        int value{}; // 00000000 00000000 00000000 00000000

        value |= a;

        // 00000000 00000000 01101111 01101101

        value <<= 16;

        // 01101111 01101101 00000000 00000000

        value |= b; // value += b;

        //         a                 b
        // 01101111 01101101 00110010 01011100


        // std::cout << 100029 % (int)std::pow(2, 7);
        
        {
            std::cout << value % (int)std::pow(2, 16) << '\n';
            std::cout << value / (int)std::pow(2, 16) << '\n';
            //std::cout << (short)(value) << '\n';
            //std::cout << (short)(value >> 16) << '\n';
        }
    }


    std::cout << '\n';
    system("pause");
    return 0;
}
