#include<defs.h>
char *__fastcall decode(const char *a1)
{
  int v1; // r9
  int v2; // r10
  char v3; // r11
  int v4; // r7
  int v5; // r6
  int v6; // r5
  const char *v7; // r8
  signed int v8; // r0
  int v9; // r10
  int i; // r4
  int v11; // r1
  int v12; // r3
  char v14[100]; // [sp+8h] [bp-90h]

  LOBYTE(v4) = v3;
  v5 = v2;
  v6 = v1;
  v7 = a1;
  v8 = strlen(a1);
  if ( v8 > 0 )
  {
    v9 = v8 - 1;
    for ( i = 0; ; ++i )
    {
      v12 = (unsigned __int8)v7[i];
      if ( ((v12 - 97) & 0xFFu) <= 0x19 )
        break;
      if ( ((v12 - 65) & 0xFFu) > 0x19 )
        goto LABEL_4;
      v5 = v12 - 38;
      v11 = (v12 - 38) % 3;
      if ( v11 == 1 )
      {
LABEL_15:
        v6 = v5 / 3 + 35;
        if ( (unsigned int)(v5 / 3 + 8) <= 0x19 )
          goto LABEL_9;
        goto LABEL_16;
      }
LABEL_5:
      if ( v11 == 2 )
      {
        v6 = v5 / 3 + 18;
      }
      else if ( !v11 )
      {
        v6 = v5 / 3;
      }
      if ( (unsigned int)(v6 - 27) <= 0x19 )
      {
LABEL_9:
        v4 = (v6 + 38) & 0xFF;
LABEL_10:
        if ( i == v9 )
          return v14;
        goto LABEL_11;
      }
LABEL_16:
      if ( (unsigned int)(v6 - 1) > 0x19 )
        goto LABEL_10;
      v4 = (v6 + 96) & 0xFF;
      if ( i == v9 )
        return v14;
LABEL_11:
      v14[i] = v4;
    }
    v5 = v12 - 96;
LABEL_4:
    v11 = v5 % 3;
    if ( v5 % 3 == 1 )
      goto LABEL_15;
    goto LABEL_5;
  }
  return v14;
}

int