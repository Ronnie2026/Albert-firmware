/* Firmware entry: 0x4814f37a */

int FUN_ram_4814f37a(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puStack_38;
  char cStack_34;
  undefined4 uStack_30;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0xf0) == 0x10)) {
    puStack_38 = param_1;
    uStack_30 = param_2;
    piStack_14 = (int *)FUN_ram_4814e840();
    if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_ram_481378ce(FUN_ram_481512b2,&puStack_38,piStack_14);
      if (iVar1 == 0) {
        iVar1 = (int)cStack_34;
      }
    }
    return iVar1;
  }
  return -0x10;
}


