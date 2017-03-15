///////////////////////////////////////////////////////////////////////////////
// PodgrzewaczDriver.h

#ifndef __PODGRZEWACZDRIVER_H__
#define __PODGRZEWACZDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define PODGRZEWACZDRV_NAME        "PODGRZEWACZ"
#define PODGRZEWACZDRV_Major       1
#define PODGRZEWACZDRV_Minor       0

#define DEVICE_CLASS CPodgrzewaczDriver

#include "ObjDriver.h"

class CPodgrzewaczDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl PODGRZEWACZDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(PODGRZEWACZDRV)
	VxD_Service( PODGRZEWACZDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __PODGRZEWACZDRIVER_H__