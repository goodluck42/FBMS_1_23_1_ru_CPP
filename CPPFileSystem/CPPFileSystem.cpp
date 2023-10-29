#include <iostream>
#include <fstream>
#include <string>

// MSSQL, MongoDb
namespace MSSQL
{
    void Connect()
    {
        std::cout << "MSSQL::Connect()" << '\n';
    }
}

namespace MSSQL
{
    void Disconnect()
    {
        std::cout << "MSSQL::Disconnect()" << '\n';
    }
}

namespace MongoDb
{
    namespace Utility
    {
        void ShowConnectionString()
        {
            std::cout << "mongodb://localhost:27017" << '\n';
        }
    }

    void Connect()
    {
        std::cout << "MongoDb::Connect()" << '\n';
    }

    void Disconnect()
    {
        std::cout << "MongoDb::Disconnect()" << '\n';
    }
}

using MongoDb::Connect;


void foo(std::ifstream& file)
{
}

struct Metadata
{
    char type[16];
    int count;
};

int main(int argc, char* argv[])
{
    /*{
        MongoDb::Connect();
        MSSQL::Connect();

        Connect();

        MongoDb::Utility::ShowConnectionString();
    }*/

    // File write
    /*{
        // Output file stream
        std::ofstream file("data.txt", std::ios::out);

        if (file.is_open())
        {
            file << 42 << '\n';
            file << 123456789 << '\n';
            file << "text" << '\n';
            file << std::boolalpha << true << '\n';

            file.seekp(0, std::ios::beg);

            std::cout << file.tellp() << '\n';

            file << "test" << '\n';
            file << "は" << '\n';
            file.close();
        }
        else
        {
            std::cout << "Fail to open file!" << '\n';
        }
    }*/

    // File read

    {
        std::ifstream file("data.txt");

        if (file.is_open())
        {
            std::string line;

            while (!file.eof())
            {
                std::getline(file, line); // file >> line;

                std::cout << line << '\n';
            }

            std::cout << file.tellg() << '\n';
            // file.seekg();

            file.close();
        }
    }
    
    // Binary
    /*{
        std::fstream file("data.bin", std::ios::out | std::ios::binary);

        if (file.is_open())
        {
            Metadata metadata{"double", 0};
            int size = metadata.count = 12;
            double* arr = new double[size]
            {
                1.2,
                2.3,
                4.5,
                6.7,
                10.2,
                11.2,
                13.9,
                20.10,
                10.90,
                90.1,
                89.11,
                42.13
            };
            
            file.write((char*)&metadata, sizeof(Metadata));
            file.write((char*)arr, sizeof(double) * metadata.count);
            
            file.close();

            delete[] arr;
        }
    }*/

    // 
    {
        std::fstream file("data.bin", std::ios::in | std::ios::binary);

        if (file.is_open())
        {
            Metadata metadata;

            file.read((char*)&metadata, sizeof(Metadata));

            if (std::strcmp(metadata.type, "double") == 0)
            {
                double* arr = new double[metadata.count];

                file.read((char*)arr, sizeof(double) * metadata.count);

                for (int i = 0; i < metadata.count; ++i)
                {
                    std::cout << arr[i] << '\n';
                }
                
                delete[] arr;
            }
            
            file.close();
        }
    }

    std::cout << '\n';
    system("pause");
    
    return 0;
}
