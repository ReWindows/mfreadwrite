#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 13 member(s).
class CMFSourceReaderEventQueue {
public:
    class _OnEventAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSourceReaderEventQueue@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSourceReaderEventQueue@@SAJPEAUIMFMediaEventGenerator@@KPEAXPEAUIMFSourceReaderErrorSink@@PEAPEAUIMFSourceReaderEventQueue@@@Z
    static long CreateInstance(IMFMediaEventGenerator *, unsigned long, void *, IMFSourceReaderErrorSink *, IMFSourceReaderEventQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEvent@CMFSourceReaderEventQueue@@UEAAJHPEAPEAUIMFMediaEvent@@@Z
    virtual long GetEvent(int, IMFMediaEvent * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSourceReaderEventQueue@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSourceReaderEventQueue@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventGenerator@CMFSourceReaderEventQueue@@UEAAJPEAUIMFMediaEventGenerator@@@Z
    virtual long SetEventGenerator(IMFMediaEventGenerator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFSourceReaderEventQueue@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForDisconnect@CMFSourceReaderEventQueue@@UEAAJXZ
    virtual long WaitForDisconnect();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSourceReaderEventQueue@@AEAA@PEAUIMFMediaEventGenerator@@KPEAUIMFSourceReaderErrorSink@@@Z
    CMFSourceReaderEventQueue(IMFMediaEventGenerator *, unsigned long, IMFSourceReaderErrorSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CMFSourceReaderEventQueue@@AEAAJPEAX@Z
    long _Initialize(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEvent@CMFSourceReaderEventQueue@@AEAAXPEAUIMFAsyncResult@@@Z
    void _OnEvent(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Shutdown@CMFSourceReaderEventQueue@@AEAAXXZ
    void _Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSourceReaderEventQueue@@AEAA@XZ
    ~CMFSourceReaderEventQueue();
};
