#include <print>

int main(int argc, char **argv, char **env)
{
    std::println("begin: {}", argv[0]);

    for (int i = 1; argv[i]; ++i)
    {
        std::println("argv[{}]:{}", i, argv[i]);
    }

    for (int i = 1; env[i]; ++i)
    {
        std::println("env[{}]:{}", i, env[i]);
    }

    std::println("end: {}", argv[0]);

    return 0;
}