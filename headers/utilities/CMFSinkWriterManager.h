#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 17 member(s).
namespace CMFSinkWriter {
class CMFSinkWriterManager {
public:
    class AsyncFinalizeAsyncCallback;
    class InvokeAppCallbackAsyncCallback;
    class OnFinalizeAsyncCallback;
    class OnMediaSinkEventAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSinkWriterManager@CMFSinkWriter@@QEAA@PEAV1@@Z
    CMFSinkWriterManager(CMFSinkWriter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncapsulateFormatChange@CMFSinkWriterManager@CMFSinkWriter@@UEAAJKPEAUIMFMediaType@@0@Z
    virtual long EncapsulateFormatChange(unsigned long, IMFMediaType *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAppCallback@CMFSinkWriterManager@CMFSinkWriter@@QEAAJPEAUIMFAsyncResult@@@Z
    long InvokeAppCallback(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndOfStream@CMFSinkWriterManager@CMFSinkWriter@@UEAAXK@Z
    virtual void OnEndOfStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarker@CMFSinkWriterManager@CMFSinkWriter@@UEAAXKPEAX@Z
    virtual void OnMarker(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSampleDelivered@CMFSinkWriterManager@CMFSinkWriter@@UEAAXKPEAUIMFSample@@@Z
    virtual void OnSampleDelivered(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSampleReceived@CMFSinkWriterManager@CMFSinkWriter@@UEAAXKPEAUIMFSample@@H@Z
    virtual void OnSampleReceived(unsigned long, IMFSample *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSampleRequest@CMFSinkWriterManager@CMFSinkWriter@@UEAAXK@Z
    virtual void OnSampleRequest(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamError@CMFSinkWriterManager@CMFSinkWriter@@UEAAXKJ@Z
    virtual void OnStreamError(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformChange@CMFSinkWriterManager@CMFSinkWriter@@UEAAXXZ
    virtual void OnTransformChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformError@CMFSinkWriterManager@CMFSinkWriter@@UEAAXKJ@Z
    virtual void OnTransformError(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformProcessInput@CMFSinkWriterManager@CMFSinkWriter@@UEAAXKPEAUIMFSample@@@Z
    virtual void OnTransformProcessInput(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformProcessOutput@CMFSinkWriterManager@CMFSinkWriter@@UEAAXKPEAUIMFSample@@@Z
    virtual void OnTransformProcessOutput(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformRemoved@CMFSinkWriterManager@CMFSinkWriter@@UEAAXK@Z
    virtual void OnTransformRemoved(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSinkWriterManager@CMFSinkWriter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSinkWriterManager@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSinkWriter
