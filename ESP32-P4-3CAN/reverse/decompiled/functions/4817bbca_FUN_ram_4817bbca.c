/* Firmware entry: 0x4817bbca */

int FUN_ram_4817bbca(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_28 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817fb86(auStack_28);
  iVar1 = FUN_ram_4817ffcc(auStack_28,param_3 << 6,1);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_48180a3c(param_1,auStack_28,param_2), iVar1 == 0)) {
    iVar1 = FUN_ram_4817fdde(param_1,param_3);
  }
  FUN_ram_4817fb90(auStack_28);
  return iVar1;
}


