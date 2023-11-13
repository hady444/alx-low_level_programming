#!/bin/bash
wget -P /tmp https://github.com/hady444/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libgiga.so
expor LD_PRELOAD=/tmp/libgiga.so
