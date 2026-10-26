/* Firmware entry: 0x4817470e */

int FUN_ram_4817470e(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481802e8(param_2 + 0x10,1);
  if (iVar1 == 0) {
    if (param_1[7] == 0) {
      return -0x4f80;
    }
    if (param_1[9] != 0) {
      iVar1 = FUN_ram_481802e8(param_2,0);
      if (-1 < iVar1) {
        iVar1 = param_2 + 8;
        iVar2 = FUN_ram_481802e8(iVar1,0);
        if (-1 < iVar2) {
          iVar2 = FUN_ram_4818023e(param_2,param_1 + 1);
          if ((iVar2 < 0) && (iVar2 = FUN_ram_4818023e(iVar1,param_1 + 1), iVar2 < 0)) {
            FUN_ram_4817fb86(auStack_30);
            FUN_ram_4817fb86(auStack_28);
            iVar1 = FUN_ram_4817bf84(auStack_30,iVar1,iVar1);
            if ((iVar1 == 0) && (iVar1 = FUN_ram_48172ae2(auStack_30,param_1), iVar1 == 0)) {
              DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
              iVar1 = FUN_ram_4817bf84(auStack_28,param_2,param_2);
              if ((iVar1 == 0) && (iVar1 = FUN_ram_48172ae2(auStack_28,param_1), iVar1 == 0)) {
                DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
                iVar1 = FUN_ram_48172dea(param_1,auStack_28,param_2);
                if (iVar1 == 0) {
                  iVar2 = FUN_ram_4818023e(auStack_30,auStack_28);
                  iVar1 = 0;
                  if (iVar2 != 0) {
                    iVar1 = -0x4c80;
                  }
                }
              }
            }
            FUN_ram_4817fb90(auStack_30);
            FUN_ram_4817fb90(auStack_28);
            return iVar1;
          }
        }
      }
      return -0x4c80;
    }
    uVar3 = FUN_ram_48180076(param_2);
    if ((uVar3 <= param_1[0x10] + 7U >> 3) && (iVar1 = FUN_ram_481802e8(param_2,0), -1 < iVar1)) {
      iVar2 = *param_1;
      FUN_ram_4817fb86(auStack_28);
      iVar1 = FUN_ram_4817fe72(auStack_28,param_2);
      param_1 = param_1 + 1;
      do {
        if (iVar1 != 0) {
LAB_ram_481748b0:
          FUN_ram_4817fb90(auStack_28);
          return iVar1;
        }
        iVar1 = FUN_ram_4818023e(auStack_28,param_1);
        if (iVar1 < 0) {
          iVar1 = FUN_ram_481802e8(auStack_28,1);
          if (((iVar1 < 1) ||
              ((iVar2 == 9 &&
               ((iVar1 = FUN_ram_4818023e(auStack_28,&PTR_DAT_ram_48238fc0_ram_48238f98), iVar1 == 0
                || (iVar1 = FUN_ram_4818023e(auStack_28,&PTR_DAT_ram_48238fa0_ram_48238f90),
                   iVar1 == 0)))))) ||
             ((iVar1 = FUN_ram_4818059a(auStack_28,auStack_28,1), iVar1 == 0 &&
              (iVar2 = FUN_ram_4818023e(auStack_28,param_1), iVar2 == 0)))) {
            iVar1 = -0x4c80;
          }
          goto LAB_ram_481748b0;
        }
        iVar1 = FUN_ram_48180594(auStack_28,auStack_28,param_1);
      } while( true );
    }
  }
  return -0x4c80;
}


