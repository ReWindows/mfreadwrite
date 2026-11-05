#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 80 member(s).
class CMFSourceReader {
public:
    class CMFSourceReaderManager;
    class LogSourceReaderAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSourceReader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransformForStream@CMFSourceReader@@UEAAJKPEAUIUnknown@@@Z
    virtual long AddTransformForStream(unsigned long, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceFromObject@CMFSourceReader@@SAJPEAUIUnknown@@PEAUIMFAttributes@@PEAPEAU2@@Z
    static long CreateInstanceFromObject(IUnknown *, IMFAttributes *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceFromURL@CMFSourceReader@@SAJPEBGPEAUIMFAttributes@@PEAPEAUIUnknown@@@Z
    static long CreateInstanceFromURL(unsigned short const *, IMFAttributes *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSecureMode@CMFSourceReader@@UEAAJKH@Z
    virtual long EnableSecureMode(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFSourceReader@@UEAAJK@Z
    virtual long Flush(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMediaType@CMFSourceReader@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetCurrentMediaType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeMediaType@CMFSourceReader@@UEAAJKKPEAPEAUIMFMediaType@@@Z
    virtual long GetNativeMediaType(unsigned long, unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentationAttribute@CMFSourceReader@@UEAAJKAEBU_GUID@@PEAUtagPROPVARIANT@@@Z
    virtual long GetPresentationAttribute(unsigned long, _GUID const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceForStream@CMFSourceReader@@UEAAJKAEBU_GUID@@0PEAPEAX@Z
    virtual long GetServiceForStream(unsigned long, _GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSession@CMFSourceReader@@UEAAJPEAPEAUIMFTelemetrySession@@@Z
    virtual long GetSession(IMFTelemetrySession * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamSelection@CMFSourceReader@@UEAAJKPEAH@Z
    virtual long GetStreamSelection(unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrailingXvp@CMFSourceReader@@UEAAJKPEAPEAUIMFTransform@@@Z
    virtual long GetTrailingXvp(unsigned long, IMFTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformForStream@CMFSourceReader@@UEAAJKKPEAU_GUID@@PEAPEAUIMFTransform@@@Z
    virtual long GetTransformForStream(unsigned long, unsigned long, _GUID *, IMFTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogInstance@CMFSourceReader@@UEAAXW4_MF_TELEMETRY_SESSION_LOG_REASON@@@Z
    virtual void LogInstance(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSourceReader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSample@CMFSourceReader@@UEAAJKKPEAK0PEA_JPEAPEAUIMFSample@@@Z
    virtual long ReadSample(unsigned long, unsigned long, unsigned long *, unsigned long *, int64_t *, IMFSample * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSourceReader@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllTransformsForStream@CMFSourceReader@@UEAAJK@Z
    virtual long RemoveAllTransformsForStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNullXvp@CMFSourceReader@@UEAAJK@Z
    virtual long RemoveNullXvp(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentMediaType@CMFSourceReader@@UEAAJKPEAKPEAUIMFMediaType@@@Z
    virtual long SetCurrentMediaType(unsigned long, unsigned long *, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPosition@CMFSourceReader@@UEAAJAEBU_GUID@@AEBUtagPROPVARIANT@@@Z
    virtual long SetCurrentPosition(_GUID const &, tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNativeMediaType@CMFSourceReader@@UEAAJKPEAUIMFMediaType@@PEAK@Z
    virtual long SetNativeMediaType(unsigned long, IMFMediaType *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSession@CMFSourceReader@@UEAAXPEAUIMFTelemetrySession@@@Z
    virtual void SetSession(IMFTelemetrySession *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamSelection@CMFSourceReader@@UEAAJKH@Z
    virtual long SetStreamSelection(unsigned long, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncReadSample@CMFSourceReader@@AEAAXPEAUIMFAsyncResult@@@Z
    void AsyncReadSample(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncSetCurrentPosition@CMFSourceReader@@AEAAXPEAUIMFAsyncResult@@@Z
    void AsyncSetCurrentPosition(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSourceReader@@AEAA@KPEAUIMFMediaSource@@PEAUIMFAttributes@@@Z
    CMFSourceReader(unsigned long, IMFMediaSource *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForProtectedContent@CMFSourceReader@@AEAAJXZ
    long CheckForProtectedContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForValidAttributes@CMFSourceReader@@AEAAJXZ
    long CheckForValidAttributes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSampleRequests@CMFSourceReader@@AEAAJK@Z
    long CheckSampleRequests(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckState@CMFSourceReader@@AEAAJXZ
    long CheckState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureMediaSourceMMCSS@CMFSourceReader@@AEAAJKK@Z
    long ConfigureMediaSourceMMCSS(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSourceReader@@CAJKPEAUIMFMediaSource@@PEAUIMFAttributes@@PEAPEAUIUnknown@@@Z
    static long CreateInstance(unsigned long, IMFMediaSource *, IMFAttributes *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceFromByteStream@CMFSourceReader@@CAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIUnknown@@@Z
    static long CreateInstanceFromByteStream(IMFByteStream *, IMFAttributes *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccumulatedFlags@CMFSourceReader@@AEAAJPEAK@Z
    long GetAccumulatedFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackParameters@CMFSourceReader@@AEAAJKPEAK0@Z
    long GetCallbackParameters(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaSourceAttribute@CMFSourceReader@@AEAAJAEBU_GUID@@PEAUtagPROPVARIANT@@@Z
    long GetMediaSourceAttribute(_GUID const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumSelectedStreams@CMFSourceReader@@AEAAJHPEAK@Z
    long GetNumSelectedStreams(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CMFSourceReader@@AEAAJKPEAPEAUIMFSourceReaderStream@@PEAK@Z
    long GetStream(unsigned long, IMFSourceReaderStream * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOutstandingSampleRequests@CMFSourceReader@@AEAAJKPEAHPEAK@Z
    long HasOutstandingSampleRequests(unsigned long, int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFSourceReader@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStreams@CMFSourceReader@@AEAAJXZ
    long InitializeStreams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalFlush@CMFSourceReader@@AEAAJKH@Z
    long InternalFlush(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalReadSample@CMFSourceReader@@AEAAJKKPEAK0PEA_JPEAPEAUIMFSample@@@Z
    long InternalReadSample(unsigned long, unsigned long, unsigned long *, unsigned long *, int64_t *, IMFSample * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRelease@CMFSourceReader@@AEAAKXZ
    unsigned long InternalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSetCurrentPosition@CMFSourceReader@@AEAAJAEBU_GUID@@AEBUtagPROPVARIANT@@@Z
    long InternalSetCurrentPosition(_GUID const &, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSetStreamSelection@CMFSourceReader@@AEAAJKH@Z
    long InternalSetStreamSelection(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAppCallback@CMFSourceReader@@AEAAXPEAUIMFAsyncResult@@@Z
    void InvokeAppCallback(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSourceReader@CMFSourceReader@@AEAAXPEAUIMFAsyncResult@@@Z
    void LogSourceReader(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSourceReaderTelemetry@CMFSourceReader@@AEAAXXZ
    void LogSourceReaderTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlush@CMFSourceReader@@AEAAJPEAUIMFSourceReaderStream@@J@Z
    long OnFlush(IMFSourceReaderStream *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaSourceEvent@CMFSourceReader@@AEAAJPEAUIMFMediaEvent@@@Z
    long OnMediaSourceEvent(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewOutputStream@CMFSourceReader@@AEAAJPEAUIMFSourceReaderStream@@PEAK@Z
    long OnNewOutputStream(IMFSourceReaderStream *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewStream@CMFSourceReader@@AEAAJPEAUIMFMediaEvent@@@Z
    long OnNewStream(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadSample@CMFSourceReader@@AEAAJKPEAUIMFSourceReaderStream@@JKK_JPEAUIMFSample@@@Z
    long OnReadSample(unsigned long, IMFSourceReaderStream *, long, unsigned long, unsigned long, int64_t, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceStarted@CMFSourceReader@@AEAAJPEAUIMFMediaEvent@@@Z
    long OnSourceStarted(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformChange@CMFSourceReader@@AEAAJK@Z
    long OnTransformChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformError@CMFSourceReader@@AEAAJKJ@Z
    long OnTransformError(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareStartStreams@CMFSourceReader@@AEAAJH@Z
    long PrepareStartStreams(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMediaSourceEvents@CMFSourceReader@@AEAAJXZ
    long ProcessMediaSourceEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueAppCallback@CMFSourceReader@@AEAAJKPEAUIUnknown@@@Z
    long QueueAppCallback(unsigned long, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueOnEventCallback@CMFSourceReader@@AEAAJKPEAUIMFMediaEvent@@@Z
    long QueueOnEventCallback(unsigned long, IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueOnFlushCallback@CMFSourceReader@@AEAAJXZ
    long QueueOnFlushCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectStreamForNextSampleRequest@CMFSourceReader@@AEAAJPEAPEAUIMFSourceReaderStream@@@Z
    long SelectStreamForNextSampleRequest(IMFSourceReaderStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsyncError@CMFSourceReader@@AEAAXJ@Z
    void SetAsyncError(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaSourceState@CMFSourceReader@@AEAAXW4MediaSourceState@1@J@Z
    void SetMediaSourceState(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFSourceReader@@AEAAXXZ
    void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartStreams@CMFSourceReader@@AEAAJXZ
    long StartStreams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForMediaSourceToStart@CMFSourceReader@@AEAAJXZ
    long WaitForMediaSourceToStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForMediaSourceToStop@CMFSourceReader@@AEAAJXZ
    long WaitForMediaSourceToStop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSourceReader@@EEAA@XZ
    virtual ~CMFSourceReader();
};
