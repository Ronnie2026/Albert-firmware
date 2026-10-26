/* Firmware entry: 0x48179632 */

int FUN_ram_48179632(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48178db6(param_1,0);
  if (iVar2 == 0) {
    FUN_ram_4817fb86(auStack_18);
    iVar2 = FUN_ram_481800da(auStack_18,param_2,*(undefined4 *)(param_1 + 4));
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4818023e(auStack_18,param_1 + 8);
      if (-1 < iVar2) {
        FUN_ram_4817fb90(auStack_18);
        return -0x4284;
      }
      uVar1 = *(undefined4 *)(param_1 + 4);
      iVar2 = thunk_FUN_ram_4817bc22
                        (auStack_18,auStack_18,param_1 + 0x10,param_1 + 8,param_1 + 0x48);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_48180138(auStack_18,param_3,uVar1);
        FUN_ram_4817fb90(auStack_18);
        if (iVar2 == 0) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar2 + -0x4280;
      }
    }
    FUN_ram_4817fb90(auStack_18);
    iVar2 = iVar2 + -0x4280;
  }
  else {
    iVar2 = -0x4080;
  }
  return iVar2;
}


