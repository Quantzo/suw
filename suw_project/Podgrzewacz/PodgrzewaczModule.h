///////////////////////////////////////////////////////////////////////////////
// PodgrzewaczModule.h
#pragma once

#include "PodgrzewaczInterfaces.h"

class CPodgrzewaczModule 
	: public ITComObject
	, public ITcADI
	, public ITcWatchSource
///<AutoGeneratedContent id="InheritanceList">
	, public ITcCyclic
///</AutoGeneratedContent>
{
public:
	DECLARE_IUNKNOWN()
	DECLARE_IPERSIST(CID_PodgrzewaczCPodgrzewaczModule)
	DECLARE_ITCOMOBJECT_LOCKOP()
	DECLARE_ITCADI()
	DECLARE_ITCWATCHSOURCE()
	DECLARE_OBJPARAWATCH_MAP()
	DECLARE_OBJDATAAREA_MAP()

	CPodgrzewaczModule();
	virtual	~CPodgrzewaczModule();


///<AutoGeneratedContent id="InterfaceMembers">
	// ITcCyclic
	virtual HRESULT TCOMAPI CycleUpdate(ITcTask* ipTask, ITcUnknown* ipCaller, ULONG_PTR context);

///</AutoGeneratedContent>

protected:
	DECLARE_ITCOMOBJECT_SETSTATE();

	HRESULT AddModuleToCaller();
	VOID RemoveModuleFromCaller();

	// Tracing
	CTcTrace m_Trace;

///<AutoGeneratedContent id="Members">
	TcTraceLevel m_TraceLevelMax;
	PodgrzewaczModuleParameter m_Parameter;
	PodgrzewaczModuleOutputs m_Outputs;
	PodgrzewaczModuleInputs m_Inputs;
	PodgrzewaczModuleDataToOPC m_DataToOPC;
	PodgrzewaczModuleDataFromOPC m_DataFromOPC;
	ITcCyclicCallerInfoPtr m_spCyclicCaller;
///</AutoGeneratedContent>

	// TODO: Custom variable
	UINT m_counter;
};
