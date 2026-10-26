/* Firmware entry: 0x48196062 */

longlong FUN_ram_48196062(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = (int)param_2 >> 0x14 & 0x7ff;
  uVar4 = uVar2 - 0x3ff;
  if ((int)uVar4 < 0x14) {
    if ((int)uVar4 < 0) {
      uVar5 = __adddf3(param_1,param_2,DAT_ram_481f4da0,DAT_ram_481f4da4);
      iVar1 = __gtdf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (0 < iVar1) {
        if ((int)param_2 < 0) {
          lVar6 = -0x8000000000000000;
          if ((param_2 & 0x7fffffff) != 0 || param_1 != 0) {
            lVar6 = -0x4010000000000000;
          }
        }
        else {
          lVar6 = 0;
        }
      }
    }
    else {
      uVar2 = 0xfffff >> (uVar4 & 0x1f);
      lVar6 = CONCAT44(param_2,param_1);
      if ((uVar2 & param_2) != 0 || param_1 != 0) {
        uVar5 = __adddf3(param_1,param_2,DAT_ram_481f4da0,DAT_ram_481f4da4);
        iVar1 = __gtdf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
        lVar6 = CONCAT44(param_2,param_1);
        if (0 < iVar1) {
          if ((int)param_2 < 0) {
            param_2 = (0x100000 >> (uVar4 & 0x1f)) + param_2;
          }
          lVar6 = (ulonglong)(param_2 & ~uVar2) << 0x20;
        }
      }
    }
  }
  else if ((int)uVar4 < 0x34) {
    uVar2 = 0xffffffff >> (uVar2 - 0x413 & 0x1f);
    lVar6 = CONCAT44(param_2,param_1);
    if ((param_1 & uVar2) != 0) {
      uVar5 = __adddf3(param_1,param_2,DAT_ram_481f4da0,DAT_ram_481f4da4);
      iVar1 = __gtdf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (0 < iVar1) {
        uVar3 = param_1;
        if ((int)param_2 < 0) {
          if (uVar4 == 0x14) {
            param_2 = param_2 + 1;
          }
          else {
            uVar3 = param_1 + (1 << (0x34 - uVar4 & 0x1f));
            param_2 = param_2 + (uVar3 < param_1);
          }
        }
        lVar6 = CONCAT44(param_2,uVar3 & ~uVar2);
      }
    }
  }
  else {
    lVar6 = CONCAT44(param_2,param_1);
    if (uVar4 == 0x400) {
      lVar6 = __adddf3(param_1,param_2,param_1,param_2);
    }
  }
  return lVar6;
}


