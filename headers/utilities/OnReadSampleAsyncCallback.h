#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReaderStream {
class OnReadSampleAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnReadSampleAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnReadSampleAsyncCallback@CMFSourceReaderStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnReadSampleAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnReadSampleAsyncCallback@CMFSourceReaderStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnReadSampleAsyncCallback@CMFSourceReaderStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnReadSampleAsyncCallback@CMFSourceReaderStream@@QEAA@XZ
    OnReadSampleAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnReadSampleAsyncCallback@CMFSourceReaderStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnReadSampleAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReaderStream
