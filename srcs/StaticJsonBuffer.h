#pragma once

#include "JsonBuffer.h"

template<int CAPACITY>
class StaticJsonBuffer //: public JsonBuffer
{
public:
    virtual ~StaticJsonBuffer() {}

    int capacity()
    {
        return CAPACITY;
    }

    int size()
    {
        return _size;
    }

protected:
    //virtual JsonNode& allocateNode();

private:
    //JsonNode _buffer[CAPACITY];
    int _size;
};