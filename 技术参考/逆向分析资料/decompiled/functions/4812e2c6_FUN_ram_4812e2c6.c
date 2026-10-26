/* Firmware entry: 0x4812e2c6 */

int FUN_ram_4812e2c6(int *param_1,uint param_2,int *param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == (int *)0x0) {
    return 0x102;
  }
  if (param_1 == (int *)0x0) {
    iVar8 = 0x102;
  }
  else if (param_1 == param_3) {
    iVar8 = 0x102;
  }
  else {
    uVar7 = param_3[4];
    iVar8 = 0x104;
    if (uVar7 < param_4) {
      return 0x104;
    }
    uVar6 = param_1[4];
    if (param_2 <= uVar6) {
      if (*param_3 == DAT_ram_4ff6e0b8) {
        uVar5 = param_5;
        if (param_5 == 0xffffffff) {
          param_5 = uVar7 - param_4;
          uVar5 = uVar6 - param_2;
        }
        iVar8 = 0x104;
        if ((((param_4 <= param_4 + param_5) && (param_4 + param_5 <= uVar7)) &&
            (param_2 <= param_2 + param_5)) && (param_2 + param_5 <= uVar6)) {
          iVar8 = FUN_ram_4812e61e(param_1,param_2,uVar5 + 0xfff & 0xfffff000);
          if (iVar8 == 0) {
            iVar1 = FUN_ram_4812fbc4();
            if (param_5 != 0) {
              uVar7 = iVar1 << 0x10;
              iVar1 = 0;
              do {
                while( true ) {
                  uVar6 = uVar7;
                  if (param_5 < uVar7) {
                    uVar6 = param_5;
                  }
                  uStack_34 = 0;
                  iVar2 = FUN_ram_4812e68a(param_3,param_4,uVar6,0,&uStack_34,&uStack_38);
                  if (iVar2 == 0) break;
                  iVar3 = FUN_ram_4812fbc4(0,param_2);
                  iVar1 = iVar1 + 1;
                  if (iVar1 == 3) {
                    uVar4 = FUN_ram_4ff44d14();
                    FUN_ram_4ff44bf0(1,"partition",
                                     "E (%lu) %s: Failed to mmap source partition after a few attempts, mmu_free_pages = %lu (err=0x%x)\n"
                                     ,uVar4,"partition",iVar3,iVar2);
                    return iVar2;
                  }
                  uVar7 = iVar3 << 0x10;
                }
                iVar1 = FUN_ram_4812e4d6(param_1,param_2,uStack_34);
                if (iVar1 != 0) {
                  uVar4 = FUN_ram_4ff44d14();
                  FUN_ram_4ff44bf0(1,"partition",
                                   "E (%lu) %s: Writing to destination partition failed (err=0x%x)\n"
                                   ,uVar4,"partition",iVar1);
                  thunk_FUN_ram_4812fb50(uStack_38);
                  return iVar1;
                }
                param_5 = param_5 - uVar6;
                param_4 = param_4 + uVar6;
                thunk_FUN_ram_4812fb50(uStack_38);
                param_2 = param_2 + uVar6;
                iVar1 = 0;
              } while (param_5 != 0);
            }
          }
          else {
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"partition",
                             "E (%lu) %s: Erasing destination partition range failed (err=0x%x)\n",
                             uVar4,"partition",iVar8);
          }
        }
      }
      else {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"partition",
                         "E (%lu) %s: Source partition is on external flash. Operation not supported.\n"
                         ,uVar4,"partition");
        iVar8 = 0x106;
      }
    }
  }
  return iVar8;
}


