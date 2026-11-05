#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 5 member(s).
class MFMEDIATYPEUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttributeUINT32Changed@MFMEDIATYPEUtils@@YAHAEBU_GUID@@PEAUIMFMediaType@@1@Z
    int AttributeUINT32Changed(_GUID const &, IMFMediaType *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareFullToPartialMediaType@MFMEDIATYPEUtils@@YAHPEAUIMFMediaType@@0@Z
    int CompareFullToPartialMediaType(IMFMediaType *, IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeVideoSize@MFMEDIATYPEUtils@@YAJPEAUIMFMediaType@@PEAK1@Z
    long GetNativeVideoSize(IMFMediaType *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtype@MFMEDIATYPEUtils@@YAJPEAUIMFMediaType@@PEAU_GUID@@@Z
    long GetSubtype(IMFMediaType *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeAudioMediaTypes@MFMEDIATYPEUtils@@YAJPEAUIMFMediaType@@0PEAPEAU2@@Z
    long MergeAudioMediaTypes(IMFMediaType *, IMFMediaType *, IMFMediaType * *);
};
