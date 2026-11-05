#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSinkWriter::CMFSinkWriterManager {
class AsyncFinalizeAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AsyncFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@QEAA@XZ
    AsyncFinalizeAsyncCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@AsyncFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@AsyncFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@AsyncFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@AsyncFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AsyncFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AsyncFinalizeAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriter::CMFSinkWriterManager
