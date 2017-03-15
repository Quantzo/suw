///////////////////////////////////////////////////////////////////////////////
// PodgrzewaczCtrl.h

#ifndef __PODGRZEWACZCTRL_H__
#define __PODGRZEWACZCTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define PODGRZEWACZDRV_NAME "PODGRZEWACZ"

#include "resource.h"       // main symbols
#include "PodgrzewaczW32.h"
#include "TcBase.h"
#include "PodgrzewaczClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CPodgrzewaczCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CPodgrzewaczCtrl, &CLSID_PodgrzewaczCtrl>
	, public IPodgrzewaczCtrl
	, public ITcOCFCtrlImpl<CPodgrzewaczCtrl, CPodgrzewaczClassFactory>
{
public:
	CPodgrzewaczCtrl();
	virtual ~CPodgrzewaczCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_PODGRZEWACZCTRL)
DECLARE_NOT_AGGREGATABLE(CPodgrzewaczCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CPodgrzewaczCtrl)
	COM_INTERFACE_ENTRY(IPodgrzewaczCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __PODGRZEWACZCTRL_H__
