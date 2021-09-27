#ifndef _AGGREGATE_H_
#define _AGGREGATE_H_
#include "Iterator.h"
template<class S>
class Aggregate{
    public:
        virtual ~Aggregate(){};
        virtual S* iterator(){};
};
#endif //_AGGREGATE_H_
