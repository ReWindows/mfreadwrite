#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace CMFSourceReaderEventQueue {
class _OnEventAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@_OnEventAsyncCallback@CMFSourceReaderEventQueue@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@_OnEventAsyncCallback@CMFSourceReaderEventQueue@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTag@_OnEventAsyncCallback@CMFSourceReaderEventQueue@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@_OnEventAsyncCallback@CMFSourceReaderEventQueue@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@_OnEventAsyncCallback@CMFSourceReaderEventQueue@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@_OnEventAsyncCallback@CMFSourceReaderEventQueue@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@_OnEventAsyncCallback@CMFSourceReaderEventQueue@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_OnEventAsyncCallback@CMFSourceReaderEventQueue@@QEAA@XZ
    _OnEventAsyncCallback();
};
} // namespace CMFSourceReaderEventQueue
