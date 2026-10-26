/* Firmware entry: 0x481835de */

int FUN_ram_481835de(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [36];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_481802e8(param_4,1);
  if (-1 < iVar2) {
    iVar4 = param_1 + 0x34;
    iVar2 = FUN_ram_4818023e(param_4,iVar4);
    if (iVar2 < 0) {
      FUN_ram_48173f3a(auStack_58);
      FUN_ram_4817fb86(auStack_68);
      FUN_ram_4817fb86(auStack_60);
      iVar2 = 0xb;
      do {
        iVar1 = 0xb;
        while( true ) {
          iVar3 = FUN_ram_4817516c(param_1,auStack_68,param_7,param_8);
          if (iVar3 != 0) goto LAB_ram_48183692;
          iVar3 = FUN_ram_48174600(param_1,auStack_58,auStack_68,param_1 + 0x1c,param_9,param_10,0);
          if ((iVar3 != 0) || (iVar3 = FUN_ram_48180a3c(param_2,auStack_58,iVar4), iVar3 != 0))
          goto LAB_ram_48183692;
          iVar3 = FUN_ram_481802e8(param_2,0);
          iVar1 = iVar1 + -1;
          if (iVar3 != 0) break;
          if (iVar1 == 0) goto LAB_ram_4818368c;
        }
        iVar3 = FUN_ram_48183558(param_1,auStack_60,param_5,param_6);
        if ((((iVar3 != 0) || (iVar3 = FUN_ram_4817bf84(param_3,param_2,param_4), iVar3 != 0)) ||
            (iVar3 = FUN_ram_4818058e(auStack_60,auStack_60,param_3), iVar3 != 0)) ||
           (((iVar3 = FUN_ram_48180ec2(0,param_3,auStack_68,iVar4), iVar3 != 0 ||
             (iVar3 = FUN_ram_4817bf84(param_3,param_3,auStack_60), iVar3 != 0)) ||
            ((iVar3 = FUN_ram_48180a3c(param_3,param_3,iVar4), iVar3 != 0 ||
             (iVar1 = FUN_ram_481802e8(param_3,0), iVar1 != 0)))))) goto LAB_ram_48183692;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
LAB_ram_4818368c:
      iVar3 = -0x4d00;
LAB_ram_48183692:
      FUN_ram_48173ffc(auStack_58);
      FUN_ram_4817fb90(auStack_68);
      FUN_ram_4817fb90(auStack_60);
      return iVar3;
    }
  }
  return -0x4c80;
}


