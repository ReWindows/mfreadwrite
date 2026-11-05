#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 7 member(s).
class CMFPropVariant {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CMFPropVariant@@QEAAJXZ
    long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementCount@CMFPropVariant@@QEBAKXZ
    unsigned long GetElementCount() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFPropVariant@@QEAA@XZ
    ~CMFPropVariant();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementDataAsVariant@CMFPropVariant@@IEBAJKPEAUtagPROPVARIANT@@@Z
    long GetElementDataAsVariant(unsigned long, tagPROPVARIANT *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementDataPtr@CMFPropVariant@@IEBAJKPEAPEAX@Z
    long GetElementDataPtr(unsigned long, void * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementData@CMFPropVariant@@IEAAJKPEBX@Z
    long SetElementData(unsigned long, void const *);
};
