#ifndef	__SK_LANGUAGE_H
#define	__SK_LANGUAGE_H

#ifdef __PLAT_XBOX__

#endif // __PLAT_XBOX__

// These only apply if PAL
#define ENGLISH 1
#define FRENCH 0
#define GERMAN 0

inline bool IsEnglish( void )
{
#	ifdef __PLAT_XBOX__
	return true;
//		return true;		// For now...
#	else
#	if ENGLISH
	return true;
#	else
	return false
#	endif // ENGLISH
#	endif // __PLAT_XBOX__
}



#endif

