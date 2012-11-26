#include <stdio.h>
#include <chrono>
#include <iostream>
#include "Find.hpp"
#include "Configure.hpp"

int main(int argc, char const* argv[])
{
    fxref::Find* f = new fxref::Find();

    std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

    f->findTest();

    std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
    std::cout << ' ' << sec.count() << "[sec]" <<  std::endl;

    std::cout << ' ' << fxref::Configure::getNumProcs() << "[procs]" << std::endl;
    delete f;
    return 0;
}

