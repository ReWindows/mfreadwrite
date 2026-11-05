#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 13 member(s).
class ATL {
public:
    class CAtlBaseModule;
    class CAtlComModule;
    class CAtlModule;
    class CComClassFactory;
    class CComCriticalSection;
    class CComModule;
    class CComObjectRootBase;
    class CComSafeDeleteCriticalSection;
    class CExpansionVector;
    class CRegKey;
    class CRegObject;
    class CRegParser;
    class _ATL_BASE_MODULE70;
    class _ATL_MODULE70;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z
    void AtlCallTermFunc(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComModuleGetClassObject@ATL@@YAJPEAU_ATL_COM_MODULE70@1@AEBU_GUID@@1PEAPEAX@Z
    long AtlComModuleGetClassObject(WindissectOpaque*, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z
    IUnknown * AtlComPtrAssign(IUnknown * *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCrtErrorCheck@ATL@@YAHH@Z
    int AtlCrtErrorCheck(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlHresultFromLastError@ATL@@YAJXZ
    long AtlHresultFromLastError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlHresultFromWin32@ATL@@YAJK@Z
    long AtlHresultFromWin32(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z
    long AtlInternalQueryInterface(void *, WindissectOpaque const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlThrowImpl@ATL@@YAXJ@Z
    void AtlThrowImpl(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z
    int InlineIsEqualUnknown(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z
    unsigned long SafeDecrementReferenceMultiThread(long volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z
    unsigned long SafeIncrementReferenceMultiThread(long volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AtlRaiseException@ATL@@YAXKK@Z
    void _AtlRaiseException(unsigned long, unsigned long);
};
