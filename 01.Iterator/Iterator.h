#ifndef _ITERATOR_H_
#define _ITERATOR_H_

template <class U>
class Iterator{
    public:
        Iterator(){};
        virtual ~Iterator(){};
        virtual bool hasNext(){};
        virtual const U next(){};
};
#endif //_ITERATOR_H_
