#pragma once

#include <egg/core/eggDisposer.h>

namespace EGG
{

class Heap : Disposer
{
public:
    void appendDisposer( Disposer *disposer )
    {
        nw4r::ut::List_Append( &mChildren, disposer );
    }

    void removeDisposer( Disposer *disposer )
    {
        nw4r::ut::List_Remove( &mChildren, disposer );
    }

    static Heap *findContainHeap( const void *block );

private:
    u8 _10[ 0x24 - 0x10 ];
    nw4r::ut::List mChildren;
};

} // namespace EGG
