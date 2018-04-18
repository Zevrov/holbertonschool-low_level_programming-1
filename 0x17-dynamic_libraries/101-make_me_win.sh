#!/bin/bash
wget -q -O /tmp/librand.so https://github.com/yook00627/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/librand.so
export LD_PRELOAD=/tmp/librand.so
