/* Firmware entry: 0x4814f59e */

int FUN_ram_4814f59e(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iStack_38;
  char cStack_34;
  byte bStack_30;
  undefined4 uStack_2c;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bStack_30 = param_2 != 0 | (param_3 != 0) << 1;
  if (param_1 != 0) {
    iStack_38 = param_1;
    uStack_2c = thunk_FUN_ram_4ff3c5d4();
    piStack_14 = (int *)FUN_ram_4814e840();
    if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_ram_481378ce(&DAT_ram_4815157a,&iStack_38,piStack_14);
      if (iVar1 == 0) {
        iVar1 = (int)cStack_34;
      }
    }
    return iVar1;
  }
  return -0x10;
}


