#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


// r - read
// w - write (creates file if not exists)
// a - append
// b - binary (rb / wb / ab)


void write(int* buffer, int size);
int* read(int& size);

int main(int argc, char* argv[])
{
    /*{
        FILE* file = std::fopen("data.txt", "w, ccs=utf-8");
    
        if (file != nullptr)
        {
            //(void)std::fwprintf(file, L"text: %ls", L"əəğğğəəə");
        
            //(void)std::fputc('@', file);
            //(void)std::fputs("Hello C++", file);


            {
                int a = 42;
                // %c - char
                // %i, %d - int
                // %s - string
                // %ls - long string (wchar_t)
                // %p - address
                (void)std::fwprintf(file, L"My number: %i, %p", a, (void*)&a);
            }
        
            (void)std::fputwc(L'ə', file);
            (void)std::fputws(L"@\nтест\nhello\nsələm\nこんにちは", file);
        
            (void)std::fflush(file);
            (void)std::fclose(file);
        }
    }*/

    
    /*{
        FILE* file = std::fopen("data.txt", "r, ccs=utf-8");
        FILE* out = std::fopen("out.txt", "w, ccs=utf-8");

        if (file != nullptr && out != nullptr)
        {
            wchar_t s1 = std::fgetwc(file); // read symbol
            wchar_t s2 = std::fgetwc(file); // read next symbol
            
            (void)std::fwprintf(out, L"%lc\n%lc", s1, s2);
            
            (void)std::fclose(file);
            (void)std::fclose(out);
        }
    }*/

    /*{
        FILE* file = std::fopen("data.txt", "r, ccs=utf-8");
        FILE* out = std::fopen("out.txt", "w, ccs=utf-8");

        if (file != nullptr && out != nullptr)
        {
            wchar_t* buffer = new wchar_t[32];
            std::fgetws(buffer, 32, file); // read string

            wchar_t s = std::fgetwc(file); // read next symbol after previous call
        
            (void)std::fwprintf(out, L"%ls\n%lc", buffer, s);
            
            (void)std::fclose(file);
            (void)std::fclose(out);

            delete[] buffer;
        }
    }*/

    {
        FILE* file = std::fopen("data.txt", "r, ccs=utf-8");
        FILE* out = std::fopen("out.txt", "w, ccs=utf-8");

        if (file != nullptr && out != nullptr)
        {
            (void)std::fseek(file, 5 * sizeof(wchar_t), SEEK_CUR);

            wchar_t* buffer = new wchar_t[32];
            
            std::fgetws(buffer, 32, file);

            (void)std::fwprintf(out, L"%ls", buffer);
            
            (void)std::fclose(file);
            (void)std::fclose(out);

            delete[] buffer;
        }
    }
    
    return 0;
}
