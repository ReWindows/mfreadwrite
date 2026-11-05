#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSinkWriterStream {
class OnStreamSinkEventAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnStreamSinkEventAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnStreamSinkEventAsyncCallback@CMFSinkWriterStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnStreamSinkEventAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnStreamSinkEventAsyncCallback@CMFSinkWriterStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnStreamSinkEventAsyncCallback@CMFSinkWriterStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnStreamSinkEventAsyncCallback@CMFSinkWriterStream@@QEAA@XZ
    OnStreamSinkEventAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnStreamSinkEventAsyncCallback@CMFSinkWriterStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnStreamSinkEventAsyncCallback@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriterStream
