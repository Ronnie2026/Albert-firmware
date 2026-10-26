/* Firmware entry: 0x4814f1c0 */

int FUN_ram_4814f1c0(int param_1)

{
  int iVar1;
  int iStack_38;
  char cStack_34;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    iStack_38 = param_1;
    piStack_14 = (int *)FUN_ram_4814e840();
    if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_ram_481378ce(&LAB_ram_48151002,&iStack_38,piStack_14);
      if (iVar1 == 0) {
        iVar1 = (int)cStack_34;
      }
    }
    return iVar1;
  }
  return -0x10;
}


