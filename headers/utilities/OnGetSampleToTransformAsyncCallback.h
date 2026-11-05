#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReaderStream {
class OnGetSampleToTransformAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnGetSampleToTransformAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnGetSampleToTransformAsyncCallback@CMFSourceReaderStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnGetSampleToTransformAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnGetSampleToTransformAsyncCallback@CMFSourceReaderStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnGetSampleToTransformAsyncCallback@CMFSourceReaderStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnGetSampleToTransformAsyncCallback@CMFSourceReaderStream@@QEAA@XZ
    OnGetSampleToTransformAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnGetSampleToTransformAsyncCallback@CMFSourceReaderStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnGetSampleToTransformAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReaderStream
