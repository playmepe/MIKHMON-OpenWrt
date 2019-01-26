#include <stdio.h>

int main(int argc, char const *argv[]){
	printf("\n\n[Step 1] Update repository and install additional packages\n\n");
	system("opkg update && opkg install php7 php7-cgi php7-mod-session php7-mod-gmp php7-mod-gettext php7-mod-iconv php7-mod-json php7-mod-pcntl nano unzip curl");
	printf("\n\n[Step 2] Download the source and configuration file\n\n");
	system("curl -o /tmp/version -k https://raw.githubusercontent.com/laksa19/mikhmonv3/master/verson.txt");
	printf("\n\nDetected MIKHMON version... \n");
	system("cat /tmp/version");
	printf("\n");
	system("curl -o /tmp/mikhmon.zip -k https://codeload.github.com/laksa19/mikhmonv3/zip/master");
	system("curl -o /tmp/uhttpd -k https://pastebin.com/raw/RBxuF4BU");
	printf("[Step 3] Configure MIKHMON and uhttpd\n\n");
	system("unzip /tmp/mikhmon.zip -d /www/");
	system("mv /www/mikhmonv3-master /www/mikhmon");
	system("cat /tmp/uhttpd > /etc/config/uhttpd");
	printf("\n\n[POST-INSTALLATION] Delete temporary file\n");
	system("rm -rf /tmp/uhttpd /tmp/mikhmon.zip /tmp/*.ipk");
	system("opkg remove mikhmon");
	system("clear");
	printf("\n\nMIKHMON Successfully installed\n");
	system("cat /tmp/version");
	printf("\n\nURL\t\t: http://[ROUTER IP]/mikhmon/\nUsername\t: mikhmon\nPassword\t: 1234\n\nMIKHMON OpenWrt Installer by Muhammad Tri Anwarruddin\n");
	printf("\nRebooting..\n");
	system("reboot");
	return 0;
}

