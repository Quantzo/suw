///////////////////////////////////////////////////////////////////////////////
// UltraFiltracjaCtrl.h

#ifndef __ULTRAFILTRACJACTRL_H__
#define __ULTRAFILTRACJACTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define ULTRAFILTRACJADRV_NAME "ULTRAFILTRACJA"

#include "resource.h"       // main symbols
#include "UltraFiltracjaW32.h"
#include "TcBase.h"
#include "UltraFiltracjaClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CUltraFiltracjaCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CUltraFiltracjaCtrl, &CLSID_UltraFiltracjaCtrl>
	, public IUltraFiltracjaCtrl
	, public ITcOCFCtrlImpl<CUltraFiltracjaCtrl, CUltraFiltracjaClassFactory>
{
public:
	CUltraFiltracjaCtrl();
	virtual ~CUltraFiltracjaCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_ULTRAFILTRACJACTRL)
DECLARE_NOT_AGGREGATABLE(CUltraFiltracjaCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CUltraFiltracjaCtrl)
	COM_INTERFACE_ENTRY(IUltraFiltracjaCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __ULTRAFILTRACJACTRL_H__
