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

        void operator=(const T& v) {
            value = v;
        }

        operator T() const {
            return value;
        } 
    };
}

#endif