// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "moprojcoordsys.h"

// Dispatch interfaces referenced by this interface
#include "mogeocoordsys.h"
#include "mounit.h"
#include "MoProjection.h"


/////////////////////////////////////////////////////////////////////////////
// CMoProjCoordSys properties

long CMoProjCoordSys::GetType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CMoProjCoordSys::SetType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

CString CMoProjCoordSys::GetName()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void CMoProjCoordSys::SetName(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

CMoGeoCoordSys CMoProjCoordSys::GetGeoCoordSys()
{
	LPDISPATCH pDispatch;
	GetProperty(0x3, VT_DISPATCH, (void*)&pDispatch);
	return CMoGeoCoordSys(pDispatch);
}

void CMoProjCoordSys::SetGeoCoordSys(LPDISPATCH propVal)
{
	SetProperty(0x3, VT_DISPATCH, propVal);
}

CMoUnit CMoProjCoordSys::GetUnit()
{
	LPDISPATCH pDispatch;
	GetProperty(0x4, VT_DISPATCH, (void*)&pDispatch);
	return CMoUnit(pDispatch);
}

void CMoProjCoordSys::SetUnit(LPDISPATCH propVal)
{
	SetProperty(0x4, VT_DISPATCH, propVal);
}

CMoProjection CMoProjCoordSys::GetProjection()
{
	LPDISPATCH pDispatch;
	GetProperty(0x5, VT_DISPATCH, (void*)&pDispatch);
	return CMoProjection(pDispatch);
}

void CMoProjCoordSys::SetProjection(LPDISPATCH propVal)
{
	SetProperty(0x5, VT_DISPATCH, propVal);
}

BOOL CMoProjCoordSys::GetIsProjected()
{
	BOOL result;
	GetProperty(0x6, VT_BOOL, (void*)&result);
	return result;
}

void CMoProjCoordSys::SetIsProjected(BOOL propVal)
{
	SetProperty(0x6, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMoProjCoordSys operations

void CMoProjCoordSys::SetParameter(long ParameterType, double ParameterValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_R8;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ParameterType, ParameterValue);
}

double CMoProjCoordSys::GetParameter(long ParameterType)
{
	double result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		ParameterType);
	return result;
}

LPDISPATCH CMoProjCoordSys::Transform(LPDISPATCH FromCoordSys, LPDISPATCH FromShape, const VARIANT& DensificationTolerance, const VARIANT& GeoTransformation)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_DISPATCH VTS_DISPATCH VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		FromCoordSys, FromShape, &DensificationTolerance, &GeoTransformation);
	return result;
}

void CMoProjCoordSys::Export(LPCTSTR OutName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 OutName);
}

CString CMoProjCoordSys::ReturnDescription()
{
	CString result;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}