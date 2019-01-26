# MIKHMON-OpenWrt
MIKHMON OpenWrt Installer by Muhammad Tri Anwarruddin

## Requirements
1. Make sure the OpenWrt Router is connected to the Internet
2. OpenWrt version is 17.01.5 or higher
3. The router has <b>≥16MB</b> of free storage space (<i><b>extroot</b> is highly recommended for most devices</i>)

## How To Use
Access the router via SSH and run
```
root@OpenWrt~# curl -o /tmp/mikhmon.ipk -k https://raw.githubusercontent.com/anwareset/MIKHMON-OpenWrt/master/mikhmon_1.0-1_mips_24kc.ipk
root@OpenWrt~# cd /tmp && opkg install mikhmon.ipk
root@OpenWrt~# mikhmon
```

## Preview

<p align="center">
  <img src="https://raw.githubusercontent.com/anwareset/MIKHMON-OpenWrt/master/Screenshot_2019-01-26_21-26-09.png">
</p>
</br>
<p align="center">
  <img src="https://raw.githubusercontent.com/anwareset/MIKHMON-OpenWrt/master/Screenshot_2019-01-26_21-35-55.png">
</p>

## Video
[![MIKHMON OpenWrt Installer](http://img.youtube.com/vi/MGYw3u9kMic/0.jpg)](http://www.youtube.com/watch?v=MGYw3u9kMic "MIKHMON OpenWrt Installer")
