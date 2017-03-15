///////////////////////////////////////////////////////////////////////////////
// PodgrzewaczDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "PodgrzewaczDriver.h"
#include "PodgrzewaczClassFactory.h"

DECLARE_GENERIC_DEVICE(PODGRZEWACZDRV)

IOSTATUS CPodgrzewaczDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CPodgrzewaczClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CPodgrzewaczDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CPodgrzewaczDriver::PODGRZEWACZDRV_GetVersion( )
{
	return( (PODGRZEWACZDRV_Major << 8) | PODGRZEWACZDRV_Minor );
}

