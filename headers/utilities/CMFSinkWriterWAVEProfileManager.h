#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 9 member(s).
class CMFSinkWriterWAVEProfileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStream@CMFSinkWriterWAVEProfileManager@@UEAAJPEAUIMFMediaType@@PEAK@Z
    virtual long AddStream(IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriterWAVEProfileManager@@SAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateInstance(IMFByteStream *, IMFAttributes *, IMFSinkWriterProfileManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncapsulateFormatChange@CMFSinkWriterWAVEProfileManager@@UEAAJKPEAUIMFMediaType@@0@Z
    virtual long EncapsulateFormatChange(unsigned long, IMFMediaType *, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaSink@CMFSinkWriterWAVEProfileManager@@UEAAJPEAPEAUIMFMediaSink@@@Z
    virtual long GetMediaSink(IMFMediaSink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWriteSample@CMFSinkWriterWAVEProfileManager@@UEAAJKPEAUIMFSample@@@Z
    virtual long OnWriteSample(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStream@CMFSinkWriterWAVEProfileManager@@UEAAJKPEAUIMFMediaType@@@Z
    virtual long UpdateStream(unsigned long, IMFMediaType *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriterWAVEProfileManager@@UEAA@XZ
    virtual ~CMFSinkWriterWAVEProfileManager();
};
