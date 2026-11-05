#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSinkWriter::CMFSinkWriterManager {
class InvokeAppCallbackAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InvokeAppCallbackAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@InvokeAppCallbackAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@InvokeAppCallbackAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@InvokeAppCallbackAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@InvokeAppCallbackAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InvokeAppCallbackAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@QEAA@XZ
    InvokeAppCallbackAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InvokeAppCallbackAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InvokeAppCallbackAsyncCallback@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriter::CMFSinkWriterManager
