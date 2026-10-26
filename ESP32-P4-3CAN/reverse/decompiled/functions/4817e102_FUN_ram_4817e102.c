/* Firmware entry: 0x4817e102 */

int FUN_ram_4817e102(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_5 = param_4 + param_5;
  iStack_38 = param_4;
  FUN_ram_4817fb86(auStack_30);
  FUN_ram_4817fb86(auStack_28);
  iVar1 = FUN_ram_4817f40e(&iStack_38,param_5,&iStack_34,0x30);
  if (iVar1 == 0) {
    if (param_5 != iStack_38 + iStack_34) {
      iVar1 = -0x4fe6;
      goto LAB_ram_4817e156;
    }
    iVar1 = FUN_ram_4817f564(&iStack_38,param_5,auStack_30);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4817f564(&iStack_38,param_5,auStack_28), iVar1 == 0)) {
      iVar1 = FUN_ram_4817e04a(param_1,param_2,param_3,param_1 + 0x68,auStack_30,auStack_28,0);
      if ((iVar1 == 0) && (iStack_38 != param_5)) {
        iVar1 = -0x4c00;
      }
      goto LAB_ram_4817e156;
    }
  }
  iVar1 = iVar1 + -0x4f80;
LAB_ram_4817e156:
  FUN_ram_4817fb90(auStack_30);
  FUN_ram_4817fb90(auStack_28);
  return iVar1;
}


