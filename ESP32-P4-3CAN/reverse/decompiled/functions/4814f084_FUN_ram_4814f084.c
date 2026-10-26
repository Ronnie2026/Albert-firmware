/* Firmware entry: 0x4814f084 */

int FUN_ram_4814f084(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iStack_38;
  char cStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_28;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    iStack_38 = param_1;
    iStack_30 = param_2;
    iStack_2c = param_3;
    uStack_28 = param_4;
    piStack_14 = (int *)FUN_ram_4814e840();
    if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_ram_481378ce(&DAT_ram_48151408,&iStack_38,piStack_14);
      if (iVar1 == 0) {
        iVar1 = (int)cStack_34;
      }
    }
    return iVar1;
  }
  return -0x10;
}


