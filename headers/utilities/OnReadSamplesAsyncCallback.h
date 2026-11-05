#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSinkWriterStream {
class OnReadSamplesAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnReadSamplesAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnReadSamplesAsyncCallback@CMFSinkWriterStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnReadSamplesAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnReadSamplesAsyncCallback@CMFSinkWriterStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnReadSamplesAsyncCallback@CMFSinkWriterStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnReadSamplesAsyncCallback@CMFSinkWriterStream@@QEAA@XZ
    OnReadSamplesAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnReadSamplesAsyncCallback@CMFSinkWriterStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnReadSamplesAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriterStream
