/* Firmware entry: 0x48124534 */

undefined4 FUN_ram_48124534(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((DAT_ram_4ff6e057 == '\0') || (DAT_ram_4ff6e055 == '\0')) ||
     (iVar2 = thunk_FUN_ram_4800f5ac(auStack_14), iVar2 != 0)) {
    auStack_14[0] = 1;
    if (param_2 == 0) {
      return 1;
    }
  }
  else {
    if ((auStack_14[0] & 1) == param_2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    if (param_2 == 0) {
      uVar1 = FUN_ram_48123e66(auStack_14[0] & 0xfffffffe);
      return uVar1;
    }
    auStack_14[0] = auStack_14[0] | 1;
  }
  uVar1 = FUN_ram_48123e66(auStack_14[0]);
  return uVar1;
}


