/* Firmware entry: 0x48193c52 */

int FUN_ram_48193c52(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
  }
  iVar1 = FUN_ram_48193334(param_1,param_4);
  if (iVar1 < 1) {
    uVar2 = FUN_ram_4ff44d14();
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    uVar4 = FUN_ram_4819b6f4(*puVar3);
    FUN_ram_4ff44bf0(2,"transport_base",
                     "W (%lu) %s: Poll timeout or error, errno=%s, fd=%d, timeout_ms=%d\n",uVar2,
                     "transport_base",uVar4,*(undefined4 *)(iVar5 + 0x6c),param_4);
  }
  else {
    iVar1 = FUN_ram_48136954(*(undefined4 *)(iVar5 + 0x6c),param_2,param_3,0);
    if (iVar1 < 0) {
      uVar2 = FUN_ram_4ff44d14();
      puVar3 = (undefined4 *)FUN_ram_4819bf88();
      uVar4 = FUN_ram_4819b6f4(*puVar3);
      FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: tcp_write error, errno=%s\n",uVar2,
                       "transport_base",uVar4);
      puVar3 = (undefined4 *)FUN_ram_4819bf88();
      FUN_ram_4819348a(param_1,*puVar3);
    }
  }
  return iVar1;
}


