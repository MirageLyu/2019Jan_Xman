flag：xman{e4sY_bAs3_XmAN}


一个改了编码表的base64。新的码表与base64默认的进⾏行行映射，将其转换为默认的base64


```
# -*- coding=utf-8 -*-

import string
import base64

print base64.b64encode("e4sY_bAs3_XmAN")

bs = "=kFBUShIf5IBT9GHfCEy"[::-1]
b64map=['v', 'w', 'x', 'r', 's', 't', 'u', 'o', 'p', 'q', '3', '4', '5', '6', '7', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'y', 'z', '0', '1', '2', 'P', 'Q', 'R', 'S', 'T', 'K', 'L', 'M', 'N', 'O', 'Z', 'a', 'b', 'c', 'd', 'U', 'V', 'W', 'X', 'Y', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', '8', '9', '+', '/']
b64map = ''.join(b64map)
print b64map
readlb64map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

strBase = ""

for i in range(len(bs)):
    nIndex = b64map.find(bs[i])
    if (nIndex !=-1):
        strBase=strBase+readlb64map[nIndex]
    else:
        strBase=strBase+"="
    
print base64.b64decode(strBase)

```