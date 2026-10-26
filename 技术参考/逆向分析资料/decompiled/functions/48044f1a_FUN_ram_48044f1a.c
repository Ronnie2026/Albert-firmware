/* Firmware entry: 0x48044f1a */

void FUN_ram_48044f1a(undefined4 *param_1,undefined4 param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *param_1 = param_2;
  param_1[3] = 0xb33fffff;
  puVar3 = param_1 + 6;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 8) = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    *(undefined1 *)((int)puVar3 + 0x25) = 0;
    *(undefined1 *)((int)puVar3 + 0x26) = 1;
    *(undefined1 *)((int)puVar3 + 0x27) = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0xffffffff;
    puVar3[0x10] = 0;
    *(undefined2 *)(puVar3 + 0x11) = 0;
    *(byte *)((int)puVar3 + 0x46) = *(byte *)((int)puVar3 + 0x46) & 0x80;
    puVar3 = puVar3 + 0x12;
  } while (param_1 + 0xe82 != puVar3);
  memset(param_1 + 0xe82,0,0x1e0);
  param_1[0xefc] = 0xffff0000;
  param_1[0xefe] = 0xce0000;
  *(undefined1 *)(param_1 + 0xe87) = 8;
  *(undefined1 *)(param_1 + 0xe9b) = 8;
  *(undefined1 *)(param_1 + 0xeaf) = 8;
  *(undefined1 *)(param_1 + 0xec3) = 8;
  *(undefined1 *)(param_1 + 0xed7) = 8;
  *(undefined1 *)(param_1 + 0xeeb) = 8;
  *(undefined1 *)((int)param_1 + 0x3a32) = 1;
  *(undefined1 *)((int)param_1 + 0x3a82) = 1;
  *(undefined1 *)((int)param_1 + 0x3ad2) = 1;
  *(undefined1 *)((int)param_1 + 0x3b22) = 1;
  *(undefined1 *)((int)param_1 + 0x3b72) = 1;
  *(undefined1 *)((int)param_1 + 0x3bc2) = 1;
  param_1[0xefa] = 0;
  param_1[0xefb] = 0;
  *(undefined2 *)(param_1 + 0xefd) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x3bf6) = 0;
  param_1[0xeff] = 0;
  param_1[0xf00] = 0;
  psVar1 = (short *)((int)param_1 + 0x56);
  sVar2 = 0;
  do {
    sVar2 = sVar2 + 1;
    *psVar1 = sVar2;
    psVar1 = psVar1 + 0x24;
  } while (sVar2 != 0xcd);
  *(undefined2 *)((int)param_1 + 0x39fe) = 0xffff;
  memset(param_1 + 0xf02,0,0xd4);
  param_1[0xf37] = 0;
  param_1[0xf38] = 0;
  param_1[0xf39] = 0;
  param_1[0xf3a] = 0;
  param_1[0xf3b] = 0;
  param_1[0xf3c] = 0;
  param_1[0xf3d] = 0;
  param_1[0xf3e] = 0;
  param_1[0xf3f] = 0;
  param_1[0xf40] = 0;
  param_1[0xf41] = 0;
  param_1[0xf42] = 0;
  param_1[0xf43] = 0;
  return;
}


