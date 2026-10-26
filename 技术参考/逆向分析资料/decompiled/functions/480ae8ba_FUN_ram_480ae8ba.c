/* Firmware entry: 0x480ae8ba */

void FUN_ram_480ae8ba(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x1c8);
  *(undefined4 *)((int)param_1 + 0x4c) = 0xffffffff;
  puVar2 = (undefined4 *)((int)param_1 + 0x74);
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 10;
  } while (puVar2 != (undefined4 *)((int)param_1 + 0x1dc));
  memset((void *)((int)param_1 + 0x1c8),0,0x558);
  puVar2 = (undefined4 *)((int)param_1 + 0x3a4);
  do {
    puVar2[-100] = 0xffffffff;
    puVar1 = puVar2 + -0x5a;
    do {
      puVar3 = puVar1;
      *puVar3 = 0xffffffff;
      puVar1 = puVar3 + 10;
    } while (puVar3 + 10 != puVar2);
    puVar2 = puVar3 + 0x7c;
  } while (puVar2 != (undefined4 *)((int)param_1 + 0x8fc));
  *(undefined1 *)((int)param_1 + 0x720) = 0;
  *(undefined4 *)((int)param_1 + 0x724) = 0;
  memset((void *)((int)param_1 + 0x728),0,0x40);
  memset((void *)((int)param_1 + 0x768),0,0x39c);
  *(undefined4 *)((int)param_1 + 0x864) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x998) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xacc) = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0xb04) = 0;
  *(undefined1 *)((int)param_1 + 0xb06) = 0;
  *(undefined4 *)((int)param_1 + 0xb08) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xb0c) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xb10) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xb14) = 0;
  *(undefined4 *)((int)param_1 + 0xb18) = 0;
  *(undefined4 *)((int)param_1 + 0xb1c) = 0;
  *(undefined4 *)((int)param_1 + 0xb20) = 0;
  *(undefined4 *)((int)param_1 + 0xb24) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xb28) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xb2c) = 0;
  *(undefined4 *)((int)param_1 + 0xb30) = 0;
  *(undefined4 *)((int)param_1 + 0xb34) = 0;
  *(undefined1 *)((int)param_1 + 0xb38) = 0;
  *(undefined1 *)((int)param_1 + 0x878) = 1;
  *(undefined1 *)((int)param_1 + 0x9ac) = 1;
  *(undefined1 *)((int)param_1 + 0xae0) = 1;
  memset((void *)((int)param_1 + 0xb3c),0,0x54);
  memset((void *)((int)param_1 + 0xb90),0,0x40);
  memset((void *)((int)param_1 + 0xbd0),0,0x70);
  *(undefined4 *)((int)param_1 + 0xbe4) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xbe8) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0xbed) = 1;
  *(undefined4 *)((int)param_1 + 0xbf8) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xc08) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xc18) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xc40) = 0;
  *(undefined4 *)((int)param_1 + 0xc44) = 0;
  *(undefined4 *)((int)param_1 + 0xc48) = 0;
  *(undefined4 *)((int)param_1 + 0xc4c) = 0;
  *(undefined4 *)((int)param_1 + 0xc50) = 0;
  *(undefined4 *)((int)param_1 + 0xc54) = 0;
  *(undefined4 *)((int)param_1 + 0xc58) = 0;
  *(undefined4 *)((int)param_1 + 0xc5c) = 0;
  *(undefined4 *)((int)param_1 + 0xc60) = 0;
  *(undefined4 *)((int)param_1 + 0xc64) = 0;
  *(undefined4 *)((int)param_1 + 0xc68) = 0;
  *(undefined4 *)((int)param_1 + 0xc6c) = 0;
  *(undefined4 *)((int)param_1 + 0xc70) = 0;
  *(undefined4 *)((int)param_1 + 0xc74) = 0;
  *(undefined4 *)((int)param_1 + 0xc78) = 0;
  *(undefined4 *)((int)param_1 + 0xc7c) = 0;
  *(undefined4 *)((int)param_1 + 0xc80) = 0;
  *(undefined4 *)((int)param_1 + 0xc84) = 0;
  *(undefined4 *)((int)param_1 + 0xc88) = 0;
  *(undefined4 *)((int)param_1 + 0xc8c) = 0;
  *(undefined4 *)((int)param_1 + 0xc90) = 0;
  *(undefined4 *)((int)param_1 + 0xc94) = 0;
  memset((void *)((int)param_1 + 0xc98),0,0x1080);
  *(undefined4 *)((int)param_1 + 0xcec) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xcf0) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0xcf5) = 1;
  *(undefined4 *)((int)param_1 + 0xd00) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xd10) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xd20) = 0xffffffff;
  puVar2 = (undefined4 *)((int)param_1 + 0xdf4);
  do {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    puVar2[5] = 0xffffffff;
    puVar2[9] = 0xffffffff;
    puVar2[0xd] = 0xffffffff;
    puVar2 = puVar2 + 0x42;
  } while (puVar2 != (undefined4 *)((int)param_1 + 0x1d6c));
  *(undefined4 *)((int)param_1 + 0x1d18) = 0;
  *(undefined4 *)((int)param_1 + 0x1d1c) = 0;
  memset((void *)((int)param_1 + 0x1d20),0,0x420);
  *(undefined4 *)((int)param_1 + 0x2140) = 0;
  *(undefined4 *)((int)param_1 + 0x2144) = 0;
  memset((void *)((int)param_1 + 0x2148),0,0x49c);
  memset((void *)((int)param_1 + 0x25e4),0,0xc94);
  memset((void *)((int)param_1 + 0x3278),0,0x820);
  memset((void *)((int)param_1 + 15000),0,0x6c8);
  memset((void *)((int)param_1 + 0x4160),0,0x680);
  return;
}


