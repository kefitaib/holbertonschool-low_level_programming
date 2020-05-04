#!bin/bash
wget -P /home https://github.com/kefitaib/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/z.so
export LD_PRELOAD=/home/z.so
