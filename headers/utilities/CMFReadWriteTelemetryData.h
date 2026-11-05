#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 12 member(s).
class CMFReadWriteTelemetryData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFReadWriteTelemetryData@@QEAA@XZ
    CMFReadWriteTelemetryData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTypeLogging@CMFReadWriteTelemetryData@@QEAAXXZ
    void EndTypeLogging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMediaTypeOnError@CMFReadWriteTelemetryData@@QEAAXJHPEAUIMFMediaType@@@Z
    void LogMediaTypeOnError(long, int, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTransform@CMFReadWriteTelemetryData@@QEAAXHPEAUIMFTransform@@U_GUID@@@Z
    void LogTransform(int, IMFTransform *, _GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamIndex@CMFReadWriteTelemetryData@@QEAAXH@Z
    void SetStreamIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTelemetrySession@CMFReadWriteTelemetryData@@QEAAXPEAUIMFTelemetrySession@@@Z
    void SetTelemetrySession(IMFTelemetrySession *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFReadWriteTelemetryData@@UEAA@XZ
    virtual ~CMFReadWriteTelemetryData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAllocatedString@CMFReadWriteTelemetryData@@IEAAJPEAUIMFAttributes@@U_GUID@@PEBDAEAV?$CMFBaseStringT@D@@@Z
    long AppendAllocatedString(IMFAttributes *, _GUID, char const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMediaTypeProperties@CMFReadWriteTelemetryData@@IEAAJPEAUIMFMediaType@@@Z
    long LogMediaTypeProperties(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTransformCategory@CMFReadWriteTelemetryData@@IEAAXU_GUID@@@Z
    void LogTransformCategory(_GUID);
};
