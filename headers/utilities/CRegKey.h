#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 4 member(s).
namespace ATL {
class CRegKey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CRegKey@ATL@@QEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z
    long DeleteSubKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z
    long Open(HKEY__*, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z
    long RecurseDeleteKey(unsigned short const *);
};
} // namespace ATL
