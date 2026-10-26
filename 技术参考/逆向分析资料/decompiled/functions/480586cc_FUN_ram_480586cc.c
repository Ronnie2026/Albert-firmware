/* Firmware entry: 0x480586cc */

void FUN_ram_480586cc(void *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x3678);
  puVar3 = (undefined1 *)((int)param_1 + 0x1081);
  puVar1 = (undefined1 *)((int)param_1 + 0xfc);
  puVar2 = (undefined1 *)((int)param_1 + 0xe94);
  iVar5 = 0;
  while( true ) {
    puVar1[-0xe8] = 8;
    puVar1[-0xd2] = 1;
    puVar1[-0xc5] = 1;
    *(undefined4 *)(puVar1 + -0xb8) = 1;
    puVar1[-0xa4] = 8;
    puVar1[-0x8c] = 8;
    puVar1[-0x74] = 8;
    puVar1[-0x50] = 8;
    puVar1[-0x43] = 0xff;
    *(undefined2 *)(puVar1 + -0x18) = 0xffff;
    puVar4 = puVar1;
    do {
      *puVar4 = 8;
      puVar4[0x16] = 1;
      puVar4[0x23] = 1;
      *(undefined4 *)(puVar4 + 0x30) = 1;
      puVar4[0x44] = 8;
      puVar4[0x5c] = 8;
      puVar4[0x74] = 8;
      puVar4[0x98] = 8;
      puVar4[0xa5] = 0xff;
      *(undefined2 *)(puVar4 + 0xd0) = 0xffff;
      puVar4 = puVar4 + 0xe8;
    } while (puVar4 != puVar2);
    puVar3[-0x200] = 0xff;
    puVar4 = puVar3 + -0x1f0;
    do {
      *puVar4 = 0xff;
      puVar4 = puVar4 + 0x10;
    } while (puVar4 != puVar3);
    *(undefined4 *)(puVar3 + 0x187) = 1;
    *(undefined4 *)(puVar3 + 0x197) = 1;
    if (iVar5 == 2) break;
    puVar3 = puVar3 + 0x1228;
    puVar1 = puVar1 + 0x1228;
    puVar2 = puVar2 + 0x1228;
    iVar5 = iVar5 + 1;
  }
  memset((void *)((int)param_1 + 0x3678),0,0x900);
  *(undefined1 *)((int)param_1 + 0x36a1) = 0xff;
  *(undefined1 *)((int)param_1 + 0x36da) = 1;
  *(undefined1 *)((int)param_1 + 0x36e7) = 1;
  *(undefined4 *)((int)param_1 + 0x36f4) = 1;
  *(undefined1 *)((int)param_1 + 0x3769) = 0xff;
  *(undefined2 *)((int)param_1 + 0x3794) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x36c4) = 8;
  *(undefined1 *)((int)param_1 + 0x3708) = 8;
  *(undefined1 *)((int)param_1 + 0x3720) = 8;
  *(undefined1 *)((int)param_1 + 0x3738) = 8;
  *(undefined1 *)((int)param_1 + 0x375c) = 8;
  puVar1 = (undefined1 *)((int)param_1 + 0x37c1);
  do {
    *puVar1 = 0xff;
    puVar1[0x23] = 8;
    puVar1[0x39] = 1;
    puVar1[0x46] = 1;
    *(undefined4 *)(puVar1 + 0x53) = 1;
    puVar1[0x67] = 8;
    puVar1[0x7f] = 8;
    puVar1[0x97] = 8;
    puVar1[0xbb] = 8;
    puVar1[200] = 0xff;
    *(undefined2 *)(puVar1 + 0xf3) = 0xffff;
    puVar1 = puVar1 + 0x120;
  } while (puVar1 != (undefined1 *)((int)param_1 + 0x3fa1));
  *(undefined4 *)((int)param_1 + 0x3f78) = 0;
  *(undefined4 *)((int)param_1 + 0x3f7c) = 0;
  *(undefined4 *)((int)param_1 + 0x3f80) = 0;
  return;
}


