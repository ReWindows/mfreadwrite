#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 5 member(s).
class CBaseUnknown {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBaseUnknown@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBaseUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBaseUnknown@@UEAAKXZ
    virtual unsigned long Release();
};
