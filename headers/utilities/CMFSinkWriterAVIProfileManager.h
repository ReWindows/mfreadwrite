#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 11 member(s).
class CMFSinkWriterAVIProfileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStream@CMFSinkWriterAVIProfileManager@@UEAAJPEAUIMFMediaType@@PEAK@Z
    virtual long AddStream(IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriterAVIProfileManager@@SAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateInstance(IMFByteStream *, IMFAttributes *, IMFSinkWriterProfileManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncapsulateFormatChange@CMFSinkWriterAVIProfileManager@@UEAAJKPEAUIMFMediaType@@0@Z
    virtual long EncapsulateFormatChange(unsigned long, IMFMediaType *, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaSink@CMFSinkWriterAVIProfileManager@@UEAAJPEAPEAUIMFMediaSink@@@Z
    virtual long GetMediaSink(IMFMediaSink * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFSinkWriterAVIProfileManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWriteSample@CMFSinkWriterAVIProfileManager@@UEAAJKPEAUIMFSample@@@Z
    virtual long OnWriteSample(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStream@CMFSinkWriterAVIProfileManager@@UEAAJKPEAUIMFMediaType@@@Z
    virtual long UpdateStream(unsigned long, IMFMediaType *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriterAVIProfileManager@@UEAA@XZ
    virtual ~CMFSinkWriterAVIProfileManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMediaSink@CMFSinkWriterAVIProfileManager@@MEAAJXZ
    virtual long CreateMediaSink();
};
