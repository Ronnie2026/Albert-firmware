/* Firmware entry: 0x4814f694 */

int FUN_ram_4814f694(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  char cStack_25;
  int iStack_24;
  int iStack_20;
  undefined1 uStack_1c;
  int *piStack_18;
  char *pcStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 != 0)) {
    pcStack_14 = &cStack_25;
    iStack_24 = param_1;
    iStack_20 = param_2;
    uStack_1c = param_3;
    piStack_18 = (int *)FUN_ram_4814e840();
    if ((piStack_18 == (int *)0x0) || (*piStack_18 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_ram_481378ce(FUN_ram_48151784,&iStack_24,piStack_18);
      if (iVar1 == 0) {
        iVar1 = (int)cStack_25;
      }
    }
    return iVar1;
  }
  return -0x10;
}


