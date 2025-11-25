#pragma once

#include <nw4r/ut/list.h>

namespace EGG
{

class Heap;

class Disposer
{
public:
    Disposer( );
    virtual ~Disposer( );

private:
    Heap *mHeap;
    nw4r::ut::Link mLink;
};

} // namespace EGG
