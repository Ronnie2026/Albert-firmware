/* Firmware entry: 0x4814f0c8 */

int FUN_ram_4814f0c8(int param_1,int *param_2,undefined2 param_3)

{
  int iVar1;
  int iStack_38;
  char cStack_34;
  int *piStack_30;
  undefined2 uStack_2c;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return -0x10;
  }
  if (param_2 == (int *)0x0) {
    param_2 = &DAT_ram_48236f9c;
  }
  if (((*(byte *)(param_1 + 0x30) & 0x20) == 0) && (DAT_ram_48237028 == (char)param_2[5])) {
    if (DAT_ram_48237028 == '\x06') {
      if ((((DAT_ram_48237014 != *param_2) || (param_2[1] != DAT_ram_48237018)) ||
          (param_2[2] != DAT_ram_4823701c)) ||
         ((param_2[3] != DAT_ram_48237020 || ((char)param_2[4] != DAT_ram_48237024))))
      goto LAB_ram_4814f0da;
    }
    else if (DAT_ram_48237014 != *param_2) goto LAB_ram_4814f0da;
    param_2 = &DAT_ram_482366d4;
  }
LAB_ram_4814f0da:
  iStack_38 = param_1;
  piStack_30 = param_2;
  uStack_2c = param_3;
  piStack_14 = (int *)FUN_ram_4814e840();
  if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_481378ce(&LAB_ram_48150e0c,&iStack_38,piStack_14);
    if (iVar1 == 0) {
      iVar1 = (int)cStack_34;
    }
  }
  return iVar1;
}


