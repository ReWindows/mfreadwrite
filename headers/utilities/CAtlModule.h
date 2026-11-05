#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
namespace ATL {
class CAtlModule {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EscapeSingleQuote@CAtlModule@ATL@@SAXPEAG_KPEBG@Z
    static void EscapeSingleQuote(unsigned short *, uint64_t, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGITPtr@CAtlModule@ATL@@UEAAJPEAPEAUIGlobalInterfaceTable@@@Z
    virtual long GetGITPtr(IGlobalInterfaceTable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockCount@CAtlModule@ATL@@UEAAJXZ
    virtual long GetLockCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CAtlModule@ATL@@UEAAJXZ
    virtual long Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Term@CAtlModule@ATL@@QEAAXXZ
    void Term();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CAtlModule@ATL@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z
    long UpdateRegistryFromResourceS(unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJPEBGHPEAU_ATL_REGMAP_ENTRY@2@@Z
    long UpdateRegistryFromResourceS(unsigned short const *, int, WindissectOpaque *);
};
} // namespace ATL
