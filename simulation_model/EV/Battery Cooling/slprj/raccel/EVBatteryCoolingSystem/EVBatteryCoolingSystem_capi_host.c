#include "EVBatteryCoolingSystem_capi_host.h"
static EVBatteryCoolingSystem_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        EVBatteryCoolingSystem_host_InitializeDataMapInfo(&(root), "EVBatteryCoolingSystem");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
