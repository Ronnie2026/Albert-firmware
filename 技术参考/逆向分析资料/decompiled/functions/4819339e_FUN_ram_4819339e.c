/* Firmware entry: 0x4819339e */

undefined4 FUN_ram_4819339e(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && (*(int **)(param_1 + 0x38) != (int *)0x0)) &&
     (iVar2 = **(int **)(param_1 + 0x38), iVar2 != 0)) {
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    return uVar1;
  }
  return 0xffffffff;
}


