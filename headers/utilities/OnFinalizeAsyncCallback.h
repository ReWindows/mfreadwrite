#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSinkWriter::CMFSinkWriterManager {
class OnFinalizeAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@QEAA@XZ
    OnFinalizeAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriter::CMFSinkWriterManager
