#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFReadWriteTransform {
class OnMFTEventAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnMFTEventAsyncCallback@CMFReadWriteTransform@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnMFTEventAsyncCallback@CMFReadWriteTransform@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@OnMFTEventAsyncCallback@CMFReadWriteTransform@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnMFTEventAsyncCallback@CMFReadWriteTransform@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnMFTEventAsyncCallback@CMFReadWriteTransform@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnMFTEventAsyncCallback@CMFReadWriteTransform@@QEAA@XZ
    OnMFTEventAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnMFTEventAsyncCallback@CMFReadWriteTransform@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnMFTEventAsyncCallback@CMFReadWriteTransform@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFReadWriteTransform
