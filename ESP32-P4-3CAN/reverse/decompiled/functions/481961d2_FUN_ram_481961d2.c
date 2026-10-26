/* Firmware entry: 0x481961d2 */

int FUN_ram_481961d2(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = param_2 >> 0x14 & 0x7ff;
  uVar5 = uVar3 - 0x3ff;
  iVar1 = ((int)~param_2 >> 0x1f & 2U) - 1;
  uVar4 = param_2 & 0xfffff | 0x100000;
  if ((int)uVar5 < 0x14) {
    if ((int)uVar5 < 0) {
      if (uVar5 == 0xffffffff) {
        return iVar1;
      }
      return 0;
    }
    uVar4 = (0x80000 >> (uVar5 & 0x1f)) + uVar4 >> (0x14 - uVar5 & 0x1f);
  }
  else {
    if (0x3e < uVar5) {
      iVar1 = __fixdfdi();
      return iVar1;
    }
    if ((int)uVar5 < 0x34) {
      uVar2 = 0x80000000 >> (uVar3 - 0x413 & 0x1f);
      uVar3 = param_1 + uVar2;
      uVar4 = __ashldi3((uVar3 < uVar2) + uVar4,0);
      uVar2 = 0;
      if (0x34 - uVar5 != 0x20) {
        uVar2 = uVar3 >> (0x34 - uVar5 & 0x1f);
      }
      uVar4 = uVar4 | uVar2;
    }
    else {
      uVar4 = __ashldi3(uVar4,0);
      uVar4 = uVar4 | param_1 << (uVar3 - 0x433 & 0x1f);
    }
  }
  return iVar1 * uVar4;
}


