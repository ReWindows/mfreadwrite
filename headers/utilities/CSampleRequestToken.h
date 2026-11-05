#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 5 member(s).
class CSampleRequestToken {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSampleRequestToken@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSampleRequestToken@@QEAA@_K@Z
    CSampleRequestToken(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestIndex@CSampleRequestToken@@UEAA_KXZ
    virtual uint64_t GetRequestIndex();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSampleRequestToken@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSampleRequestToken@@UEAAKXZ
    virtual unsigned long Release();
};
