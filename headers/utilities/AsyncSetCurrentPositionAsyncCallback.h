#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReader::CMFSourceReaderManager {
class AsyncSetCurrentPositionAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AsyncSetCurrentPositionAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncSetCurrentPositionAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@QEAA@XZ
    AsyncSetCurrentPositionAsyncCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@AsyncSetCurrentPositionAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@AsyncSetCurrentPositionAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@AsyncSetCurrentPositionAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@AsyncSetCurrentPositionAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AsyncSetCurrentPositionAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AsyncSetCurrentPositionAsyncCallback@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReader::CMFSourceReaderManager
