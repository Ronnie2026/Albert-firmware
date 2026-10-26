/* Firmware entry: 0x4814efe4 */

int FUN_ram_4814efe4(int param_1)

{
  int iVar1;
  int iStack_38;
  char cStack_34;
  undefined4 uStack_2c;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0;
  }
  iStack_38 = param_1;
  uStack_2c = thunk_FUN_ram_4ff3c5d4();
  piStack_14 = (int *)FUN_ram_4814e840();
  if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_481378ce(&DAT_ram_48150cac,&iStack_38,piStack_14);
    if (iVar1 == 0) {
      return (int)cStack_34;
    }
  }
  return iVar1;
}


