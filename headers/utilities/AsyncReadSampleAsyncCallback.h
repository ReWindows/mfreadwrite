#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReader::CMFSourceReaderManager {
class AsyncReadSampleAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AsyncReadSampleAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncReadSampleAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@QEAA@XZ
    AsyncReadSampleAsyncCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@AsyncReadSampleAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@AsyncReadSampleAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@AsyncReadSampleAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@AsyncReadSampleAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AsyncReadSampleAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AsyncReadSampleAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReader::CMFSourceReaderManager
