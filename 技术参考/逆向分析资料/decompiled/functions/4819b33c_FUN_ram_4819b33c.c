/* Firmware entry: 0x4819b33c */

void FUN_ram_4819b33c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 *apuStack_78 [2];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  apuStack_78[0] = (undefined1 *)0x0;
  uStack_70 = 0;
  uStack_6c = 0xffff0288;
  uStack_68 = 0;
  uStack_64 = 0;
  iVar1 = FUN_ram_481a0866(param_1,apuStack_78);
  if (-1 < iVar1) {
    *apuStack_78[0] = 0;
    *param_2 = uStack_68;
  }
  return;
}


