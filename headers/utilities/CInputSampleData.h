#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 5 member(s).
class CInputSampleData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CInputSampleData@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DequeueSampleInfo@CInputSampleData@@QEAAJPEAPEAUIMFSample@@PEAKPEA_J@Z
    long DequeueSampleInfo(IMFSample * *, unsigned long *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CInputSampleData@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueSampleInfo@CInputSampleData@@QEAAJPEAUIMFSample@@K_J@Z
    long QueueSampleInfo(IMFSample *, unsigned long, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputSampleData@@QEAA@XZ
    ~CInputSampleData();
};
