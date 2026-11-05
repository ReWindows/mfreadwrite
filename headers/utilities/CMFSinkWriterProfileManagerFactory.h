#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 3 member(s).
class CMFSinkWriterProfileManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSinkWriterProfileManagerFactory@@SAJPEBGPEAUIMFByteStream@@PEAUIMFMediaSink@@PEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateInstance(unsigned short const *, IMFByteStream *, IMFMediaSink *, IMFAttributes *, IMFSinkWriterProfileManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerTypeForURL@CMFSinkWriterProfileManagerFactory@@SAJPEBGPEAU_GUID@@@Z
    static long GetContainerTypeForURL(unsigned short const *, _GUID *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSpecializedProfileManager@CMFSinkWriterProfileManagerFactory@@CAJPEAUIMFByteStream@@PEBGPEAUIMFAttributes@@PEAPEAUIMFSinkWriterProfileManager@@@Z
    static long CreateSpecializedProfileManager(IMFByteStream *, unsigned short const *, IMFAttributes *, IMFSinkWriterProfileManager * *);
};
