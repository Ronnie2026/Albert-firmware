/* Firmware entry: 0x481957da */

void FUN_ram_481957da(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48195872();
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    uVar2 = *(uint *)(iVar4 + 0x30) + 0xbcd4d500;
    if (((uint)(uVar2 < *(uint *)(iVar4 + 0x30)) + *(int *)(iVar4 + 0x34) + -0x474e5544 != 0) ||
       (1 < uVar2)) {
      *piVar1 = 0;
LAB_ram_4819580e:
      FUN_ram_48195ec8(iVar4 + 0x30);
      return;
    }
    iVar3 = *(int *)(iVar4 + 0x14);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *piVar1 = *(int *)(iVar4 + 0x10);
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *piVar1 = *(int *)(iVar4 + 0x10);
        goto LAB_ram_4819580e;
      }
      if (iVar3 == -1) {
        FUN_ram_48195958();
        return;
      }
    }
    *(int *)(iVar4 + 0x14) = iVar3;
  }
  return;
}


