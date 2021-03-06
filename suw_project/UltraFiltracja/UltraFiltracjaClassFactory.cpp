///////////////////////////////////////////////////////////////////////////////
// UltraFiltracjaClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "UltraFiltracjaClassFactory.h"
#include "UltraFiltracjaServices.h"
#include "UltraFiltracjaVersion.h"
#include "UltraFiltracjaModule.h"

BEGIN_CLASS_MAP(CUltraFiltracjaClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY(CID_UltraFiltracjaCUltraFiltracjaModule, SRVNAME_ULTRAFILTRACJA "!CUltraFiltracjaModule", CUltraFiltracjaModule)
///</AutoGeneratedContent>
END_CLASS_MAP()

CUltraFiltracjaClassFactory::CUltraFiltracjaClassFactory() : CObjClassFactory()
{
	TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME(SRVNAME_ULTRAFILTRACJA)); 
#if defined(TCDBG_UNIT_VERSION)
	TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(UltraFiltracja));
#endif //defined(TCDBG_UNIT_VERSION)
}

