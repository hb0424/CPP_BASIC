#include <iostream>
#include <string.h>

void string_CXX11()
{
    {
        char szChars[] = {"init chars"};
        std::cout << "char szChars[] = {\"init chars\"}" << std::endl;
        std::cout << "szChars[]: " << szChars << std::endl;
    }

    {
        char szChars[] = "init chars";
        std::cout << "char szChars[] = \"init chars\"" << std::endl;
        std::cout << "szChars[]: " << szChars << std::endl;
    }

    {
        std::string str = {"init chars"};
        std::cout << "std::string str = {\"init chars\"};" << std::endl;
        std::cout << "str: " << str << std::endl;
    }

    {
        std::string str = "init chars";
        std::cout << "std::string str = \"init chars\";" << std::endl;
        std::cout << "str: " << str << std::endl;
    }

    {
        wchar_t szChars[] = L"init chars中国";
        std::cout << "wchar_t szChars[] = L\"init chars中国\";" << std::endl;
        std::cout << "szChars[]: " << szChars << std::endl;
    }

    {
        char16_t szChars[] = u"init chars中国";
        std::cout << "char16_t szChars[] = u\"init chars中国\";" << std::endl;
        std::cout << "szChars[]: " << szChars << std::endl;
    }

    {
        char32_t szChars[] = U"init chars中国";
        std::cout << "char16_t szChars[] = u\"init chars中国\";" << std::endl;
        std::cout << "szChars[]: " << szChars << std::endl;
    }

    {
        char szChars[] = u8"init chars中国";
        std::cout << "char szChars[] = u8\"init chars中国\";" << std::endl;
        std::cout << "szChars[]: " << szChars << std::endl;
    }    

    {
        std::string str = R"(  raw string: init chars中国 \\ \n ' \" "  )";
        std::cout << "std::string str = R\"(  raw string: init chars中国 \\\\ \\n ' \" \\\"  )\";" << std::endl;
        std::cout << "szChars[]: " << str << std::endl;
    }    
}