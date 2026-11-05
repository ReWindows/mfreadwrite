#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 15 member(s).
namespace CMFSourceReader {
class CMFSourceReaderManager {
public:
    class AsyncReadSampleAsyncCallback;
    class AsyncSetCurrentPositionAsyncCallback;
    class InvokeAppCallbackAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSourceReaderManager@CMFSourceReader@@QEAA@PEAV1@@Z
    CMFSourceReaderManager(CMFSourceReader *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaSource@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAPEAUIMFMediaSource@@@Z
    virtual long GetMediaSource(IMFMediaSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CMFSourceReaderManager@CMFSourceReader@@UEAAJXZ
    virtual long GetStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyError@CMFSourceReaderManager@CMFSourceReader@@UEAAXJ@Z
    virtual void NotifyError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlush@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAUIMFSourceReaderStream@@J@Z
    virtual long OnFlush(IMFSourceReaderStream *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewOutputStream@CMFSourceReaderManager@CMFSourceReader@@UEAAJPEAUIMFSourceReaderStream@@PEAK@Z
    virtual long OnNewOutputStream(IMFSourceReaderStream *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadSample@CMFSourceReaderManager@CMFSourceReader@@UEAAJKPEAUIMFSourceReaderStream@@JKK_JPEAUIMFSample@@@Z
    virtual long OnReadSample(unsigned long, IMFSourceReaderStream *, long, unsigned long, unsigned long, int64_t, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformChange@CMFSourceReaderManager@CMFSourceReader@@UEAAJK@Z
    virtual long OnTransformChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformError@CMFSourceReaderManager@CMFSourceReader@@UEAAJKJ@Z
    virtual long OnTransformError(unsigned long, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSourceReaderManager@CMFSourceReader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSourceReaderManager@CMFSourceReader@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceReader
