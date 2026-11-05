#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 12 member(s).
class CMFSinkWriterMPEG4ProfileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStream@CMFSinkWriterMPEG4ProfileManager@@UEAAJPEAUIMFMediaType@@PEAK@Z
    virtual long AddStream(IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriterMPEG4ProfileManager@@SAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateInstance(IMFByteStream *, IMFAttributes *, IMFSinkWriterProfileManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncapsulateFormatChange@CMFSinkWriterMPEG4ProfileManager@@UEAAJKPEAUIMFMediaType@@0@Z
    virtual long EncapsulateFormatChange(unsigned long, IMFMediaType *, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaSink@CMFSinkWriterMPEG4ProfileManager@@UEAAJPEAPEAUIMFMediaSink@@@Z
    virtual long GetMediaSink(IMFMediaSink * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFSinkWriterMPEG4ProfileManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWriteSample@CMFSinkWriterMPEG4ProfileManager@@UEAAJKPEAUIMFSample@@@Z
    virtual long OnWriteSample(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStream@CMFSinkWriterMPEG4ProfileManager@@UEAAJKPEAUIMFMediaType@@@Z
    virtual long UpdateStream(unsigned long, IMFMediaType *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriterMPEG4ProfileManager@@UEAA@XZ
    virtual ~CMFSinkWriterMPEG4ProfileManager();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSinkWriterMPEG4ProfileManager@@IEAA@PEAUIMFByteStream@@PEAUIMFAttributes@@H@Z
    CMFSinkWriterMPEG4ProfileManager(IMFByteStream *, IMFAttributes *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMediaSink@CMFSinkWriterMPEG4ProfileManager@@MEAAJXZ
    virtual long CreateMediaSink();
};
