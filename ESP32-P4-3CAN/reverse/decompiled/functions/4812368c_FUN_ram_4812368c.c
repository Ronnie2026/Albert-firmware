/* Firmware entry: 0x4812368c */

uint FUN_ram_4812368c(char *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (param_3 <= (uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x2c))) {
      iVar4 = *(int *)(param_1 + 0x14);
      uVar5 = 0;
      uVar2 = param_3;
      uVar1 = param_3;
      if (0x1000 < param_3 + iVar4) {
        do {
          FUN_ram_4ff45158(*(int *)(param_1 + 0xc) + iVar4,param_2 + (param_3 - uVar1),
                           0x1000 - iVar4);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (0x1000 - iVar4);
          iVar3 = FUN_ram_4812326e(param_1);
          uVar2 = (uVar1 + iVar4) - 0x1000;
          if (iVar3 == 0) {
            return param_3 - uVar1;
          }
          iVar4 = *(int *)(param_1 + 0x14);
          uVar1 = uVar2;
        } while (0x1000 < iVar4 + uVar2);
        uVar5 = param_3 - uVar2;
        param_2 = param_2 + uVar5;
      }
      FUN_ram_4ff45158(*(int *)(param_1 + 0xc) + iVar4,param_2,uVar2);
      iVar4 = *(int *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x14) = uVar2 + iVar4;
      if ((uVar2 + iVar4 == *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x2c)) &&
         (iVar4 = FUN_ram_4812326e(param_1), iVar4 == 0)) {
        param_3 = uVar5;
      }
      return param_3;
    }
    FUN_ram_48122b98();
    *param_1 = '\x04';
  }
  return 0;
}


