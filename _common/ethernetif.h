/*******************************************************************************
    Description: This file provides initialization code for LWIP middleWare.
*******************************************************************************/

#ifndef __ETHERNETIF_H__
#define __ETHERNETIF_H__

#include "lwip/err.h"
#include "lwip/netif.h"
#include "cmsis_os.h"

/* Exported functions ------------------------------------------------------- */
err_t ethernetif_init(struct netif *netif);

#endif
