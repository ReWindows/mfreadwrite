#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 16 member(s).
namespace CMFSourceReaderStream {
class CSourceReaderStreamInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSourceReaderStreamInfo@CMFSourceReaderStream@@SAJKKPEAUIMFMediaType@@PEAUIUnknown@@PEAUIMFAttributes@@PEAPEAV12@@Z
    static long CreateInstance(unsigned long, unsigned long, IMFMediaType *, IUnknown *, IMFAttributes *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAXXZ
    void Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAJXZ
    long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalMediaType@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAXPEAPEAUIMFMediaType@@@Z
    void GetInternalMediaType(IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoSampleAllocator@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAJPEAPEAUIMFVideoSampleAllocator@@@Z
    long GetVideoSampleAllocator(IMFVideoSampleAllocator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueFormatChange@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAJXZ
    long QueueFormatChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueSample@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAJPEAUIMFSample@@H@Z
    long QueueSample(IMFSample *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSample@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAJPEAKPEAPEAUIMFSample@@@Z
    long ReadSample(unsigned long *, IMFSample * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVideoSampleAllocator@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAXXZ
    void ResetVideoSampleAllocator();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExternalMediaType@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAXPEAUIMFMediaType@@@Z
    void SetExternalMediaType(IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInternalMediaType@CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAAXPEAUIMFMediaType@@@Z
    void SetInternalMediaType(IMFMediaType *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSourceReaderStreamInfo@CMFSourceReaderStream@@QEAA@XZ
    ~CSourceReaderStreamInfo();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSourceReaderStreamInfo@CMFSourceReaderStream@@AEAA@KKPEAUIMFMediaType@@PEAUIUnknown@@PEAUIMFAttributes@@@Z
    CSourceReaderStreamInfo(unsigned long, unsigned long, IMFMediaType *, IUnknown *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitVideoSampleAllocator@CSourceReaderStreamInfo@CMFSourceReaderStream@@AEAAJPEAUIMFMediaType@@@Z
    long InitVideoSampleAllocator(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSourceReaderStreamInfo@CMFSourceReaderStream@@AEAAJXZ
    long Initialize();
};
} // namespace CMFSourceReaderStream
