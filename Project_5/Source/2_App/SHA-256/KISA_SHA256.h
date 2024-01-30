/**
@file KISA_SHA_256.h
@brief SHA256 占쏙옙호 占싯곤옙占쏙옙占쏙옙
@author Copyright (c) 2013 by KISA
@remarks http://seed.kisa.or.kr/
*/

#ifndef SHA256_H
#define SHA256_H

#ifdef  __cplusplus
extern "C" {
#endif

#ifndef OUT
#define OUT
#endif

#ifndef IN
#define IN
#endif

#ifndef INOUT
#define INOUT
#endif

#define USER_LITTLE_ENDIAN
#undef BIG_ENDIAN
#undef LITTLE_ENDIAN

#if defined(USER_BIG_ENDIAN)
	#define BIG_ENDIAN
#elif defined(USER_LITTLE_ENDIAN)
	#define LITTLE_ENDIAN
#else
	#if 0
		#define BIG_ENDIAN
	#elif defined(_MSC_VER)
		#define LITTLE_ENDIAN
	#else
		#error
	#endif
#endif

typedef unsigned long ULONG;
typedef ULONG* ULONG_PTR;

typedef unsigned int UINT;
typedef UINT* UINT_PTR;

typedef signed int SINT;
typedef SINT* SINT_PTR;

typedef unsigned char UCHAR;
typedef UCHAR* UCHAR_PTR;

typedef unsigned char BYTE;

#define SHA256_DIGEST_BLOCKLEN	64
#define SHA256_DIGEST_VALUELEN	32

typedef struct{
	UINT uChainVar[SHA256_DIGEST_VALUELEN / 4];
	UINT uHighLength;
	UINT uLowLength;
	UINT remain_num;
	BYTE szBuffer[SHA256_DIGEST_BLOCKLEN];
} SHA256_INFO;

/**
@brief 占쏙옙占썩변占쏙옙占쏙옙 占쏙옙占싱븝옙占쏙옙占쏙옙 占십깍옙화占싹댐옙 占쌉쇽옙
@param Info : SHA256_Process 호占쏙옙 占쏙옙 占쏙옙占실댐옙 占쏙옙占쏙옙체
*/
void SHA256_Init( OUT SHA256_INFO *Info );

/**
@brief 占쏙옙占썩변占쏙옙占쏙옙 占쏙옙占싱븝옙占쏙옙占쏙옙 占십깍옙화占싹댐옙 占쌉쇽옙
@param Info : SHA256_Init 호占쏙옙占싹울옙 占십깍옙화占쏙옙 占쏙옙占쏙옙체(占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙 占쏙옙占싫댐옙.)
@param pszMessage : 占쏙옙占쏙옙占� 占쌉뤄옙 占쏙옙
@param inLen : 占쏙옙占쏙옙占� 占쌉뤄옙 占쏙옙 占쏙옙占쏙옙
*/
void SHA256_Process( OUT SHA256_INFO *Info, IN const BYTE *pszMessage, IN UINT uDataLen );

/**
@brief 占쌨쏙옙占쏙옙 占쏙옙占쏙옙占싱깍옙占� 占쏙옙占쏙옙 占쏙옙占쏙옙占싱기를 占쏙옙占쏙옙占쏙옙 占쏙옙 占쏙옙占쏙옙占쏙옙 占쌨쏙옙占쏙옙 占쏙옙占쏙옙占쏙옙 占쏙옙占쏙옙占쏙옙 占쏙옙占쏙옙占쌉쇽옙占쏙옙 호占쏙옙占싹댐옙 占쌉쇽옙
@param Info : SHA256_Init 호占쏙옙占싹울옙 占십깍옙화占쏙옙 占쏙옙占쏙옙체(占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙 占쏙옙占싫댐옙.)
@param pszDigest : 占쏙옙호占쏙옙
*/
void SHA256_Close( OUT SHA256_INFO *Info, OUT BYTE *pszDigest );

/**
@brief 占쏙옙占쏙옙占� 占쌉뤄옙 占쏙옙占쏙옙 占싼뱄옙占쏙옙 처占쏙옙
@param pszMessage : 占쏙옙占쏙옙占� 占쌉뤄옙 占쏙옙
@param pszDigest : 占쏙옙호占쏙옙
@remarks 占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙 SHA256_Init, SHA256_Process, SHA256_Close占쏙옙 호占쏙옙占싼댐옙.
*/
void SHA256_Encrpyt( IN const BYTE *pszMessage, IN UINT uPlainTextLen, OUT BYTE *pszDigest );

#ifdef  __cplusplus
}
#endif

#endif