#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 5 member(s).
class CVPtrList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHead@CVPtrList@@QEAAPEAXPEAX@Z
    void * AddHead(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTail@CVPtrList@@QEAAPEAXPEAX@Z
    void * AddTail(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@CVPtrList@@QEBAHAEAPEAXPEAPEAX@Z
    int GetNext(void * &, void * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHead@CVPtrList@@QEAAHPEAPEAX@Z
    int RemoveHead(void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVPtrList@@QEAA@XZ
    ~CVPtrList();
};
