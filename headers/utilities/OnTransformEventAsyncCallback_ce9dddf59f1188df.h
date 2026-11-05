#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSinkWriterStream {
class OnTransformEventAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnTransformEventAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnTransformEventAsyncCallback@CMFSinkWriterStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnTransformEventAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnTransformEventAsyncCallback@CMFSinkWriterStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnTransformEventAsyncCallback@CMFSinkWriterStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnTransformEventAsyncCallback@CMFSinkWriterStream@@QEAA@XZ
    OnTransformEventAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnTransformEventAsyncCallback@CMFSinkWriterStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnTransformEventAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriterStream
