// FILE:		INCLUDES.h
// AUTHOR: 		Kevin Sidwar
// DESCRIPTION: Master include file for application.  Includes all other
//              header files necessary for the application. If you add a
//              module to the application you should include it's header
//              files here.
//
// LICENSE:		see main.c for license info
// CHANGELOG:
// MM-DD-YYYY
// 06-03-2011: initial version created.

#ifndef INCLUDES_H
#define	INCLUDES_H

#define PRODUCTION
//#define TEST


#include "p18f27j53.h"
#include "app.h"
#include "cpu.h"
#include "delays.h"
#include "string.h"
#include "../../bootldr/h/bootldr.h"
#include "../../crystalfontz/h/lcd.h"
#include "../../sdcard/h/sdcard.h"

#endif	/* INCLUDES_H */

