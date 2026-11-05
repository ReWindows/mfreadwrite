#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 13 member(s).
class CMFSinkWriterASFProfileManager {
public:
    class CPayloadExtensions;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStream@CMFSinkWriterASFProfileManager@@UEAAJPEAUIMFMediaType@@PEAK@Z
    virtual long AddStream(IMFMediaType *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriterASFProfileManager@@SAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateInstance(IMFByteStream *, IMFAttributes *, IMFSinkWriterProfileManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncapsulateFormatChange@CMFSinkWriterASFProfileManager@@UEAAJKPEAUIMFMediaType@@0@Z
    virtual long EncapsulateFormatChange(unsigned long, IMFMediaType *, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaSink@CMFSinkWriterASFProfileManager@@UEAAJPEAPEAUIMFMediaSink@@@Z
    virtual long GetMediaSink(IMFMediaSink * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWriteSample@CMFSinkWriterASFProfileManager@@UEAAJKPEAUIMFSample@@@Z
    virtual long OnWriteSample(unsigned long, IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStream@CMFSinkWriterASFProfileManager@@UEAAJKPEAUIMFMediaType@@@Z
    virtual long UpdateStream(unsigned long, IMFMediaType *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriterASFProfileManager@@UEAA@XZ
    virtual ~CMFSinkWriterASFProfileManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePayloadExtensionSystems@CMFSinkWriterASFProfileManager@@AEAAJPEAUIMFASFStreamConfig@@@Z
    long ConfigurePayloadExtensionSystems(IMFASFStreamConfig *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetASFContentType@CMFSinkWriterASFProfileManager@@AEBAEPEAUIMFSample@@W4_MFVideoInterlaceMode@@@Z
    unsigned char GetASFContentType(IMFSample *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetASFPixelAspectRatio@CMFSinkWriterASFProfileManager@@AEBAX_KQEAE@Z
    void GetASFPixelAspectRatio(uint64_t, unsigned char * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFSinkWriterASFProfileManager@@AEAAJXZ
    long Initialize();
};
