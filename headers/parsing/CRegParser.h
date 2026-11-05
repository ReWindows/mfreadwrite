#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 11 member(s).
namespace ATL {
class CRegParser {
public:
    class CParseBuffer;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z
    long PreProcessBuffer(unsigned short *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z
    long RegisterBuffer(unsigned short *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z
    long AddValue(WindissectOpaque &, unsigned short const *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z
    int CanForceRemoveKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChToByte@CRegParser@ATL@@KAEG@Z
    static unsigned char ChToByte(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSubKeys@CRegParser@ATL@@IEAAHPEAUHKEY__@@@Z
    int HasSubKeys(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z
    long NextToken(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z
    long RegisterSubkeys(unsigned short *, HKEY__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z
    long SkipAssignment(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ
    void SkipWhiteSpace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z
    static unsigned short * StrChrW(unsigned short *, unsigned short);
};
} // namespace ATL
