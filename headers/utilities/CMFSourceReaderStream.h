#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 114 member(s).
class CMFSourceReaderStream {
public:
    class AsyncFlushAsyncCallback;
    class CSourceReaderStreamInfo;
    class OnGetSampleToTransformAsyncCallback;
    class OnReadSampleAsyncCallback;
    class OnTransformEventAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransform@CMFSourceReaderStream@@UEAAJKPEAUIMFTransform@@HPEAH@Z
    virtual long AddTransform(unsigned long, IMFTransform *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAnyStreamsSelected@CMFSourceReaderStream@@UEAAHXZ
    virtual int AreAnyStreamsSelected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDynamicFormatChange@CMFSourceReaderStream@@UEAAJKPEAUIMFMediaType@@@Z
    virtual long CommitDynamicFormatChange(unsigned long, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSourceReaderStream@@SAJHPEAUIMFSourceReaderManager@@PEAXKHPEAUIMFStreamDescriptor@@PEAUIMFAttributes@@PEAPEAUIMFSourceReaderStream@@@Z
    static long CreateInstance(int, IMFSourceReaderManager *, void *, unsigned long, int, IMFStreamDescriptor *, IMFAttributes *, IMFSourceReaderStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CMFSourceReaderStream@@UEAAJXZ
    virtual long Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSecureMode@CMFSourceReaderStream@@UEAAJH@Z
    virtual long EnableSecureMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFSourceReaderStream@@UEAAJKHK@Z
    virtual long Flush(unsigned long, int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackWorkQueue@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long GetCallbackWorkQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMediaType@CMFSourceReaderStream@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetCurrentMediaType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastSampleTime@CMFSourceReaderStream@@UEAA_JK@Z
    virtual int64_t GetLastSampleTime(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeMediaType@CMFSourceReaderStream@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetNativeMediaType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFSourceReaderStream@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamAttribute@CMFSourceReaderStream@@UEAAJAEBU_GUID@@PEAUtagPROPVARIANT@@@Z
    virtual long GetStreamAttribute(_GUID const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamIdentifier@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long GetStreamIdentifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamIndex@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long GetStreamIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CMFSourceReaderStream@@UEAAJKKPEAU_GUID@@PEAPEAUIMFTransform@@@Z
    virtual long GetTransform(unsigned long, unsigned long, _GUID *, IMFTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkQueue@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long GetWorkQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOutstandingSampleRequests@CMFSourceReaderStream@@UEAAHXZ
    virtual int HasOutstandingSampleRequests();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFSourceReaderStream@@UEAAHXZ
    virtual int IsEndOfStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryStream@CMFSourceReaderStream@@UEAAHK@Z
    virtual int IsPrimaryStream(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@CMFSourceReaderStream@@UEAAHK@Z
    virtual int IsSelected(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStream@CMFSourceReaderStream@@UEAAXXZ
    virtual void LogStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadSampleCallbackCompleted@CMFSourceReaderStream@@UEAAXKKH@Z
    virtual void OnReadSampleCallbackCompleted(unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreSampleCallback@CMFSourceReaderStream@@UEAAXXZ
    virtual void PreSampleCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareStart@CMFSourceReaderStream@@UEAAJH@Z
    virtual long PrepareStart(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSourceReaderStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSample@CMFSourceReaderStream@@UEAAJKKPEAK0PEA_JPEAPEAUIMFSample@@@Z
    virtual long ReadSample(unsigned long, unsigned long, unsigned long *, unsigned long *, int64_t *, IMFSample * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSourceReaderStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllTransforms@CMFSourceReaderStream@@UEAAJK@Z
    virtual long RemoveAllTransforms(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectStream@CMFSourceReaderStream@@UEAAJKH@Z
    virtual long SelectStream(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentMediaType@CMFSourceReaderStream@@UEAAJKPEAUIMFMediaType@@PEAH@Z
    virtual long SetCurrentMediaType(unsigned long, IMFMediaType *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMediaStream@CMFSourceReaderStream@@UEAAJPEAUIMFMediaStream@@@Z
    virtual long SetMediaStream(IMFMediaStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNativeMediaType@CMFSourceReaderStream@@UEAAJKPEAUIMFMediaType@@PEAKPEAH@Z
    virtual long SetNativeMediaType(unsigned long, IMFMediaType *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFSourceReaderStream@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartStreaming@CMFSourceReaderStream@@UEAAJXZ
    virtual long StartStreaming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForStreamToStop@CMFSourceReaderStream@@UEAAJXZ
    virtual long WaitForStreamToStop();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCapturePlugin@CMFSourceReaderStream@@AEAAJXZ
    long AddCapturePlugin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransformInternal@CMFSourceReaderStream@@AEAAJPEAUIMFTransform@@HHPEAH@Z
    long AddTransformInternal(IMFTransform *, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncFlush@CMFSourceReaderStream@@AEAAXPEAUIMFAsyncResult@@@Z
    void AsyncFlush(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSourceReaderStream@@AEAA@HPEAUIMFSourceReaderManager@@PEAXPEAUIMFStreamDescriptor@@PEAUIMFAttributes@@@Z
    CMFSourceReaderStream(int, IMFSourceReaderManager *, void *, IMFStreamDescriptor *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallbackOnTransformChange@CMFSourceReaderStream@@AEAAXK@Z
    void CallbackOnTransformChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForNewStreams@CMFSourceReaderStream@@AEAAJPEAK@Z
    long CheckForNewStreams(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteAsyncFlush@CMFSourceReaderStream@@AEAAXJ@Z
    void CompleteAsyncFlush(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureAudioConverter@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@0PEAH@Z
    long ConfigureAudioConverter(IMFMediaType *, IMFMediaType *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCapturePluginInputType@CMFSourceReaderStream@@AEAAJPEAH@Z
    long ConfigureCapturePluginInputType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureColorSpaceConversion@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@0PEAH@Z
    long ConfigureColorSpaceConversion(IMFMediaType *, IMFMediaType *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHardwareConnection@CMFSourceReaderStream@@AEAAJPEAUIMFReadWriteTransform@@H@Z
    long ConfigureHardwareConnection(IMFReadWriteTransform *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVideoProcessor@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@0PEAH@Z
    long ConfigureVideoProcessor(IMFMediaType *, IMFMediaType *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertColorspace@CMFSourceReaderStream@@AEAAJPEAUIMFSample@@PEAPEAU2@@Z
    long ConvertColorspace(IMFSample *, IMFSample * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePartialOutputType@CMFSourceReaderStream@@AEAAJKPEAPEAUIMFMediaType@@@Z
    long CreatePartialOutputType(unsigned long, IMFMediaType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformChain@CMFSourceReaderStream@@AEAAJPEAUIMFReadWriteTransform@@PEAHPEAPEAUIMFReadWriteTransformChain@@@Z
    long CreateTransformChain(IMFReadWriteTransform *, int *, IMFReadWriteTransformChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformChainWithConverter@CMFSourceReaderStream@@AEAAJPEAUIMFReadWriteTransform@@PEAPEAUIMFMediaType@@PEAPEAUIMFReadWriteTransformChain@@@Z
    long CreateTransformChainWithConverter(IMFReadWriteTransform *, IMFMediaType * *, IMFReadWriteTransformChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformChainWithPlugin@CMFSourceReaderStream@@AEAAJPEAUIMFReadWriteTransform@@PEAPEAUIMFReadWriteTransformChain@@@Z
    long CreateTransformChainWithPlugin(IMFReadWriteTransform *, IMFReadWriteTransformChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableColorSpaceConversion@CMFSourceReaderStream@@AEAAXXZ
    void DisableColorSpaceConversion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableSecondaryStreams@CMFSourceReaderStream@@AEAAXXZ
    void DisableSecondaryStreams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectCapturePlugin@CMFSourceReaderStream@@AEAAJXZ
    long DisconnectCapturePlugin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainTransformChain@CMFSourceReaderStream@@AEAAJXZ
    long DrainTransformChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableColorSpaceConversion@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@@Z
    long EnableColorSpaceConversion(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD3DSample@CMFSourceReaderStream@@AEAAJPEAVCSourceReaderStreamInfo@1@PEAUIMFSample@@PEAPEAU3@@Z
    long EnsureD3DSample(WindissectOpaque *, IMFSample *, IMFSample * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndInstallConverter@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@PEAH@Z
    long FindAndInstallConverter(IMFMediaType *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndInstallMFT@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@@Z
    long FindAndInstallMFT(IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeMediaTypeInternal@CMFSourceReaderStream@@AEAAJKPEAPEAUIMFMediaType@@@Z
    long GetNativeMediaTypeInternal(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeTypeForFormatNegotiation@CMFSourceReaderStream@@AEAAPEAUIMFMediaType@@_N@Z
    IMFMediaType * GetNativeTypeForFormatNegotiation(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleFromMFT@CMFSourceReaderStream@@AEAAJKKPEAK0PEA_JPEAPEAUIMFSample@@PEAH@Z
    long GetSampleFromMFT(unsigned long, unsigned long, unsigned long *, unsigned long *, int64_t *, IMFSample * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleFromSource@CMFSourceReaderStream@@AEAAJPEAKPEA_JPEAPEAUIMFSample@@PEAH@Z
    long GetSampleFromSource(unsigned long *, int64_t *, IMFSample * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedFormatChange@CMFSourceReaderStream@@AEAAJHPEAK@Z
    long HandleDelayedFormatChange(int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFSourceReaderStream@@AEAAJKH@Z
    long Initialize(unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalFlush@CMFSourceReaderStream@@AEAAJXZ
    long InternalFlush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetCurrentMediaType@CMFSourceReaderStream@@AEAAJKPEAPEAUIMFMediaType@@@Z
    long InternalGetCurrentMediaType(unsigned long, IMFMediaType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalReadSample@CMFSourceReaderStream@@AEAAJKKPEAK0PEA_JPEAPEAUIMFSample@@PEAH@Z
    long InternalReadSample(unsigned long, unsigned long, unsigned long *, unsigned long *, int64_t *, IMFSample * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalShutdown@CMFSourceReaderStream@@AEAAXXZ
    void InternalShutdown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAdvancedVideoProcessingAllowed@CMFSourceReaderStream@@AEAAHPEAUIMFMediaType@@@Z
    int IsAdvancedVideoProcessingAllowed(IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAudioOrVideoEffect@CMFSourceReaderStream@@CAHPEAUIMFReadWriteTransform@@@Z
    static int IsAudioOrVideoEffect(IMFReadWriteTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCaptureStream@CMFSourceReaderStream@@AEAAHXZ
    int IsCaptureStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareStream@CMFSourceReaderStream@@AEAAHXZ
    int IsHardwareStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnlyUsingConverter@CMFSourceReaderStream@@AEAAHXZ
    int IsOnlyUsingConverter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPartialMediaType@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@PEAH@Z
    long IsPartialMediaType(IMFMediaType *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedFormatForColorSpaceConversion@CMFSourceReaderStream@@AEAAHPEAUIMFMediaType@@@Z
    int IsSupportedFormatForColorSpaceConversion(IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingCapturePlugin@CMFSourceReaderStream@@AEAAHXZ
    int IsUsingCapturePlugin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingDecoder@CMFSourceReaderStream@@AEAAHXZ
    int IsUsingDecoder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingEffects@CMFSourceReaderStream@@AEAAHXZ
    int IsUsingEffects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupStreamInfo@CMFSourceReaderStream@@AEAAJKPEAPEAVCSourceReaderStreamInfo@1@@Z
    long LookupStreamInfo(unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupStreamInfoByTransformStreamIndex@CMFSourceReaderStream@@AEAAJKPEAPEAVCSourceReaderStreamInfo@1@@Z
    long LookupStreamInfoByTransformStreamIndex(unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NegotiateInputTypeWithEffectChain@CMFSourceReaderStream@@AEAAJXZ
    long NegotiateInputTypeWithEffectChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetSampleToTransform@CMFSourceReaderStream@@AEAAXPEAUIMFAsyncResult@@@Z
    void OnGetSampleToTransform(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadSample@CMFSourceReaderStream@@AEAAXPEAUIMFAsyncResult@@@Z
    void OnReadSample(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceSampleAvailable@CMFSourceReaderStream@@AEAAJPEAUIMFSample@@_JPEAK@Z
    long OnSourceSampleAvailable(IMFSample *, int64_t, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamFormatChanged@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@HPEAK@Z
    long OnStreamFormatChanged(IMFMediaType *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformDrained@CMFSourceReaderStream@@AEAAJKPEAKPEA_JPEAPEAUIMFSample@@PEAH@Z
    long OnTransformDrained(unsigned long, unsigned long *, int64_t *, IMFSample * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformHasOutput@CMFSourceReaderStream@@AEAAJPEAKPEAH@Z
    long OnTransformHasOutput(unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformNeedInput@CMFSourceReaderStream@@AEAAJXZ
    long OnTransformNeedInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformStreamChange@CMFSourceReaderStream@@AEAAJKPEAK@Z
    long OnTransformStreamChange(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMESampleEvent@CMFSourceReaderStream@@AEAAXPEAUIMFMediaEvent@@@Z
    void ProcessMESampleEvent(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNewStreams@CMFSourceReaderStream@@AEAAJPEAUIMFSourceReaderManager@@PEAUIMFSourceReaderStream@@K@Z
    long ProcessNewStreams(IMFSourceReaderManager *, IMFSourceReaderStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSample@CMFSourceReaderStream@@AEAAJPEAVCSourceReaderStreamInfo@1@PEAKPEAUIMFSample@@@Z
    long ProcessSample(WindissectOpaque *, unsigned long *, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueGetSampleFromSource@CMFSourceReaderStream@@AEAAJXZ
    long QueueGetSampleFromSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconnectCapturePlugin@CMFSourceReaderStream@@AEAAJPEAH@Z
    long ReconnectCapturePlugin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTransform@CMFSourceReaderStream@@AEAAXXZ
    void RemoveTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSampleFromSource@CMFSourceReaderStream@@AEAAJXZ
    long RequestSampleFromSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnSampleToQueue@CMFSourceReaderStream@@AEAAJKKPEAUIMFSample@@@Z
    long ReturnSampleToQueue(unsigned long, unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectNativeMediaType@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@H@Z
    long SelectNativeMediaType(IMFMediaType *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentNativeMediaType@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@H@Z
    long SetCurrentNativeMediaType(IMFMediaType *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryStreamMediaType@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@PEAH@Z
    long SetPrimaryStreamMediaType(IMFMediaType *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryStreamMediaType@CMFSourceReaderStream@@AEAAJKPEAUIMFMediaType@@@Z
    long SetSecondaryStreamMediaType(unsigned long, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceMediaType@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@@Z
    long SetSourceMediaType(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TeardownHardwareConnection@CMFSourceReaderStream@@AEAAJPEAUIMFReadWriteTransform@@@Z
    long TeardownHardwareConnection(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNativeTypeIfDifferent@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@PEAH@Z
    long UpdateNativeTypeIfDifferent(IMFMediaType *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSourceReaderStream@@EEAA@XZ
    virtual ~CMFSourceReaderStream();
};
