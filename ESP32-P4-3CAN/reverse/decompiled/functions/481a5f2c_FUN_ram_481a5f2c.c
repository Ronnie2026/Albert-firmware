/* Firmware entry: 0x481a5f2c */

undefined4 FUN_ram_481a5f2c(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff48030,0xffffffff);
  param_1 = param_1 * 8;
  piVar4 = (int *)(&DAT_ram_4ff47fe8 + param_1);
  if (*piVar4 == 2) {
    *piVar4 = param_2;
    *(ushort *)(&DAT_ram_4ff47fec + param_1) = (ushort)(param_2 == 1);
  }
  else {
    if (param_2 == 2) {
      *(undefined2 *)(&DAT_ram_4ff47fec + param_1) = 0;
      *piVar4 = 2;
      FUN_ram_4ff3eb8c();
      goto LAB_ram_481a5f92;
    }
    uVar1 = *(ushort *)(&DAT_ram_4ff47fec + param_1);
    iVar3 = (int)(short)uVar1;
    if (param_2 == 1) {
      iVar5 = (int)((uVar1 + 1) * 0x10000) >> 0x10;
    }
    else {
      iVar3 = (int)((uVar1 - 1) * 0x10000) >> 0x10;
      iVar5 = iVar3;
    }
    *(short *)(&DAT_ram_4ff47fec + param_1) = (short)iVar5;
    if (iVar3 == 0) {
      *(int *)(&DAT_ram_4ff47fe8 + param_1) = param_2;
      FUN_ram_4ff3eb8c();
      goto LAB_ram_481a5f92;
    }
    if (iVar3 < 0) {
      *(undefined2 *)(&DAT_ram_4ff47fec + param_1) = 0;
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(&DAT_ram_4ff48030);
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"sleep",
                       "E (%lu) %s: Domain is already in ESP_PD_OPTION_OFF state, please check whether the domain pd_option is managed symmetrically.\n"
                       ,uVar2,"sleep");
      return 0x103;
    }
  }
  FUN_ram_4ff3eb8c();
LAB_ram_481a5f92:
  FUN_ram_4ff3ee10(&DAT_ram_4ff48030);
  return 0;
}


