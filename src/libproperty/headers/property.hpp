#ifndef INCLUDED_ELH_PROPERTY_HPP
#define INCLUDED_ELH_PROPERTY_HPP

namespace elh {
    template <class T>
    class pointer_holder {
    private:
        T *const ptr_m;
    protected:
        T* get_ptr() const noexcept {
            return ptr_m;
        }
        
    public:
        pointer_holder(T *const init): ptr_m{init} {

        }
    };

    template <class T>
    class property final : public pointer_holder<T> {
    public:
        using base = pointer_holder<T>;

        property(T *const ptr): pointer_holder<T>(ptr) {

        }

        void operator=(const T& v) {
            *base::get_ptr() = v;
        }
        void operator=(T&& v) {
            *base::get_ptr() = std::forward<T>(v);
        }

        operator T() const {
            return *base::get_ptr();
        }

        
    };
}

#endif