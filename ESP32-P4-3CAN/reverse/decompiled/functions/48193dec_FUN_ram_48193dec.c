/* Firmware entry: 0x48193dec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48193dec(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    iVar5 = *(int *)(param_1 + 8);
    piVar1 = (int *)FUN_ram_48193390();
    *(undefined4 *)(iVar5 + 0x34) = param_4;
    sVar2 = strlen(param_2);
    iVar3 = FUN_ram_48191f84(param_2,sVar2,param_3,iVar5 + 4,piVar1,iVar5 + 0x6c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: Failed to open a new connection: %d\n",uVar4,
                       "transport_base",iVar3);
      *piVar1 = iVar3;
      uVar4 = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x6c) = 0xffffffff;
    }
    return uVar4;
  }
  iVar3 = FUN_ram_48193390();
  _DAT_ram_00000034 = 0;
  ebreak();
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_ram_48193340();
      FUN_ram_48194164(*(undefined4 *)(iVar3 + 0x38));
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar3 + 8));
    }
    return 0;
  }
  return 0;
}


