#ifndef frogs_Clock_hpp
#define frogs_Clock_hpp

#include "actr.hpp"

namespace frogs {

    class Clock : public actr::ActrBase {
    private:
        int year_interval = 500;

    protected:
        actr::ActrBase* clone();

    public:
        Clock();

        void main_loop();
    };
}

#endif
