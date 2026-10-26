/* Firmware entry: 0x48027088 */

void FUN_ram_48027088(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_11 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    auStack_11[0] = param_2;
    if (iVar1 != 0) {
      while (iVar1 = FUN_ram_4ff3b5f0(iVar1,0xffffffff), iVar1 != 1) {
        iVar1 = *param_1;
      }
    }
    FUN_ram_4800b652((char)param_1[1],auStack_11,1);
    if (*param_1 == 0) {
      return;
    }
    FUN_ram_4ff3afa2(*param_1,0,0,0);
  }
  return;
}


