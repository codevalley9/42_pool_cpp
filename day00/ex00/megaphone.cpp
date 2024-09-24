#include <iostream>
#include <getopt.h>
#include <cctype> // для функции toupper

int megaphone(int argc, char *argv[]) 
{
    if(argc > 1)
    {
        for(int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
            {
                std::cout << (char)toupper(argv[i][j]);
            }
            std::cout << std::endl;
        }
    } else 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}

int main(int argc, char *argv[]) 
{
    megaphone(argc, argv);
    return 0;
}