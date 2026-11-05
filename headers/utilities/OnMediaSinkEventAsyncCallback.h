#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSinkWriter::CMFSinkWriterManager {
class OnMediaSinkEventAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnMediaSinkEventAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnMediaSinkEventAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnMediaSinkEventAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnMediaSinkEventAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnMediaSinkEventAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnMediaSinkEventAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@QEAA@XZ
    OnMediaSinkEventAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnMediaSinkEventAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnMediaSinkEventAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriter::CMFSinkWriterManager
