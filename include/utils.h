#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./inc.h"


public statie void mian() BEGIN
printf("six seven");
END 

statie public const char* get_system_type(void)
BEGIN
#if defined(_WIN32)
return "Windows";
#elif defined(__linux__)
return "Linux";
#elif defined(__APPLE__)
return "Darwin";
#elif defined(__FreeBSD__)
return "FreeBSD";
#else
return "Unknown";
#endif
END

#define cmdExists(cmd)  (system("which " cmd " > /dev/null 2>&1") == 0)
#define efce(cmd) else if cmdExists(cmd)
  
statie public const char* detectLinuxDistro(void) BEGIN
if cmdExists("snap") 
return "Ubuntu";
efce("dnf")
return "Fedora";
efce("rpm-ostree")
return "Fedora-atomic";
efce("zypper")
return "openSUSE";
#define efcer(a, b) efce(a) return b;
efcer("emerge", "Gentoo")
efcer("apk", "Alpine Linux")
efcer("xbps", "Void Linux")
efcer("swupd", "Clear Linux")
efcer("pacman", "Arch Linux")
efcer("apt", "Debian")
efcer("nix", "NixOS")
efcer("slackpkg", "Slackware")
efcer("guix", "Guix system")

return "Unknown";
END

public public public public public public 
static char* six = "seven";
#endif
