#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 2 member(s).
class MFLowLatencyHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLowestLatencyInMS@MFLowLatencyHelpers@@YAKPEAUIMFMediaType@@@Z
    unsigned long GetLowestLatencyInMS(IMFMediaType *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLowLatencyOnObject@MFLowLatencyHelpers@@YAJHPEAUIUnknown@@W4ObjectType@1@PEAUIMFMediaType@@@Z
    long SetLowLatencyOnObject(int, IUnknown *, int, IMFMediaType *);
};
