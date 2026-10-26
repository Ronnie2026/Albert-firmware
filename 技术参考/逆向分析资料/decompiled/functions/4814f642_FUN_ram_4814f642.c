/* Firmware entry: 0x4814f642 */

int FUN_ram_4814f642(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iStack_38;
  char cStack_34;
  undefined4 *puStack_30;
  undefined1 uStack_28;
  undefined4 uStack_24;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return -0x10;
  }
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_ram_48236f9c;
  }
  if (param_3 != 0) {
    uStack_28 = (undefined1)param_3;
    iStack_38 = param_1;
    puStack_30 = param_2;
    uStack_24 = param_4;
    piStack_14 = (int *)FUN_ram_4814e840();
    if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_ram_481378ce(FUN_ram_48151700,&iStack_38,piStack_14);
      if (iVar1 == 0) {
        iVar1 = (int)cStack_34;
      }
    }
    return iVar1;
  }
  return -0xc;
}


