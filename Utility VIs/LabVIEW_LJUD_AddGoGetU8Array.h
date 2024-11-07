// LabVIEW_LJUD_AddGoGetU8Array.h - Contains declarations for LabVIEW AddSGoGet (with x1 pointer safety) wrapper
#ifdef __cplusplus
extern "C"
{
#endif

long _stdcall LabVIEW_LJUD_AddGoGetU8Array(
    long Handle,
    long NumRequests,
    long NumX1Values,
    long * aIOTypes,
    long * aChannels,
    double * aValues,
    long * aX1s,
    long * aRequestErrors,
    long * GoError,
    long * aResultErrors
);

#ifdef __cplusplus
}
#endif