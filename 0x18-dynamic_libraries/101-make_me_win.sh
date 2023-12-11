#!/bin/bash
wget -P /tmp https://github.com/lroudge/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/
export LD_PRELOAD=/tmp/libmask.so
