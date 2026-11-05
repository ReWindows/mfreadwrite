#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 5 member(s).
class CMFReadWriteClassFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceFromObject@CMFReadWriteClassFactory@@UEAAJAEBU_GUID@@PEAUIUnknown@@PEAUIMFAttributes@@0PEAPEAX@Z
    virtual long CreateInstanceFromObject(_GUID const &, IUnknown *, IMFAttributes *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceFromURL@CMFReadWriteClassFactory@@UEAAJAEBU_GUID@@PEBGPEAUIMFAttributes@@0PEAPEAX@Z
    virtual long CreateInstanceFromURL(_GUID const &, unsigned short const *, IMFAttributes *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistry@CMFReadWriteClassFactory@@SAJH@Z
    static long UpdateRegistry(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFReadWriteClassFactory@@QEAA@XZ
    ~CMFReadWriteClassFactory();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFReadWriteClassFactory@@IEAA@XZ
    CMFReadWriteClassFactory();
};
