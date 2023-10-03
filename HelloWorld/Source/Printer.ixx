module;

#include <fmt/format.h>

export module Main.Printer;

export namespace Main {

class Printer
{
public:

void Print()
{
    fmt::print("Hello World!\n");
}

};

}
