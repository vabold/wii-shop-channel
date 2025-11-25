#include <egg/core/eggDisposer.h>

#include <egg/core/eggHeap.h>

namespace EGG
{

Disposer::Disposer( )
{
    mHeap = Heap::findContainHeap( this );
    if( mHeap )
    {
        mHeap->appendDisposer( this );
    }
}

Disposer::~Disposer( )
{
    if( mHeap )
    {
        mHeap->removeDisposer( this );
    }
}

} // namespace EGG
