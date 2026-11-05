#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 85 member(s).
class CMFReadWriteTransformChain {
public:
    class TransformState;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFReadWriteTransformChain@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransformAtHead@CMFReadWriteTransformChain@@UEAAJPEAUIMFReadWriteTransform@@@Z
    virtual long AddTransformAtHead(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransformAtTail@CMFReadWriteTransformChain@@UEAAJPEAUIMFReadWriteTransform@@@Z
    virtual long AddTransformAtTail(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginGetEvent@CMFReadWriteTransformChain@@UEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginGetEvent(IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteTransformStreamChange@CMFReadWriteTransformChain@@UEAAJXZ
    virtual long CompleteTransformStreamChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHardwareConnection@CMFReadWriteTransformChain@@SAJPEAUIMFReadWriteTransform@@0H@Z
    static long ConfigureHardwareConnection(IMFReadWriteTransform *, IMFReadWriteTransform *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHardwareConnection@CMFReadWriteTransformChain@@SAJPEAUIMFAttributes@@0@Z
    static long ConfigureHardwareConnection(IMFAttributes *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureOutputType@CMFReadWriteTransformChain@@UEAAJPEAUIMFMediaType@@H@Z
    virtual long ConfigureOutputType(IMFMediaType *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureTargetType@CMFReadWriteTransformChain@@UEAAJPEAUIMFMediaType@@PEAUIMFAttributes@@@Z
    virtual long ConfigureTargetType(IMFMediaType *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectTransform@CMFReadWriteTransformChain@@UEAAJPEAUIMFReadWriteTransform@@PEAUIMFMediaType@@@Z
    virtual long ConnectTransform(IMFReadWriteTransform *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConverterOutputType@CMFReadWriteTransformChain@@SAJPEAUIMFMediaType@@0PEAPEAU2@@Z
    static long CreateConverterOutputType(IMFMediaType *, IMFMediaType *, IMFMediaType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFReadWriteTransformChain@@SAJKPEAUIMFAttributes@@KPEAPEAUIMFReadWriteTransformChain@@@Z
    static long CreateInstance(unsigned long, IMFAttributes *, unsigned long, IMFReadWriteTransformChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drain@CMFReadWriteTransformChain@@UEAAJXZ
    virtual long Drain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDXVA@CMFReadWriteTransformChain@@UEAAJH@Z
    virtual long EnableDXVA(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndGetEvent@CMFReadWriteTransformChain@@UEAAJPEAUIMFAsyncResult@@PEAPEAUIMFMediaEvent@@@Z
    virtual long EndGetEvent(IMFAsyncResult *, IMFMediaEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFReadWriteTransformChain@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAndClearChangedFlag@CMFReadWriteTransformChain@@UEAAHXZ
    virtual int GetAndClearChangedFlag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategory@CMFReadWriteTransformChain@@UEAAJPEAU_GUID@@@Z
    virtual long GetCategory(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEvent@CMFReadWriteTransformChain@@UEAAJKPEAPEAUIMFMediaEvent@@@Z
    virtual long GetEvent(unsigned long, IMFMediaEvent * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputAvailableType@CMFReadWriteTransformChain@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetInputAvailableType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamAttributes@CMFReadWriteTransformChain@@UEAAJPEAPEAUIMFAttributes@@@Z
    virtual long GetInputStreamAttributes(IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputType@CMFReadWriteTransformChain@@UEAAJPEAPEAUIMFMediaType@@@Z
    virtual long GetInputType(IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMFT@CMFReadWriteTransformChain@@UEAAJPEAPEAUIMFTransform@@@Z
    virtual long GetMFT(IMFTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputAvailableType@CMFReadWriteTransformChain@@UEAAJKKPEAPEAUIMFMediaType@@@Z
    virtual long GetOutputAvailableType(unsigned long, unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamAttributes@CMFReadWriteTransformChain@@UEAAJPEAPEAUIMFAttributes@@@Z
    virtual long GetOutputStreamAttributes(IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamCount@CMFReadWriteTransformChain@@UEAAKXZ
    virtual unsigned long GetOutputStreamCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamStatus@CMFReadWriteTransformChain@@UEAAJKPEAK@Z
    virtual long GetOutputStreamStatus(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputType@CMFReadWriteTransformChain@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetOutputType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFReadWriteTransformChain@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CMFReadWriteTransformChain@@UEAAJKPEAPEAUIMFReadWriteTransform@@@Z
    virtual long GetTransform(unsigned long, IMFReadWriteTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformCount@CMFReadWriteTransformChain@@UEAAKXZ
    virtual unsigned long GetTransformCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformType@CMFReadWriteTransformChain@@SA?AW4TransformType@1@PEAUIMFReadWriteTransform@@@Z
    static int GetTransformType(IMFReadWriteTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAudioConverter@CMFReadWriteTransformChain@@SA_NPEAUIMFReadWriteTransform@@@Z
    static bool IsAudioConverter(IMFReadWriteTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsD3DAware@CMFReadWriteTransformChain@@UEAAHXZ
    virtual int IsD3DAware();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDXVAEnabled@CMFReadWriteTransformChain@@UEAAHXZ
    virtual int IsDXVAEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDraining@CMFReadWriteTransformChain@@UEAAHXZ
    virtual int IsDraining();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEncoder@CMFReadWriteTransformChain@@SA_NPEAUIMFReadWriteTransform@@@Z
    static bool IsEncoder(IMFReadWriteTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlushing@CMFReadWriteTransformChain@@UEAAHXZ
    virtual int IsFlushing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVideoCapturePlugin@CMFReadWriteTransformChain@@UEAAHXZ
    virtual int IsVideoCapturePlugin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVideoProcessor@CMFReadWriteTransformChain@@SA_NPEAUIMFReadWriteTransform@@PEAI@Z
    static bool IsVideoProcessor(IMFReadWriteTransform *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockOutputType@CMFReadWriteTransformChain@@UEAAXH@Z
    virtual void LockOutputType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Log@CMFReadWriteTransformChain@@UEAAXK@Z
    virtual void Log(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTransformEvent@CMFReadWriteTransformChain@@UEAAJPEAUIMFReadWriteTransform@@PEAUIMFMediaEvent@@@Z
    virtual long NotifyTransformEvent(IMFReadWriteTransform *, IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvent@CMFReadWriteTransformChain@@UEAAJPEAUIMFMediaEvent@@@Z
    virtual long ProcessEvent(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CMFReadWriteTransformChain@@UEAAJPEAUIMFSample@@@Z
    virtual long ProcessInput(IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOobEvent@CMFReadWriteTransformChain@@UEAAJPEAUIMFMediaEvent@@@Z
    virtual long ProcessOobEvent(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOutput@CMFReadWriteTransformChain@@UEAAJPEAPEAPEAUIMFSample@@PEAK1PEAPEAUIMFCollection@@@Z
    virtual long ProcessOutput(IMFSample * * *, unsigned long *, unsigned long *, IMFCollection * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFReadWriteTransformChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@CMFReadWriteTransformChain@@UEAAJKAEBU_GUID@@JPEBUtagPROPVARIANT@@@Z
    virtual long QueueEvent(unsigned long, _GUID const &, long, tagPROPVARIANT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFReadWriteTransformChain@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTransformAtIndex@CMFReadWriteTransformChain@@UEAAJK@Z
    virtual long RemoveTransformAtIndex(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD3DManager@CMFReadWriteTransformChain@@UEAAJPEAUIUnknown@@@Z
    virtual long SetD3DManager(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputType@CMFReadWriteTransformChain@@UEAAJPEAUIMFMediaType@@K@Z
    virtual long SetInputType(IMFMediaType *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputType@CMFReadWriteTransformChain@@UEAAJKPEAUIMFMediaType@@K@Z
    virtual long SetOutputType(unsigned long, IMFMediaType *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputTypeIfSupported@CMFReadWriteTransformChain@@SAJPEAUIMFReadWriteTransform@@PEAUIMFMediaType@@HPEAPEAU3@@Z
    static long SetOutputTypeIfSupported(IMFReadWriteTransform *, IMFMediaType *, int, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CMFReadWriteTransformChain@@UEAAJPEAUIMFReadWriteTransformChain@@@Z
    virtual long SetParent(IMFReadWriteTransformChain *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequiredOutputSampleCount@CMFReadWriteTransformChain@@UEAAXK@Z
    virtual void SetRequiredOutputSampleCount(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkQueue@CMFReadWriteTransformChain@@UEAAJK@Z
    virtual long SetWorkQueue(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFReadWriteTransformChain@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartStreaming@CMFReadWriteTransformChain@@UEAAJXZ
    virtual long StartStreaming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopStreaming@CMFReadWriteTransformChain@@UEAAJXZ
    virtual long StopStreaming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TeardownHardwareConnection@CMFReadWriteTransformChain@@SAJPEAUIMFAttributes@@0@Z
    static long TeardownHardwareConnection(IMFAttributes *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TeardownHardwareConnection@CMFReadWriteTransformChain@@SAJPEAUIMFReadWriteTransform@@0@Z
    static long TeardownHardwareConnection(IMFReadWriteTransform *, IMFReadWriteTransform *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFReadWriteTransformChain@@AEAA@KKPEAUIMFAttributes@@@Z
    CMFReadWriteTransformChain(unsigned long, unsigned long, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTransform@CMFReadWriteTransformChain@@AEAAJPEAUIMFReadWriteTransform@@@Z
    long ClearTransform(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureD3D@CMFReadWriteTransformChain@@AEAAJXZ
    long ConfigureD3D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureOutputTypeInternal@CMFReadWriteTransformChain@@AEAAJPEAUIMFMediaType@@W4INSERT_CONVERTER@1@H@Z
    long ConfigureOutputTypeInternal(IMFMediaType *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureOutputTypeWithConverter@CMFReadWriteTransformChain@@AEAAJPEAUIMFMediaType@@@Z
    long ConfigureOutputTypeWithConverter(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureOutputTypeWithoutConverter@CMFReadWriteTransformChain@@AEAAJPEAUIMFMediaType@@W4INSERT_CONVERTER@1@H@Z
    long ConfigureOutputTypeWithoutConverter(IMFMediaType *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureTransform@CMFReadWriteTransformChain@@AEAAJPEAUIMFReadWriteTransform@@@Z
    long ConfigureTransform(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectTransformWithMediaType@CMFReadWriteTransformChain@@AEAAJPEAUIMFReadWriteTransform@@PEAUIMFMediaType@@1W4INSERT_CONVERTER@1@@Z
    long ConnectTransformWithMediaType(IMFReadWriteTransform *, IMFMediaType *, IMFMediaType *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFReadWriteTransformChain@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformDrained@CMFReadWriteTransformChain@@AEAAJKPEAUIMFMediaEvent@@@Z
    long OnTransformDrained(unsigned long, IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformHasOutput@CMFReadWriteTransformChain@@AEAAJKPEAUIMFMediaEvent@@@Z
    long OnTransformHasOutput(unsigned long, IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformInputTypeChange@CMFReadWriteTransformChain@@AEAAJK@Z
    long OnTransformInputTypeChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformNeedsInput@CMFReadWriteTransformChain@@AEAAJKPEAUIMFMediaEvent@@@Z
    long OnTransformNeedsInput(unsigned long, IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformStreamChange@CMFReadWriteTransformChain@@AEAAJK@Z
    long OnTransformStreamChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSample@CMFReadWriteTransformChain@@AEAAJK@Z
    long ProcessSample(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDownstream@CMFReadWriteTransformChain@@AEAAJPEAPEAUIMFReadWriteTransform@@@Z
    long RemoveDownstream(IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSampleIfNeeded@CMFReadWriteTransformChain@@AEAAJXZ
    long RequestSampleIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDrainState@CMFReadWriteTransformChain@@AEAAXW4DRAIN_STATE@IMFReadWriteTransform@@@Z
    void SetDrainState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFReadWriteTransformChain@@AEAA@XZ
    ~CMFReadWriteTransformChain();
};
