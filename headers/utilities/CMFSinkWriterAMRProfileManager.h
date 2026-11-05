#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 9 member(s).
class CMFSinkWriterAMRProfileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStream@CMFSinkWriterAMRProfileManager@@UEAAJPEAUIMFMediaType@@PEAK@Z
    virtual long AddStream(IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriterAMRProfileManager@@SAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateInstance(IMFByteStream *, IMFAttributes *, IMFSinkWriterProfileManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncapsulateFormatChange@CMFSinkWriterAMRProfileManager@@UEAAJKPEAUIMFMediaType@@0@Z
    virtual long EncapsulateFormatChange(unsigned long, IMFMediaType *, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaSink@CMFSinkWriterAMRProfileManager@@UEAAJPEAPEAUIMFMediaSink@@@Z
    virtual long GetMediaSink(IMFMediaSink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWriteSample@CMFSinkWriterAMRProfileManager@@UEAAJKPEAUIMFSample@@@Z
    virtual long OnWriteSample(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStream@CMFSinkWriterAMRProfileManager@@UEAAJKPEAUIMFMediaType@@@Z
    virtual long UpdateStream(unsigned long, IMFMediaType *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriterAMRProfileManager@@UEAA@XZ
    virtual ~CMFSinkWriterAMRProfileManager();
};
