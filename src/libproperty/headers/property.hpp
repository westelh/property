#ifndef INCLUDED_ELH_PROPERTY_HPP
#define INCLUDED_ELH_PROPERTY_HPP

namespace elh {
    template <class T>
    class property {
        T& ref;
    public:
        property(T& reference): ref{reference} { }

        operator T() noexcept {
            return ref;
        }

        operator const T() const noexcept {
            return ref;
        }

        property<T>& operator=(const T& t) noexcept {
            ref = t;
            return *this;
        }
    };
}

#endif