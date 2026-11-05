#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReader::CMFSourceReaderManager {
class InvokeAppCallbackAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InvokeAppCallbackAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@InvokeAppCallbackAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@InvokeAppCallbackAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@InvokeAppCallbackAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@InvokeAppCallbackAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InvokeAppCallbackAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@QEAA@XZ
    InvokeAppCallbackAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InvokeAppCallbackAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InvokeAppCallbackAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReader::CMFSourceReaderManager
