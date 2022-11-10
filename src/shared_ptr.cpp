#include <iostream>

template<class T>
class _shared_ptr{
 private:
    T *p;
    static int resource_count;

 public:
    _shared_ptr() {

    }

    _shared_ptr(T *p) {
        
        this->p = p;
    }

    _shared_ptr(const _shared_ptr & sp) {
        std::cout << "inside copy" << std::endl;
        ++resource_count;
        this->p = sp.p;
    }

    _shared_ptr & operator = (const _shared_ptr & sp){
        ++resource_count;
        this->p = sp.p;
    }

    //move

    _shared_ptr(_shared_ptr&& sp) {
        this->p = sp.p;
        sp.p = nullptr;
    }

    T & operator * () {return *(this->p);}

    T & operator -> () {return  *(this->p);}

    _shared_ptr & operator = (_shared_ptr&& sp){
        std::cout << "inside =" << std::endl;
        this->p = sp.p;
        sp.p = nullptr;
    }

    ~_shared_ptr() {
        --resource_count;
        if(resource_count == 0) {
            delete p;
            this->resource_count = 0;
        }
    }
};

template<class T>
int _shared_ptr<T>::resource_count = 0;

int main() {
    int *p = new int(10);

    _shared_ptr<int> ptr1(p);
    _shared_ptr<int> ptr2(ptr1);
    _shared_ptr<int> ptr3;
    ptr3 = ptr2;
    // _shared_ptr<int> ptr4(p);
    // _shared_ptr<int> ptr5(p);

    std::cout << *ptr2 << std::endl;
    // std::cout << *ptr1 << std::endl;
    // std::cout << *ptr2 << std::endl;
    // std::cout << *ptr3 << std::endl;




    return 0;
}