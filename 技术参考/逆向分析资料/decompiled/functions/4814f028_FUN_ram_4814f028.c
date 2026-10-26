/* Firmware entry: 0x4814f028 */

int FUN_ram_4814f028(int param_1)

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
  if ((*(byte *)(param_1 + 0x30) & 8) == 0) {
    iStack_38 = param_1;
    uStack_2c = thunk_FUN_ram_4ff3c5d4();
    piStack_14 = (int *)FUN_ram_4814e840();
    if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
      return -1;
    }
    iVar1 = FUN_ram_481378ce(&DAT_ram_48150cac,&iStack_38,piStack_14);
    if (iVar1 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    if (cStack_34 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (int)cStack_34;
    }
  }
  FUN_ram_48150988(param_1);
  return 0;
}


