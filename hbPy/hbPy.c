#include <Python.h>
#include <hbapiitm.h>
#include <hbapierr.h>
#include <hbapi.h>
#include <hbvm.h>
#include "hbthread.h"
#include "hbxvm.h"

HB_FUNC( HBPY_RUN ) {


   PHB_ITEM pItem1 = hb_param( 1, HB_IT_ANY );

   HB_SIZE nLen1;
   HB_BOOL bFreeReq1;

   char * cPyCode = hb_itemString( pItem1, &nLen1, &bFreeReq1 );

   Py_SetProgramName("hbPy");
   Py_Initialize();
   PyRun_SimpleString( cPyCode );
   Py_Finalize();
   if( bFreeReq1 )
      hb_xfree( cPyCode );


   hb_retni(0);
}
