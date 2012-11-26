#include <cstdio>
#include "Configure.hpp"

extern "C" {
   #include <unistd.h>
}

namespace fxref {

int Configure::getNumProcs()
{
    return sysconf(_SC_NPROCESSORS_CONF);
}

}


