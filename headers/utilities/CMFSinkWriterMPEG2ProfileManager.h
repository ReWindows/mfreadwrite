#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 9 member(s).
class CMFSinkWriterMPEG2ProfileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStream@CMFSinkWriterMPEG2ProfileManager@@UEAAJPEAUIMFMediaType@@PEAK@Z
    virtual long AddStream(IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriterMPEG2ProfileManager@@SAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateInstance(IMFByteStream *, IMFAttributes *, IMFSinkWriterProfileManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncapsulateFormatChange@CMFSinkWriterMPEG2ProfileManager@@UEAAJKPEAUIMFMediaType@@0@Z
    virtual long EncapsulateFormatChange(unsigned long, IMFMediaType *, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaSink@CMFSinkWriterMPEG2ProfileManager@@UEAAJPEAPEAUIMFMediaSink@@@Z
    virtual long GetMediaSink(IMFMediaSink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWriteSample@CMFSinkWriterMPEG2ProfileManager@@UEAAJKPEAUIMFSample@@@Z
    virtual long OnWriteSample(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStream@CMFSinkWriterMPEG2ProfileManager@@UEAAJKPEAUIMFMediaType@@@Z
    virtual long UpdateStream(unsigned long, IMFMediaType *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFSinkWriterMPEG2ProfileManager@@AEAAJPEAUIMFAttributes@@@Z
    long Initialize(IMFAttributes *);
};
