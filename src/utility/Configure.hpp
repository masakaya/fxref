#ifndef CONFIGURE_H
#define CONFIGURE_H

namespace fxref {

class Configure {
    public:
        static int getNumProcs();

    private:
        Configure(){}
        ~Configure(){}
};

} // namespace

#endif //CONFIGURE_H
