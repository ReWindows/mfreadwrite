#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSinkWriterStream {
class OnFeedInputAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnFeedInputAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnFeedInputAsyncCallback@CMFSinkWriterStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnFeedInputAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnFeedInputAsyncCallback@CMFSinkWriterStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnFeedInputAsyncCallback@CMFSinkWriterStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnFeedInputAsyncCallback@CMFSinkWriterStream@@QEAA@XZ
    OnFeedInputAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnFeedInputAsyncCallback@CMFSinkWriterStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnFeedInputAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriterStream
