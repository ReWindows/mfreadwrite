#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 5 member(s).
class CMFSinkWriter3GPProfileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStream@CMFSinkWriter3GPProfileManager@@UEAAJPEAUIMFMediaType@@PEAK@Z
    virtual long AddStream(IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriter3GPProfileManager@@SAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateInstance(IMFByteStream *, IMFAttributes *, IMFSinkWriterProfileManager * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMediaSink@CMFSinkWriter3GPProfileManager@@MEAAJXZ
    virtual long CreateMediaSink();
};
