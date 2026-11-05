#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 61 member(s).
class CMFSinkWriter {
public:
    class CMFSinkWriterManager;
    class LogSinkWriterAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStream@CMFSinkWriter@@UEAAJPEAUIMFMediaType@@PEAK@Z
    virtual long AddStream(IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWriting@CMFSinkWriter@@UEAAJXZ
    virtual long BeginWriting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceFromObject@CMFSinkWriter@@SAJPEAUIUnknown@@PEAUIMFAttributes@@PEAPEAU2@@Z
    static long CreateInstanceFromObject(IUnknown *, IMFAttributes *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceFromURL@CMFSinkWriter@@SAJPEBGPEAUIMFAttributes@@PEAPEAUIUnknown@@@Z
    static long CreateInstanceFromURL(unsigned short const *, IMFAttributes *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@CMFSinkWriter@@UEAAJXZ
    virtual long Finalize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFSinkWriter@@UEAAJK@Z
    virtual long Flush(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceForStream@CMFSinkWriter@@UEAAJKAEBU_GUID@@0PEAPEAX@Z
    virtual long GetServiceForStream(unsigned long, _GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSession@CMFSinkWriter@@UEAAJPEAPEAUIMFTelemetrySession@@@Z
    virtual long GetSession(IMFTelemetrySession * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatistics@CMFSinkWriter@@UEAAJKPEAU_MF_SINK_WRITER_STATISTICS@@@Z
    virtual long GetStatistics(unsigned long, _MF_SINK_WRITER_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformForStream@CMFSinkWriter@@UEAAJKKPEAU_GUID@@PEAPEAUIMFTransform@@@Z
    virtual long GetTransformForStream(unsigned long, unsigned long, _GUID *, IMFTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogInstance@CMFSinkWriter@@UEAAXW4_MF_TELEMETRY_SESSION_LOG_REASON@@@Z
    virtual void LogInstance(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEndOfSegment@CMFSinkWriter@@UEAAJK@Z
    virtual long NotifyEndOfSegment(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceEncodingParameters@CMFSinkWriter@@UEAAJKPEAUIMFAttributes@@@Z
    virtual long PlaceEncodingParameters(unsigned long, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceMarker@CMFSinkWriter@@UEAAJKPEAX@Z
    virtual long PlaceMarker(unsigned long, void *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSinkWriter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSinkWriter@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStreamTick@CMFSinkWriter@@UEAAJK_J@Z
    virtual long SendStreamTick(unsigned long, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputMediaType@CMFSinkWriter@@UEAAJKPEAUIMFMediaType@@PEAUIMFAttributes@@@Z
    virtual long SetInputMediaType(unsigned long, IMFMediaType *, IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSession@CMFSinkWriter@@UEAAXPEAUIMFTelemetrySession@@@Z
    virtual void SetSession(IMFTelemetrySession *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetMediaType@CMFSinkWriter@@UEAAJKPEAUIMFMediaType@@PEAUIMFAttributes@@@Z
    virtual long SetTargetMediaType(unsigned long, IMFMediaType *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSample@CMFSinkWriter@@UEAAJKPEAUIMFSample@@@Z
    virtual long WriteSample(unsigned long, IMFSample *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSinkWriterStream@CMFSinkWriter@@AEAAJKPEAUIMFMediaType@@PEAK@Z
    long AddSinkWriterStream(unsigned long, IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncFinalize@CMFSinkWriter@@AEAAJPEAUIMFAsyncResult@@@Z
    long AsyncFinalize(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSinkWriter@@AEAA@KPEAUIMFSinkWriterProfileManager@@PEAUIMFMediaSink@@PEAUIMFAttributes@@PEAUIMFByteStream@@@Z
    CMFSinkWriter(unsigned long, IMFSinkWriterProfileManager *, IMFMediaSink *, IMFAttributes *, IMFByteStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForValidAttributes@CMFSinkWriter@@AEAAJXZ
    long CheckForValidAttributes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckState@CMFSinkWriter@@AEAAJW4SINK_WRITER_STATE@1@@Z
    long CheckState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureMediaSink@CMFSinkWriter@@AEAAJXZ
    long ConfigureMediaSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePresentationClock@CMFSinkWriter@@AEAAJXZ
    long ConfigurePresentationClock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureStreamSinks@CMFSinkWriter@@AEAAJXZ
    long ConfigureStreamSinks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriter@@CAJKPEBGPEAUIMFByteStream@@PEAUIMFMediaSink@@PEAUIMFAttributes@@PEAPEAUIUnknown@@@Z
    static long CreateInstance(unsigned long, unsigned short const *, IMFByteStream *, IMFMediaSink *, IMFAttributes *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncapsulateFormatChange@CMFSinkWriter@@AEAAJKPEAUIMFMediaType@@0@Z
    long EncapsulateFormatChange(unsigned long, IMFMediaType *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeMediaSink@CMFSinkWriter@@AEAAJXZ
    long FinalizeMediaSink();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSinkWriterStream@CMFSinkWriter@@AEAAJKPEAPEAUIMFSinkWriterStream@@@Z
    long GetSinkWriterStream(unsigned long, IMFSinkWriterStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFSinkWriter@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalFinalize@CMFSinkWriter@@AEAAJXZ
    long InternalFinalize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRelease@CMFSinkWriter@@AEAAKXZ
    unsigned long InternalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSinkWriter@CMFSinkWriter@@AEAAXPEAUIMFAsyncResult@@@Z
    void LogSinkWriter(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSinkWriterTelemetry@CMFSinkWriter@@AEAAXXZ
    void LogSinkWriterTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndOfStream@CMFSinkWriter@@AEAAXK@Z
    void OnEndOfStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalize@CMFSinkWriter@@AEAAJPEAUIMFAsyncResult@@@Z
    long OnFinalize(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarker@CMFSinkWriter@@AEAAXKPEAX@Z
    void OnMarker(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaSinkEvent@CMFSinkWriter@@AEAAJPEAUIMFAsyncResult@@@Z
    long OnMediaSinkEvent(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamError@CMFSinkWriter@@AEAAXKJ@Z
    void OnStreamError(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformChange@CMFSinkWriter@@AEAAXXZ
    void OnTransformChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformError@CMFSinkWriter@@AEAAXKJ@Z
    void OnTransformError(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformRemoved@CMFSinkWriter@@AEAAXK@Z
    void OnTransformRemoved(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsyncError@CMFSinkWriter@@AEAAXJ@Z
    void SetAsyncError(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CMFSinkWriter@@AEAAJW4SINK_WRITER_STATE@1@@Z
    long SetState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFSinkWriter@@AEAAXXZ
    void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMediaSink@CMFSinkWriter@@AEAAJXZ
    long StartMediaSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrottleStream@CMFSinkWriter@@AEAAJK_J0@Z
    long ThrottleStream(unsigned long, int64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriter@@EEAA@XZ
    virtual ~CMFSinkWriter();
};
