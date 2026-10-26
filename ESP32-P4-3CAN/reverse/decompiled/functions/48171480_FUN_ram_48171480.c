/* Firmware entry: 0x48171480 */

int FUN_ram_48171480(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((char)param_1[0x25] == '\0') {
    return 0;
  }
  if (*param_1 == 0) {
    *(undefined1 *)(param_1 + 0x25) = 0;
    iVar2 = -0x7100;
  }
  else {
    if (param_1[0x2f] == 0) {
      param_1[0x2d] = 0x15;
      param_1[0x2e] = 2;
      uVar1 = *(undefined1 *)((int)param_1 + 0x95);
      *(undefined1 *)param_1[0x2c] = 2;
      *(undefined1 *)(param_1[0x2c] + 1) = uVar1;
      iVar2 = FUN_ram_48170748(param_1,1);
    }
    else {
      iVar2 = FUN_ram_4817069a();
    }
    if ((iVar2 != -0x6880) && (*(undefined1 *)(param_1 + 0x25) = 0, iVar2 == 0)) {
      iVar2 = param_1[0x26];
    }
  }
  return iVar2;
}


