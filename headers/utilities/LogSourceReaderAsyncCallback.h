#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReader {
class LogSourceReaderAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LogSourceReaderAsyncCallback@CMFSourceReader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@LogSourceReaderAsyncCallback@CMFSourceReader@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@LogSourceReaderAsyncCallback@CMFSourceReader@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@LogSourceReaderAsyncCallback@CMFSourceReader@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@LogSourceReaderAsyncCallback@CMFSourceReader@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LogSourceReaderAsyncCallback@CMFSourceReader@@QEAA@XZ
    LogSourceReaderAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LogSourceReaderAsyncCallback@CMFSourceReader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LogSourceReaderAsyncCallback@CMFSourceReader@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReader
