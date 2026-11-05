#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReaderStream {
class AsyncFlushAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AsyncFlushAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncFlushAsyncCallback@CMFSourceReaderStream@@QEAA@XZ
    AsyncFlushAsyncCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@AsyncFlushAsyncCallback@CMFSourceReaderStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@AsyncFlushAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@AsyncFlushAsyncCallback@CMFSourceReaderStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@AsyncFlushAsyncCallback@CMFSourceReaderStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AsyncFlushAsyncCallback@CMFSourceReaderStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AsyncFlushAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReaderStream
