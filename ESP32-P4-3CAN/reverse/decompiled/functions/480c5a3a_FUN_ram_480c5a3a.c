/* Firmware entry: 0x480c5a3a */

void FUN_ram_480c5a3a(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[99] != 0) {
    return;
  }
  if (((param_1[0x6e] == 0) && (*(char *)(param_1 + 0x79) == '\0')) &&
     (*(char *)((int)param_1 + 0x9e) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x1e5) = 0;
    FUN_ram_48025ba6();
    if (*(char *)((int)param_1 + 0x65) == '\v') {
      FUN_ram_4805c6b0(*param_1,2,2,7);
    }
    puVar2 = (uint *)param_1[3];
    fence();
    uVar3 = *puVar2;
    while( true ) {
      uVar4 = uVar3 & 0xfffcffff;
      if (((uVar3 >> 0x10 & 3) != 1) || ((uVar3 & 0xffff) == 0)) break;
      bVar1 = *puVar2 == uVar3;
      uVar3 = *puVar2;
      if (bVar1) {
        *puVar2 = uVar4 - 1;
        return;
      }
    }
  }
  return;
}


