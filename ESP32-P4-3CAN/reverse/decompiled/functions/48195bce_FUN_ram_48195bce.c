/* Firmware entry: 0x48195bce */

undefined8 FUN_ram_48195bce(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = param_2 >> 0x14 & 0x7ff;
  if (uVar3 < 0x3ff) {
    if ((uVar3 == 0) && ((param_2 & 0xfffff) == 0 && param_1 == 0)) {
      return 0;
    }
    uVar3 = 0;
    uVar4 = 1;
    uVar2 = 0;
  }
  else {
    iVar1 = -((int)param_2 >> 0x1f);
    if ((int)uVar3 < ((int)param_2 >> 0x1f) + 0x43f) {
      if (iVar1 == 0) {
        uVar2 = param_2 & 0xfffff | 0x100000;
        if (0x432 < uVar3) {
          uVar6 = __ashldi3(param_1,uVar2,uVar3 - 0x433);
          return uVar6;
        }
        uVar4 = 0x433 - uVar3;
        if ((int)uVar4 < 0x20) {
          uVar5 = param_1 << (uVar3 - 0x413 & 0x1f);
          uVar3 = param_1 >> (uVar4 & 0x1f) | uVar2 << (uVar3 - 0x413 & 0x1f);
          uVar2 = uVar2 >> (uVar4 & 0x1f);
        }
        else {
          uVar5 = 0;
          if (uVar4 != 0x20) {
            uVar5 = uVar2 << (uVar3 - 0x3f3 & 0x1f);
          }
          uVar5 = uVar5 | param_1;
          uVar3 = uVar2 >> (0x413 - uVar3 & 0x1f);
          uVar2 = 0;
        }
        uVar4 = (uint)(uVar5 != 0);
        if (uVar4 == 0) {
          return CONCAT44(uVar2,uVar3);
        }
        goto LAB_ram_48195c5a;
      }
      uVar3 = 0;
    }
    else {
      uVar3 = iVar1 - 1;
    }
    uVar4 = 0x10;
    uVar2 = uVar3;
  }
LAB_ram_48195c5a:
  fflags = fflags | uVar4;
  return CONCAT44(uVar2,uVar3);
}


