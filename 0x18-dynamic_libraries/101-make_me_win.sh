#!/bin/bash
wget -P /tmp/ https://raw.github.com/21Insight/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/nr.so
export LD_PRELOAD=/tmp/nr.so
