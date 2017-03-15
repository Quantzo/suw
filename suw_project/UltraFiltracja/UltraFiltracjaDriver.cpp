///////////////////////////////////////////////////////////////////////////////
// UltraFiltracjaDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "UltraFiltracjaDriver.h"
#include "UltraFiltracjaClassFactory.h"

DECLARE_GENERIC_DEVICE(ULTRAFILTRACJADRV)

IOSTATUS CUltraFiltracjaDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CUltraFiltracjaClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CUltraFiltracjaDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CUltraFiltracjaDriver::ULTRAFILTRACJADRV_GetVersion( )
{
	return( (ULTRAFILTRACJADRV_Major << 8) | ULTRAFILTRACJADRV_Minor );
}

