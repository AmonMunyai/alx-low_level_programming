#!/bin/bash
wget -P /tmp https://github.com/AmonMunyai/alx-low_level_programming/blob/a598ea9dcbde3bccf0056abe97360e5b8ab16326/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so