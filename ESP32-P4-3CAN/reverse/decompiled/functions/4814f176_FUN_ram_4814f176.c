/* Firmware entry: 0x4814f176 */

int FUN_ram_4814f176(int param_1,undefined4 *param_2,undefined2 param_3)

{
  int iVar1;
  int iStack_38;
  char cStack_34;
  undefined4 *puStack_30;
  undefined2 uStack_2c;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      param_2 = &DAT_ram_48236f9c;
    }
    iStack_38 = param_1;
    puStack_30 = param_2;
    uStack_2c = param_3;
    piStack_14 = (int *)FUN_ram_4814e840();
    if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_ram_481378ce(&LAB_ram_48150f0c,&iStack_38,piStack_14);
      if (iVar1 == 0) {
        iVar1 = (int)cStack_34;
      }
    }
    return iVar1;
  }
  return -0x10;
}


