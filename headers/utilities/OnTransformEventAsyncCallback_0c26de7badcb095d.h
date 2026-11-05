#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReaderStream {
class OnTransformEventAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnTransformEventAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnTransformEventAsyncCallback@CMFSourceReaderStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnTransformEventAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnTransformEventAsyncCallback@CMFSourceReaderStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnTransformEventAsyncCallback@CMFSourceReaderStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnTransformEventAsyncCallback@CMFSourceReaderStream@@QEAA@XZ
    OnTransformEventAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnTransformEventAsyncCallback@CMFSourceReaderStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnTransformEventAsyncCallback@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReaderStream
