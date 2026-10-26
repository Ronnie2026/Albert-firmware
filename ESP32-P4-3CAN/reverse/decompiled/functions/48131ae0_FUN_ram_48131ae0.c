/* Firmware entry: 0x48131ae0 */

void FUN_ram_48131ae0(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    if (iVar1 == 0x50121000) {
      param_3 = (param_3 & 0x1f) << 3;
    }
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xffffff00 | param_3;
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | 0x100;
    if ((param_2 & 2) == 0) {
      *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffffdfff;
    }
    else {
      *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x2000;
    }
    *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
    do {
    } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
    return;
  }
  *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xfffffeff;
  if ((param_2 & 2) == 0) {
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xffffdfff;
  }
  else {
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 0x2000;
  }
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 1;
  do {
  } while ((*(uint *)(iVar1 + 0x98) & 1) != 0);
  return;
}


