/**************************************************************
 *** RHmm version 1.3.0                                      
 ***                                                         
 *** File: cBaumWelchInParam.h 
 ***                                                         
 *** Author: Ollivier TARAMASCO <Ollivier.Taramasco@imag.fr> 
 ***                                                         
 *** Date: 2009/04/27                                       
 ***                                                         
 **************************************************************/

#ifndef _CBAUMWELCHINPARAM_H_
#define _CBAUMWELCHINPARAM_H_
#include "cInParam.h"

class cBaumWelchInParam : public cInParam
{	public :
		initEnum	mInitType		; // Type d'initialisation de l'algo cBaumWelch
		uint		mNMaxIter		; // Nbre d'iterations max de l'algo
		double		mTol			; // TolÚrance Algor cBaumWelch
		uint		mNInitIter		; // Nbre d'itÚrations pour l'initialisation
		uint		mNMaxIterInit	; // Nbre d'iter max dans la procÚdure d'initialisation
		uint		mVerbose		; /* 0 rien, 1 imprime */
	public :
		cBaumWelchInParam & operator =(const cBaumWelchInParam &theSrc) ;
		cBaumWelchInParam(uint theNSample=0, uint theDimObs=0, cOTVector *theY=NULL, distrDefinitionEnum theDistrType=eNormalDistr, uint theNClass=2, uint theNMixt=0, uint theNProba=0) ;
		void SetDefault(void) ;
		virtual ~cBaumWelchInParam() ;
		void Print(void) ;
} ;


#endif //_CBAUMWELCHINPARAM_H_
