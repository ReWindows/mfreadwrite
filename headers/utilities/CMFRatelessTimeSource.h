#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 19 member(s).
class CMFRatelessTimeSource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFRatelessTimeSource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFRatelessTimeSource@@QEAA@XZ
    CMFRatelessTimeSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClockCharacteristics@CMFRatelessTimeSource@@UEAAJPEAK@Z
    virtual long GetClockCharacteristics(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContinuityKey@CMFRatelessTimeSource@@UEAAJPEAK@Z
    virtual long GetContinuityKey(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrelatedTime@CMFRatelessTimeSource@@UEAAJKPEA_J0@Z
    virtual long GetCorrelatedTime(unsigned long, int64_t *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CMFRatelessTimeSource@@UEAAJPEAU_MFCLOCK_PROPERTIES@@@Z
    virtual long GetProperties(_MFCLOCK_PROPERTIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CMFRatelessTimeSource@@UEAAJKPEAW4_MFCLOCK_STATE@@@Z
    virtual long GetState(unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlyingClock@CMFRatelessTimeSource@@UEAAJPEAPEAUIMFClock@@@Z
    virtual long GetUnderlyingClock(IMFClock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockPause@CMFRatelessTimeSource@@UEAAJ_J@Z
    virtual long OnClockPause(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockRestart@CMFRatelessTimeSource@@UEAAJ_J@Z
    virtual long OnClockRestart(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockSetRate@CMFRatelessTimeSource@@UEAAJ_JM@Z
    virtual long OnClockSetRate(int64_t, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockStart@CMFRatelessTimeSource@@UEAAJ_J0@Z
    virtual long OnClockStart(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockStop@CMFRatelessTimeSource@@UEAAJ_J@Z
    virtual long OnClockStop(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PokeTimeSource@CMFRatelessTimeSource@@UEAAJ_J@Z
    virtual long PokeTimeSource(int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFRatelessTimeSource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFRatelessTimeSource@@UEAAKXZ
    virtual unsigned long Release();
};
