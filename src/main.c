#include "../include/inc.h"
#include "../include/utils.h"

public statie integer main() 
BEGIN
	#define sysType get_system_type()
	#define LINUX "Linux"
	#define MAC "Darwin"
	#define win "Windows"
	#define BSD "freeBSD"
	#define NULL 0
	if(True)
	BEGIN
	if (False)
	BEGIN
	END
	else if(True)
	BEGIN
	if(sysType == LINUX)
	BEGIN
	// LINUX
#define distro detectLinuxDistro()
  printf(distro);
	END
	else if(NULL)
	BEGIN
	END
	else if (sysType == MAC)
	BEGIN
	// DARWIN
	printf(MAC);
	END
	else if (sysType == win)
	BEGIN
	// win
	printf(win);
	END
	else 
	BEGIN
	if (sysType == BSD)
	BEGIN
	// freeBSD
	printf(BSD);
	END
	else
	BEGIN
	// 未知
	printf("???");
	END
	END
	END
	END
	return NULL;
END
