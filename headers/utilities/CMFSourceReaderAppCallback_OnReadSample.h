#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 4 member(s).
class CMFSourceReaderAppCallback_OnReadSample {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSourceReaderAppCallback_OnReadSample@@QEAA@PEAUIMFSourceReader@@PEAUIMFSourceReaderCallback@@PEAUIMFSourceReaderStream@@KJK_JPEAUIMFSample@@@Z
    CMFSourceReaderAppCallback_OnReadSample(IMFSourceReader *, IMFSourceReaderCallback *, IMFSourceReaderStream *, unsigned long, long, unsigned long, int64_t, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAppCallback@CMFSourceReaderAppCallback_OnReadSample@@UEAAXXZ
    virtual void InvokeAppCallback();
};
