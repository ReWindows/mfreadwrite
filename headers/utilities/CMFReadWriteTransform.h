#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 59 member(s).
class CMFReadWriteTransform {
public:
    class COutputStreamInfo;
    class OnMFTEventAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFReadWriteTransform@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteTransformStreamChange@CMFReadWriteTransform@@UEAAJXZ
    virtual long CompleteTransformStreamChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFReadWriteTransform@@SAJKPEAUIMFTransform@@U_GUID@@PEAUIMFAttributes@@PEAPEAUIMFReadWriteTransform@@@Z
    static long CreateInstance(unsigned long, IMFTransform *, _GUID, IMFAttributes *, IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drain@CMFReadWriteTransform@@UEAAJXZ
    virtual long Drain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDXVA@CMFReadWriteTransform@@UEAAJH@Z
    virtual long EnableDXVA(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFReadWriteTransform@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCategory@CMFReadWriteTransform@@UEAAJPEAU_GUID@@@Z
    virtual long GetCategory(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputAvailableType@CMFReadWriteTransform@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetInputAvailableType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamAttributes@CMFReadWriteTransform@@UEAAJPEAPEAUIMFAttributes@@@Z
    virtual long GetInputStreamAttributes(IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputType@CMFReadWriteTransform@@UEAAJPEAPEAUIMFMediaType@@@Z
    virtual long GetInputType(IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMFT@CMFReadWriteTransform@@UEAAJPEAPEAUIMFTransform@@@Z
    virtual long GetMFT(IMFTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputAvailableType@CMFReadWriteTransform@@UEAAJKKPEAPEAUIMFMediaType@@@Z
    virtual long GetOutputAvailableType(unsigned long, unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamAttributes@CMFReadWriteTransform@@UEAAJPEAPEAUIMFAttributes@@@Z
    virtual long GetOutputStreamAttributes(IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamCount@CMFReadWriteTransform@@UEAAKXZ
    virtual unsigned long GetOutputStreamCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamStatus@CMFReadWriteTransform@@UEAAJKPEAK@Z
    virtual long GetOutputStreamStatus(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputType@CMFReadWriteTransform@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetOutputType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFReadWriteTransform@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsD3DAware@CMFReadWriteTransform@@UEAAHXZ
    virtual int IsD3DAware();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDXVAEnabled@CMFReadWriteTransform@@UEAAHXZ
    virtual int IsDXVAEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDraining@CMFReadWriteTransform@@UEAAHXZ
    virtual int IsDraining();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlushing@CMFReadWriteTransform@@UEAAHXZ
    virtual int IsFlushing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVideoCapturePlugin@CMFReadWriteTransform@@UEAAHXZ
    virtual int IsVideoCapturePlugin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockOutputType@CMFReadWriteTransform@@UEAAXH@Z
    virtual void LockOutputType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Log@CMFReadWriteTransform@@UEAAXK@Z
    virtual void Log(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvent@CMFReadWriteTransform@@UEAAJPEAUIMFMediaEvent@@@Z
    virtual long ProcessEvent(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CMFReadWriteTransform@@UEAAJPEAUIMFSample@@@Z
    virtual long ProcessInput(IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOutput@CMFReadWriteTransform@@UEAAJPEAPEAPEAUIMFSample@@PEAK1PEAPEAUIMFCollection@@@Z
    virtual long ProcessOutput(IMFSample * * *, unsigned long *, unsigned long *, IMFCollection * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFReadWriteTransform@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFReadWriteTransform@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD3DManager@CMFReadWriteTransform@@UEAAJPEAUIUnknown@@@Z
    virtual long SetD3DManager(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputType@CMFReadWriteTransform@@UEAAJPEAUIMFMediaType@@K@Z
    virtual long SetInputType(IMFMediaType *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputType@CMFReadWriteTransform@@UEAAJKPEAUIMFMediaType@@K@Z
    virtual long SetOutputType(unsigned long, IMFMediaType *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CMFReadWriteTransform@@UEAAJPEAUIMFReadWriteTransformChain@@@Z
    virtual long SetParent(IMFReadWriteTransformChain *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequiredOutputSampleCount@CMFReadWriteTransform@@UEAAXK@Z
    virtual void SetRequiredOutputSampleCount(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkQueue@CMFReadWriteTransform@@UEAAJK@Z
    virtual long SetWorkQueue(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFReadWriteTransform@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartStreaming@CMFReadWriteTransform@@UEAAJXZ
    virtual long StartStreaming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopStreaming@CMFReadWriteTransform@@UEAAJXZ
    virtual long StopStreaming();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFReadWriteTransform@@IEAA@KPEAUIMFTransform@@U_GUID@@PEAUIMFAttributes@@@Z
    CMFReadWriteTransform(unsigned long, IMFTransform *, _GUID, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFReadWriteTransform@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAllocatorForWrapper@CMFReadWriteTransform@@IEAAJH@Z
    long InitializeAllocatorForWrapper(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStreams@CMFReadWriteTransform@@IEAAJXZ
    long InitializeStreams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVideoSampleAllocator@CMFReadWriteTransform@@IEAAJXZ
    long InitializeVideoSampleAllocator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMFTEvent@CMFReadWriteTransform@@IEAAXPEAUIMFAsyncResult@@@Z
    void OnMFTEvent(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformStreamChange@CMFReadWriteTransform@@IEAAJXZ
    long OnTransformStreamChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformStreamFormatChange@CMFReadWriteTransform@@IEAAJK@Z
    long OnTransformStreamFormatChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@CMFReadWriteTransform@@IEAAJW4_MFT_MESSAGE_TYPE@@_K@Z
    long ProcessMessage(int, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDrainState@CMFReadWriteTransform@@IEAAXW4DRAIN_STATE@IMFReadWriteTransform@@@Z
    void SetDrainState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFReadWriteTransform@@MEAA@XZ
    virtual ~CMFReadWriteTransform();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureD3D@CMFReadWriteTransform@@AEAAXXZ
    void ConfigureD3D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteOutputStreams@CMFReadWriteTransform@@AEAAXXZ
    void DeleteOutputStreams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD3DSample@CMFReadWriteTransform@@AEAAJPEAUIMFSample@@PEAPEAU2@@Z
    long EnsureD3DSample(IMFSample *, IMFSample * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputVideoSampleAllocator@CMFReadWriteTransform@@AEAAJXZ
    long InitializeInputVideoSampleAllocator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOutputBuffers@CMFReadWriteTransform@@AEAAXXZ
    void ReleaseOutputBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupOutputBuffers@CMFReadWriteTransform@@AEAAJXZ
    long SetupOutputBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceSample@CMFReadWriteTransform@@AEAAXPEBDKPEAUIMFSample@@_NK@Z
    void TraceSample(char const *, unsigned long, IMFSample *, bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeInputVideoSampleAllocator@CMFReadWriteTransform@@AEAAXXZ
    void UninitializeInputVideoSampleAllocator();
};
