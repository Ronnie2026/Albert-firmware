/* Firmware entry: 0x48027004 */

undefined1 FUN_ram_48027004(int *param_1)

{
  int iVar1;
  undefined1 auStack_11 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  auStack_11[0] = 0;
  if (iVar1 != 0) {
    while (iVar1 = FUN_ram_4ff3b5f0(iVar1,0xffffffff), iVar1 != 1) {
      iVar1 = *param_1;
    }
  }
  if (*(char *)((int)param_1 + 5) == '\0') {
    iVar1 = FUN_ram_4800b736((char)param_1[1],auStack_11,1,0x14);
    if (iVar1 < 1) {
      auStack_11[0] = 0;
    }
    else {
      *(undefined1 *)((int)param_1 + 5) = 1;
      *(undefined1 *)((int)param_1 + 6) = auStack_11[0];
    }
  }
  else {
    auStack_11[0] = *(undefined1 *)((int)param_1 + 6);
  }
  if (*param_1 != 0) {
    FUN_ram_4ff3afa2(*param_1,0,0,0);
  }
  return auStack_11[0];
}


