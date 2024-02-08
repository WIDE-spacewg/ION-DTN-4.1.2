/*

	bibe.h:	definition of the application programming interface
		for bundle-in-bundle encapsulation.

	Copyright (c) 2020, California Institute of Technology.
	ALL RIGHTS RESERVED.  U.S. Government Sponsorship
	acknowledged.
									*/
/*	Author: Scott Burleigh, Jet Propulsion Laboratory		*/
/*									*/
#ifndef _BIBE_H_
#define _BIBE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "bpP.h"

/*		Functions for bundle-in-bundle encapsulation.		*/

extern void	bibeAdd(char *peerEid, unsigned int fwdLatency,
			unsigned int rtnLatency, int lifespan,
			unsigned char priority, unsigned char ordinal,
			unsigned int label, unsigned char flags);

extern void	bibeChange(char *peerEid, unsigned int fwdLatency,
			unsigned int rtnLatency, int lifespan,
			unsigned char priority, unsigned char ordinal,
			unsigned int label, unsigned char flags);

extern void	bibeDelete(char *peerEid);

extern void	bibeFind(char *peerEid, Object *addr, Object *elt);

extern int	bibeHandleBpdu(BpDelivery *dlv);
 
extern int	bibeHandleSignal(BpDelivery *dlv, unsigned char *cursor,
			unsigned int unparsedBytes);
 
extern int	bibeCtRetry(Bundle *bundle, Object bundleAddr);

extern void	bibeCtCancel(Bundle *bundle);

#ifdef __cplusplus
}
#endif

#endif  /* _BIBE_H_ */
