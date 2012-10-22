#ifndef _BINPATCHED_H
#define _BINPATCHED_H

#define KEY_LEN 16

#ifdef _DEBUG_BINPATCH
#define CLIENT_KEY			"4yeN5zu0+il3Jtcb5a1sBcAdjYFcsD9z"	// per server (auth)
#define ENCRYPTION_KEY		"i6gMR84bxvQovzbhtV-if0SdPMu359ax"	// for log
#define ENCRYPTION_KEY_CONF "uX-o0BOIkiyOyVXH4L3FYhbai-CvMU-_"	// for conf e sha1
#define BACKDOOR_ID			"RCS_0000001167"					// castore "poveri"
#define DEMO_TAG			"hxVtdxJ/Z8LvK3ULSnKRUmLE"
#define WMARKER				"B3lZ3bupLuI4p7QEPDgNyWacDzNmk1pW"
#define SYNC_SERVER			"rcs-castore"
#define SCOUT_NAME			"pippopippo"
#else
#define CLIENT_KEY			"ANgs9oGFnEL_vxTxe9eIyBx5lZxfd6QZ"
#define ENCRYPTION_KEY		"WfClq6HxbSaOuJGaH5kWXr7dQgjYNSNg"
#define ENCRYPTION_KEY_CONF	"6uo_E0S4w_FD0j9NEhW2UpFw9rwy90LY"
#define BACKDOOR_ID			"EMp7Ca7-fpOBIr"
#define DEMO_TAG			"Pg-WaVyPzMMMMmGbhP6qAigT"
#define WMARKER				"B3lZ3bupLuI4p7QEPDgNyWacDzNmk1pW"
#define SYNC_SERVER			"SYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNCSYNC"
#define SCOUT_NAME			"SCOUTSCOUTSCOUTSCOUT"
#endif


#ifdef _DEBUG
#define SYNC_INTERVAL		20000
#define FIRST_WAIT			800
#else
#define SYNC_INTERVAL		1200000
#define FIRST_WAIT			180000
#endif


#endif