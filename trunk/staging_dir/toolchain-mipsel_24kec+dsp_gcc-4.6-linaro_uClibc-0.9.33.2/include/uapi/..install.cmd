cmd_/home/dogi/openwrt/trunk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/uapi/.install := /bin/bash scripts/headers_install.sh /home/dogi/openwrt/trunk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/uapi  ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/dogi/openwrt/trunk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/uapi/$$F; done; touch /home/dogi/openwrt/trunk/build_dir/toolchain-mipsel_24kec+dsp_gcc-4.6-linaro_uClibc-0.9.33.2/linux-dev//include/uapi/.install