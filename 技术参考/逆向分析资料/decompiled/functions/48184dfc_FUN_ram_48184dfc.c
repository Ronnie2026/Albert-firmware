/* Firmware entry: 0x48184dfc */

void FUN_ram_48184dfc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  size_t __n;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48176b18(param_1,param_2,1);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = FUN_ram_48176d4c(param_2);
  iVar1 = FUN_ram_48176d6c(param_1,(void *)(param_1 + 0xc),uVar2);
  if (iVar1 == 0) {
    __n = FUN_ram_48176d4c(param_2);
    memset((void *)(param_1 + 0xc),1,__n);
    FUN_ram_48184c4e(param_1,param_3,param_4);
    return;
  }
  return;
}


