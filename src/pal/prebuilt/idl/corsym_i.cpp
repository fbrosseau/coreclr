// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_CorSymLib,0x7E348441,0x7E1F,0x380E,0xA0,0xF6,0x22,0x66,0x8F,0x0F,0x9E,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_CorSymWriter_deprecated,0x108296C1,0x281E,0x11d3,0xBD,0x22,0x00,0x00,0xF8,0x08,0x49,0xBD);


MIDL_DEFINE_GUID(CLSID, CLSID_CorSymReader_deprecated,0x108296C2,0x281E,0x11d3,0xBD,0x22,0x00,0x00,0xF8,0x08,0x49,0xBD);


MIDL_DEFINE_GUID(CLSID, CLSID_CorSymBinder_deprecated,0xAA544D41,0x28CB,0x11d3,0xBD,0x22,0x00,0x00,0xF8,0x08,0x49,0xBD);


MIDL_DEFINE_GUID(CLSID, CLSID_CorSymWriter_SxS,0x0AE2DEB0,0xF901,0x478b,0xBB,0x9F,0x88,0x1E,0xE8,0x06,0x67,0x88);


MIDL_DEFINE_GUID(CLSID, CLSID_CorSymReader_SxS,0x0A3976C5,0x4529,0x4ef8,0xB0,0xB0,0x42,0xEE,0xD3,0x70,0x82,0xCD);


MIDL_DEFINE_GUID(CLSID, CLSID_CorSymBinder_SxS,0x0A29FF9E,0x7F9C,0x4437,0x8B,0x11,0xF4,0x24,0x49,0x1E,0x39,0x31);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedBinder,0xAA544D42,0x28CB,0x11d3,0xBD,0x22,0x00,0x00,0xF8,0x08,0x49,0xBD);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedBinder2,0xACCEE350,0x89AF,0x4ccb,0x8B,0x40,0x1C,0x2C,0x4C,0x6F,0x94,0x34);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedBinder3,0x28AD3D43,0xB601,0x4d26,0x8A,0x1B,0x25,0xF9,0x16,0x5A,0xF9,0xD7);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedDispose,0x969708D2,0x05E5,0x4861,0xA3,0xB0,0x96,0xE4,0x73,0xCD,0xF6,0x3F);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedDocument,0x40DE4037,0x7C81,0x3E1E,0xB0,0x22,0xAE,0x1A,0xBF,0xF2,0xCA,0x08);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedDocumentWriter,0xB01FAFEB,0xC450,0x3A4D,0xBE,0xEC,0xB4,0xCE,0xEC,0x01,0xE0,0x06);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedMethod,0xB62B923C,0xB500,0x3158,0xA5,0x43,0x24,0xF3,0x07,0xA8,0xB7,0xE1);


MIDL_DEFINE_GUID(IID, IID_ISymENCUnmanagedMethod,0x85E891DA,0xA631,0x4c76,0xAC,0xA2,0xA4,0x4A,0x39,0xC4,0x6B,0x8C);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedNamespace,0x0DFF7289,0x54F8,0x11d3,0xBD,0x28,0x00,0x00,0xF8,0x08,0x49,0xBD);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedReader,0xB4CE6286,0x2A6B,0x3712,0xA3,0xB7,0x1E,0xE1,0xDA,0xD4,0x67,0xB5);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedSourceServerModule,0x997DD0CC,0xA76F,0x4c82,0x8D,0x79,0xEA,0x87,0x55,0x9D,0x27,0xAD);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedENCUpdate,0xE502D2DD,0x8671,0x4338,0x8F,0x2A,0xFC,0x08,0x22,0x96,0x28,0xC4);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedReaderSymbolSearchInfo,0x20D9645D,0x03CD,0x4e34,0x9C,0x11,0x98,0x48,0xA5,0xB0,0x84,0xF1);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedScope,0x68005D0F,0xB8E0,0x3B01,0x84,0xD5,0xA1,0x1A,0x94,0x15,0x49,0x42);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedConstant,0x48B25ED8,0x5BAD,0x41bc,0x9C,0xEE,0xCD,0x62,0xFA,0xBC,0x74,0xE9);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedScope2,0xAE932FBA,0x3FD8,0x4dba,0x82,0x32,0x30,0xA2,0x30,0x9B,0x02,0xDB);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedVariable,0x9F60EEBE,0x2D9A,0x3F7C,0xBF,0x58,0x80,0xBC,0x99,0x1C,0x60,0xBB);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedSymbolSearchInfo,0xF8B3534A,0xA46B,0x4980,0xB5,0x20,0xBE,0xC4,0xAC,0xEA,0xBA,0x8F);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedWriter,0xED14AA72,0x78E2,0x4884,0x84,0xE2,0x33,0x42,0x93,0xAE,0x52,0x14);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedWriter2,0x0B97726E,0x9E6D,0x4f05,0x9A,0x26,0x42,0x40,0x22,0x09,0x3C,0xAA);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedWriter3,0x12F1E02C,0x1E05,0x4B0E,0x94,0x68,0xEB,0xC9,0xD1,0xBB,0x04,0x0F);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedWriter4,0xBC7E3F53,0xF458,0x4C23,0x9D,0xBD,0xA1,0x89,0xE6,0xE9,0x65,0x94);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedWriter5,0xDCF7780D,0xBDE9,0x45DF,0xAC,0xFE,0x21,0x73,0x1A,0x32,0x00,0x0C);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedReader2,0xA09E53B2,0x2A57,0x4cca,0x8F,0x63,0xB8,0x4F,0x7C,0x35,0xD4,0xAA);


MIDL_DEFINE_GUID(IID, IID_ISymNGenWriter,0xd682fd12,0x43de,0x411c,0x81,0x1b,0xbe,0x84,0x04,0xce,0xa1,0x26);


MIDL_DEFINE_GUID(IID, IID_ISymNGenWriter2,0xB029E51B,0x4C55,0x4fe2,0xB9,0x93,0x9F,0x7B,0xC1,0xF1,0x0D,0xB4);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedAsyncMethodPropertiesWriter,0xFC073774,0x1739,0x4232,0xBD,0x56,0xA0,0x27,0x29,0x4B,0xEC,0x15);


MIDL_DEFINE_GUID(IID, IID_ISymUnmanagedAsyncMethod,0xB20D55B3,0x532E,0x4906,0x87,0xE7,0x25,0xBD,0x57,0x34,0xAB,0xD2);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



