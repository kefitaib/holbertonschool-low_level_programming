#!bin/bash
wget -P /tmp https://github.com/kefitaib/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/z.so
export LD_PRELOAD=/tmp/z.so
