#ifndef INCLUDED_ELH_PROPERTY_HPP
#define INCLUDED_ELH_PROPERTY_HPP

namespace elh {
    template <class T>
    class property final {
        T value;
    public:

        template <class... Args>
        property(Args... args): value{args...} {
            
        }
    };
}

#endif