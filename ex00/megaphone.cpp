#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int         i = 1;
    int         y = 0;
    std::string arg;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[i])
    {
        y = 0;
        while (argv[i][y])
        {
            arg += toupper(argv[i][y]);
            y++;
        }
        i++;
    }
    std::cout << "string = " << arg << std::endl;
    return 0;
}