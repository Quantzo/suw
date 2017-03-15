///////////////////////////////////////////////////////////////////////////////
// UltraFiltracjaDriver.h

#ifndef __ULTRAFILTRACJADRIVER_H__
#define __ULTRAFILTRACJADRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define ULTRAFILTRACJADRV_NAME        "ULTRAFILTRACJA"
#define ULTRAFILTRACJADRV_Major       1
#define ULTRAFILTRACJADRV_Minor       0

#define DEVICE_CLASS CUltraFiltracjaDriver

#include "ObjDriver.h"

class CUltraFiltracjaDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl ULTRAFILTRACJADRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(ULTRAFILTRACJADRV)
	VxD_Service( ULTRAFILTRACJADRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __ULTRAFILTRACJADRIVER_H__