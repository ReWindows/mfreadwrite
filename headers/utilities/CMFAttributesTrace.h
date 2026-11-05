#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 8 member(s).
class CMFAttributesTrace {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFAttributesTrace@@QEAA@PEAUIMFAttributes@@@Z
    CMFAttributesTrace(IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CMFAttributesTrace@@QEAAPEBD_N@Z
    char const * GetString(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFAttributesTrace@@QEAA@XZ
    ~CMFAttributesTrace();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAttribute@CMFAttributesTrace@@IEBAJAEAV?$CMFBaseStringT@D@@AEBU_GUID@@AEBUtagPROPVARIANT@@@Z
    long AppendAttribute(WindissectOpaque &, _GUID const &, tagPROPVARIANT const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAttributeWithCustomName@CMFAttributesTrace@@IEBAJAEAV?$CMFBaseStringT@D@@PEBDAEBUtagPROPVARIANT@@@Z
    long AppendAttributeWithCustomName(WindissectOpaque &, char const *, tagPROPVARIANT const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendGuid@CMFAttributesTrace@@IEBAJAEAV?$CMFBaseStringT@D@@AEBU_GUID@@@Z
    long AppendGuid(WindissectOpaque &, _GUID const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendPropVariant@CMFAttributesTrace@@IEBAJAEAV?$CMFBaseStringT@D@@AEBUtagPROPVARIANT@@@Z
    long AppendPropVariant(WindissectOpaque &, tagPROPVARIANT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFriendlyMFGuidName@CMFAttributesTrace@@MEBAPEBDAEBU_GUID@@@Z
    virtual char const * GetFriendlyMFGuidName(_GUID const &) const;
};
