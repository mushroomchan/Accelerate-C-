#include <string>

int main()
{
    // 1-1
    const std::string hello = "Hello";
    const std::string message = hello + ", world"+"!";

    // 1-2
    // const std::string exclam = "!";
    // const std::string message = "Hello" + ", world"+ exclam;

    return 0;
}