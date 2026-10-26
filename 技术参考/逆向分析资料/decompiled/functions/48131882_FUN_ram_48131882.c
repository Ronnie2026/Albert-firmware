/* Firmware entry: 0x48131882 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48131882(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = (undefined1 *)*param_1;
  if (puVar2 == &DAT_ram_500ca000) {
    uVar3 = _DAT_ram_500e6068 >> 0x18 & 3;
LAB_ram_481318f6:
    if (puVar2 != (undefined1 *)0x50121000) {
      if (uVar3 == 0) {
        *param_2 = 0x12;
        return;
      }
      uVar1 = 0x11;
      if (uVar3 == 2) {
        uVar1 = 9;
      }
      goto LAB_ram_4813190e;
    }
  }
  else {
    if (puVar2 == &DAT_ram_500cb000) {
      uVar3 = _DAT_ram_500e606c >> 0x18 & 3;
      goto LAB_ram_481318f6;
    }
    if (puVar2 == &DAT_ram_500cc000) {
      uVar3 = _DAT_ram_500e6070 >> 0x18 & 3;
      goto LAB_ram_481318f6;
    }
    if (puVar2 == &DAT_ram_500cd000) {
      uVar3 = _DAT_ram_500e6074 >> 0x18 & 3;
      goto LAB_ram_481318f6;
    }
    if (puVar2 == &DAT_ram_500ce000) {
      uVar3 = _DAT_ram_500e6078 >> 0x18 & 3;
      goto LAB_ram_481318f6;
    }
    uVar1 = 0x12;
    if (puVar2 != (undefined1 *)0x50121000) goto LAB_ram_4813190e;
  }
  uVar1 = 0x11;
  if (_DAT_ram_50120004 >> 0x1e == 1) {
    *param_2 = 0x14;
    return;
  }
LAB_ram_4813190e:
  *param_2 = uVar1;
  return;
}


