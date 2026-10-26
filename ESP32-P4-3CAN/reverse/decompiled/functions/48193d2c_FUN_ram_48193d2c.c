/* Firmware entry: 0x48193d2c */

int FUN_ram_48193d2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 8);
  }
  iVar1 = FUN_ram_48193328(param_1,param_4);
  if (iVar1 == -1) {
LAB_ram_48193dd8:
    iVar6 = -2;
  }
  else {
    if (iVar1 != 0) {
      iVar6 = FUN_ram_48136782(*(undefined4 *)(iVar6 + 0x6c),param_2,param_3,0);
      if (-1 < iVar6) {
        if (iVar6 != 0) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar6;
        }
        if (iVar1 < 1) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return -1;
        }
        FUN_ram_481933b4(param_1,0xffffffff);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return -1;
      }
      uVar2 = FUN_ram_4ff44d14();
      puVar3 = (undefined4 *)FUN_ram_4819bf88();
      uVar4 = FUN_ram_4819b6f4(*puVar3);
      FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: tcp_read error, errno=%s\n",uVar2,
                       "transport_base",uVar4);
      puVar3 = (undefined4 *)FUN_ram_4819bf88();
      FUN_ram_4819348a(param_1,*puVar3);
      piVar5 = (int *)FUN_ram_4819bf88();
      if (*piVar5 != 0xb) goto LAB_ram_48193dd8;
    }
    iVar6 = 0;
  }
  return iVar6;
}


