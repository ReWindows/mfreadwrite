#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfreadwrite.dll by Windissect. 32 member(s).
class CMFReadWriteTransformFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCodecPrivateData@CMFReadWriteTransformFactory@@SAJPEAUIMFTransform@@PEAUIMFMediaType@@@Z
    static long ConfigureCodecPrivateData(IMFTransform *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFReadWriteTransformFactory@@SAJW4TRANSFORM_CATEGORY@1@KPEAUIMFAttributes@@HPEAUIMFMediaType@@2PEAPEAUIMFReadWriteTransform@@@Z
    static long CreateInstance(int, unsigned long, IMFAttributes *, int, IMFMediaType *, IMFMediaType *, IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformWrapper@CMFReadWriteTransformFactory@@SAJKPEAUIMFTransform@@U_GUID@@PEAUIMFAttributes@@PEAUIMFMediaType@@PEAPEAUIMFReadWriteTransform@@@Z
    static long CreateTransformWrapper(unsigned long, IMFTransform *, _GUID, IMFAttributes *, IMFMediaType *, IMFReadWriteTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealTransformFromReadWriteTransform@CMFReadWriteTransformFactory@@SAJPEAUIMFReadWriteTransform@@PEAPEAUIMFTransform@@@Z
    static long GetRealTransformFromReadWriteTransform(IMFReadWriteTransform *, IMFTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateEncodingParameters@CMFReadWriteTransformFactory@@SAJPEAUIMFTransform@@PEAUIMFMediaType@@PEAUIMFAttributes@@@Z
    static long PropagateEncodingParameters(IMFTransform *, IMFMediaType *, IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDecoderAttributes@CMFReadWriteTransformFactory@@SAJPEAUIMFTransform@@PEAUIMFAttributes@@@Z
    static long SetDecoderAttributes(IMFTransform *, IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVideoProcessorAttributes@CMFReadWriteTransformFactory@@SAJPEAUIMFTransform@@PEAUIMFAttributes@@@Z
    static long SetVideoProcessorAttributes(IMFTransform *, IMFAttributes *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForAndConfigureWMAProDecoder@CMFReadWriteTransformFactory@@AEAAJXZ
    long CheckForAndConfigureWMAProDecoder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUpDownTypes@CMFReadWriteTransformFactory@@AEAAJPEAUIMFMediaType@@PEAUIMFTransform@@PEAH@Z
    long CheckUpDownTypes(IMFMediaType *, IMFTransform *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureAudioCodecPrivateData@CMFReadWriteTransformFactory@@CAJPEAUIMFTransform@@PEAUIMFMediaType@@@Z
    static long ConfigureAudioCodecPrivateData(IMFTransform *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureAudioConverter@CMFReadWriteTransformFactory@@AEAAJPEAPEAUIMFReadWriteTransform@@@Z
    long ConfigureAudioConverter(IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureDecoder@CMFReadWriteTransformFactory@@AEAAJXZ
    long ConfigureDecoder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureEncoder@CMFReadWriteTransformFactory@@AEAAJXZ
    long ConfigureEncoder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureEncoderDirect@CMFReadWriteTransformFactory@@AEAAJXZ
    long ConfigureEncoderDirect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureEncoderWithConverter@CMFReadWriteTransformFactory@@AEAAJXZ
    long ConfigureEncoderWithConverter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureInputMediaType@CMFReadWriteTransformFactory@@AEAAJXZ
    long ConfigureInputMediaType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureOutputMediaType@CMFReadWriteTransformFactory@@AEAAJXZ
    long ConfigureOutputMediaType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVideoConverter@CMFReadWriteTransformFactory@@AEAAJPEAPEAUIMFReadWriteTransform@@@Z
    long ConfigureVideoConverter(IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVideoProcessor@CMFReadWriteTransformFactory@@AEAAJPEAPEAUIMFReadWriteTransform@@@Z
    long ConfigureVideoProcessor(IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectConverterToEncoder@CMFReadWriteTransformFactory@@AEAAJPEAUIMFReadWriteTransform@@@Z
    long ConnectConverterToEncoder(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectConverterUsingProvidedMediaType@CMFReadWriteTransformFactory@@AEAAJPEAUIMFReadWriteTransform@@@Z
    long ConnectConverterUsingProvidedMediaType(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectResamplerToEncoder@CMFReadWriteTransformFactory@@AEAAJPEAUIMFReadWriteTransform@@@Z
    long ConnectResamplerToEncoder(IMFReadWriteTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConverter@CMFReadWriteTransformFactory@@AEAAJPEAPEAUIMFReadWriteTransform@@@Z
    long CreateConverter(IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSecureDecoder@CMFReadWriteTransformFactory@@AEAAJPEAPEAUIMFReadWriteTransform@@@Z
    long CreateSecureDecoder(IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransform@CMFReadWriteTransformFactory@@AEAAJPEAPEAUIMFReadWriteTransform@@@Z
    long CreateTransform(IMFReadWriteTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumTransforms@CMFReadWriteTransformFactory@@AEAAJU_GUID@@IPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@1PEAPEAPEAUIMFActivate@@PEAI@Z
    long EnumTransforms(_GUID, unsigned int, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, IMFActivate * * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumTransformsByLuid@CMFReadWriteTransformFactory@@AEAAJU_GUID@@IPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@1PEAPEAPEAUIMFActivate@@PEAI@Z
    long EnumTransformsByLuid(_GUID, unsigned int, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, IMFActivate * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3DDeviceLUID@CMFReadWriteTransformFactory@@AEAAJPEA_K@Z
    long GetD3DDeviceLUID(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultH264EncodingParameters@CMFReadWriteTransformFactory@@CAJPEAUIMFMediaType@@PEAUIMFAttributes@@@Z
    static long SetDefaultH264EncodingParameters(IMFMediaType *, IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultWMALosslessEncodingParameters@CMFReadWriteTransformFactory@@CAJPEAUIMFTransform@@@Z
    static long SetDefaultWMALosslessEncodingParameters(IMFTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreMFTelemetrySessionAttribute@CMFReadWriteTransformFactory@@AEAAXPEAUIMFActivate@@@Z
    void StoreMFTelemetrySessionAttribute(IMFActivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockAsyncMFT@CMFReadWriteTransformFactory@@CAJPEAUIMFTransform@@PEAH@Z
    static long UnlockAsyncMFT(IMFTransform *, int *);
};
