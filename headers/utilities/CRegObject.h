#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 11 member(s).
namespace ATL {
class CRegObject {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRegObject@ATL@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z
    virtual long AddReplacement(unsigned short const *, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRegObject@ATL@@QEAA@XZ
    CRegObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReplacements@CRegObject@ATL@@UEAAJXZ
    virtual long ClearReplacements();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRegObject@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRegObject@ATL@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z
    unsigned short const * StrFromMap(unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegObject@ATL@@UEAA@XZ
    virtual ~CRegObject();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z
    long RegisterFromResource(unsigned short const *, unsigned short const *, unsigned short const *, int);
};
} // namespace ATL
