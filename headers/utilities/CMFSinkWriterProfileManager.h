#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 11 member(s).
class CMFSinkWriterProfileManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSinkWriterProfileManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFSinkWriterProfileManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSinkWriterProfileManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSinkWriterProfileManager@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSinkWriterProfileManager@@IEAA@PEAUIMFByteStream@@@Z
    CMFSinkWriterProfileManager(IMFByteStream *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriterProfileManager@@MEAA@XZ
    virtual ~CMFSinkWriterProfileManager();
};
