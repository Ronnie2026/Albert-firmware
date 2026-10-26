/* Firmware entry: 0x4818b75c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_4818b75c(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char cStack_5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_50090040 = (uint)(param_3 != 1) * 4 + -2 + ((param_2 & 0xff) >> 3);
  cStack_5 = '\0';
  if (param_2 >> 2 != 0) {
    puVar2 = param_1 + (param_2 >> 2);
    iVar4 = 0x50090000 - (int)param_1;
    do {
      uVar1 = *param_1;
      puVar3 = (undefined4 *)(iVar4 + (int)param_1);
      param_1 = param_1 + 1;
      *puVar3 = uVar1;
      cStack_5 = cStack_5 + '\x04';
    } while (param_1 != puVar2);
  }
  return cStack_5;
}


