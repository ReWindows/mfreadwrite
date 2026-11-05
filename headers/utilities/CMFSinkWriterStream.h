#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 82 member(s).
class CMFSinkWriterStream {
public:
    class OnFeedInputAsyncCallback;
    class OnReadSamplesAsyncCallback;
    class OnStreamSinkEventAsyncCallback;
    class OnTransformEventAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWriting@CMFSinkWriterStream@@UEAAJXZ
    virtual long BeginWriting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriterStream@@SAJKKPEAUIMFSinkWriterManager@@PEAUIMFMediaType@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterStream@@@Z
    static long CreateInstance(unsigned long, unsigned long, IMFSinkWriterManager *, IMFMediaType *, IMFAttributes *, IMFSinkWriterStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFSinkWriterStream@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFSinkWriterStream@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamIdentifier@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long GetStreamIdentifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetMediaType@CMFSinkWriterStream@@UEAAJPEAPEAUIMFMediaType@@@Z
    virtual long GetTargetMediaType(IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CMFSinkWriterStream@@UEAAJKPEAU_GUID@@PEAPEAUIMFTransform@@@Z
    virtual long GetTransform(unsigned long, _GUID *, IMFTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFSinkWriterStream@@UEAAHXZ
    virtual int IsEndOfStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEndOfSegment@CMFSinkWriterStream@@UEAAJXZ
    virtual long NotifyEndOfSegment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEndOfStream@CMFSinkWriterStream@@UEAAJXZ
    virtual long NotifyEndOfStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceEncodingParameters@CMFSinkWriterStream@@UEAAJPEAUIMFAttributes@@@Z
    virtual long PlaceEncodingParameters(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceMarker@CMFSinkWriterStream@@UEAAJPEAX@Z
    virtual long PlaceMarker(void *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSinkWriterStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSinkWriterStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStreamTick@CMFSinkWriterStream@@UEAAJ_J@Z
    virtual long SendStreamTick(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEncodingParameters@CMFSinkWriterStream@@UEAAJPEAUIMFAttributes@@@Z
    virtual long SetEncodingParameters(IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputMediaType@CMFSinkWriterStream@@UEAAJPEAUIMFMediaType@@@Z
    virtual long SetInputMediaType(IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamSink@CMFSinkWriterStream@@UEAAJPEAUIMFStreamSink@@@Z
    virtual long SetStreamSink(IMFStreamSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetMediaType@CMFSinkWriterStream@@UEAAJPEAUIMFMediaType@@PEAUIMFAttributes@@@Z
    virtual long SetTargetMediaType(IMFMediaType *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFSinkWriterStream@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSample@CMFSinkWriterStream@@UEAAJPEAUIMFSample@@@Z
    virtual long WriteSample(IMFSample *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSinkWriterStream@@AEAA@KKPEAUIMFSinkWriterManager@@PEAUIMFMediaType@@PEAUIMFAttributes@@@Z
    CMFSinkWriterStream(unsigned long, unsigned long, IMFSinkWriterManager *, IMFMediaType *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallbackOnTransformChange@CMFSinkWriterStream@@AEAAXXZ
    void CallbackOnTransformChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForReadySample@CMFSinkWriterStream@@AEAAJXZ
    long CheckForReadySample();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitTargetMediaType@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@@Z
    long CommitTargetMediaType(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHardwareConnection@CMFSinkWriterStream@@AEAAJPEAUIMFReadWriteTransform@@H@Z
    long ConfigureHardwareConnection(IMFReadWriteTransform *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformChain@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@0PEAUIMFAttributes@@@Z
    long CreateTransformChain(IMFMediaType *, IMFMediaType *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainTransformChain@CMFSinkWriterStream@@AEAAJXZ
    long DrainTransformChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD3DSample@CMFSinkWriterStream@@AEAAJPEAUIMFSample@@PEAPEAU2@@Z
    long EnsureD3DSample(IMFSample *, IMFSample * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndInstallMFT@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@0PEAUIMFAttributes@@@Z
    long FindAndInstallMFT(IMFMediaType *, IMFMediaType *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushTransformChain@CMFSinkWriterStream@@AEAAJXZ
    long FlushTransformChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleFromMFT@CMFSinkWriterStream@@AEAAJPEAHPEAPEAUIMFSample@@0@Z
    long GetSampleFromMFT(int *, IMFSample * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSinkEventsWorkQueue@CMFSinkWriterStream@@EEAAKXZ
    virtual unsigned long GetSinkEventsWorkQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkQueue@CMFSinkWriterStream@@EEAAKXZ
    virtual unsigned long GetWorkQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDynamicFormatChange@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@@Z
    long HandleDynamicFormatChange(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDynamicFormatChangeAfterDrain@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@@Z
    long HandleDynamicFormatChangeAfterDrain(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFormatChangeBeforeStart@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@@Z
    long HandleFormatChangeBeforeStart(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleStreamSinkMarker@CMFSinkWriterStream@@AEAAJPEAUIMFMediaEvent@@@Z
    long HandleStreamSinkMarker(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleStreamSinkRequestSample@CMFSinkWriterStream@@AEAAJPEAUIMFMediaEvent@@@Z
    long HandleStreamSinkRequestSample(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFSinkWriterStream@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAllocatorForSink@CMFSinkWriterStream@@AEAAJXZ
    long InitializeAllocatorForSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallAACRemuxerMFT@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@0@Z
    long InstallAACRemuxerMFT(IMFMediaType *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallConverterMFT@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@0PEAUIMFAttributes@@_N@Z
    long InstallConverterMFT(IMFMediaType *, IMFMediaType *, IMFAttributes *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallH264RemuxerMFT@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@0@Z
    long InstallH264RemuxerMFT(IMFMediaType *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallRemuxerMFT@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@0@Z
    long InstallRemuxerMFT(IMFMediaType *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalFlush@CMFSinkWriterStream@@AEAAJH@Z
    long InternalFlush(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalShutdown@CMFSinkWriterStream@@AEAAXXZ
    void InternalShutdown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingConverter@CMFSinkWriterStream@@AEAA_NXZ
    bool IsUsingConverter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingEncoder@CMFSinkWriterStream@@AEAA_NXZ
    bool IsUsingEncoder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingRemuxer@CMFSinkWriterStream@@AEAA_NXZ
    bool IsUsingRemuxer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStream@CMFSinkWriterStream@@EEAAXXZ
    virtual void LogStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeAttributes@CMFSinkWriterStream@@AEAAJPEAUIMFAttributes@@@Z
    long MergeAttributes(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSamplesToSinkQueue@CMFSinkWriterStream@@AEAAJXZ
    long MoveSamplesToSinkQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFeedInput@CMFSinkWriterStream@@AEAAJPEAUIMFAsyncResult@@@Z
    long OnFeedInput(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadSamples@CMFSinkWriterStream@@AEAAJPEAUIMFAsyncResult@@@Z
    long OnReadSamples(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadSamplesInternal@CMFSinkWriterStream@@AEAAJPEAUIMFAsyncResult@@@Z
    long OnReadSamplesInternal(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamFormatChanged@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@_N@Z
    long OnStreamFormatChanged(IMFMediaType *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamSinkEvent@CMFSinkWriterStream@@AEAAJPEAUIMFAsyncResult@@@Z
    long OnStreamSinkEvent(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformHasOutput@CMFSinkWriterStream@@AEAAJPEAPEAUIMFSample@@PEAH@Z
    long OnTransformHasOutput(IMFSample * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformNeedInput@CMFSinkWriterStream@@AEAAJXZ
    long OnTransformNeedInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformStreamChange@CMFSinkWriterStream@@AEAAJK@Z
    long OnTransformStreamChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMediaSinkQueue@CMFSinkWriterStream@@AEAAJXZ
    long ProcessMediaSinkQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEOSMarkerOnSink@CMFSinkWriterStream@@AEAAJXZ
    long QueueEOSMarkerOnSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueMarker@CMFSinkWriterStream@@AEAAJPEAVCMFSinkWriterMarkerContext@@@Z
    long QueueMarker(CMFSinkWriterMarkerContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueObjectForSink@CMFSinkWriterStream@@AEAAJPEAUIUnknown@@@Z
    long QueueObjectForSink(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueObjectForTransform@CMFSinkWriterStream@@AEAAJPEAUIUnknown@@@Z
    long QueueObjectForTransform(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTransformChain@CMFSinkWriterStream@@AEAAXXZ
    void RemoveTransformChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenegotiateTargetMediaType@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@0PEAUIMFAttributes@@_N@Z
    long RenegotiateTargetMediaType(IMFMediaType *, IMFMediaType *, IMFAttributes *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendFormatChangeToSink@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@@Z
    long SendFormatChangeToSink(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMarkerToSink@CMFSinkWriterStream@@AEAAJPEAVCMFSinkWriterMarkerContext@@@Z
    long SendMarkerToSink(CMFSinkWriterMarkerContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SinkSupportsFormat@CMFSinkWriterStream@@AEAA_NPEAUIMFMediaType@@_N@Z
    bool SinkSupportsFormat(IMFMediaType *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProcessingLoop@CMFSinkWriterStream@@AEAAJXZ
    long StartProcessingLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TeardownHardwareConnection@CMFSinkWriterStream@@AEAAJPEAUIMFReadWriteTransform@@@Z
    long TeardownHardwareConnection(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformSupportsFormat@CMFSinkWriterStream@@AEAA_NPEAUIMFMediaType@@PEA_N@Z
    bool TransformSupportsFormat(IMFMediaType *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetMediaTypeAttributes@CMFSinkWriterStream@@AEAAJPEAUIMFMediaType@@0@Z
    long UpdateTargetMediaTypeAttributes(IMFMediaType *, IMFMediaType *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriterStream@@EEAA@XZ
    virtual ~CMFSinkWriterStream();
};
