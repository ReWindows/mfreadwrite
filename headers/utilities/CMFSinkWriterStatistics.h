#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 10 member(s).
class CMFSinkWriterStatistics {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSinkWriterStatistics@@QEAA@XZ
    CMFSinkWriterStatistics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxEncoderLag@CMFSinkWriterStatistics@@QEAAKXZ
    unsigned long GetMaxEncoderLag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatistics@CMFSinkWriterStatistics@@QEAAJKPEAU_MF_SINK_WRITER_STATISTICS@@@Z
    long GetStatistics(unsigned long, _MF_SINK_WRITER_STATISTICS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFSinkWriterStatistics@@QEAAJK@Z
    long Initialize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlush@CMFSinkWriterStatistics@@QEAAXK@Z
    void OnFlush(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStreamTick@CMFSinkWriterStatistics@@QEAAXK_J@Z
    void OnStreamTick(unsigned long, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransformRemoved@CMFSinkWriterStatistics@@QEAAXK@Z
    void OnTransformRemoved(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSinkWriterStatistics@@QEAA@XZ
    ~CMFSinkWriterStatistics();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverallStatistics@CMFSinkWriterStatistics@@AEAAXPEAU_MF_SINK_WRITER_STATISTICS@@@Z
    void GetOverallStatistics(_MF_SINK_WRITER_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamStatistics@CMFSinkWriterStatistics@@AEAAXKPEAUMF_SINK_WRITER_STATISTICS_PRIV@1@@Z
    void GetStreamStatistics(unsigned long, WindissectOpaque *);
};
