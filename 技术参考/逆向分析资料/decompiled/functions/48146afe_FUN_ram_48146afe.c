/* Firmware entry: 0x48146afe */

undefined4 FUN_ram_48146afe(int param_1)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
      (**(code **)(param_1 + 0xf0))(param_1,piVar1 + 1,0);
    }
    FUN_ram_48139604(0xb,piVar1);
    piVar1 = (int *)iVar2;
  }
  return 0;
}


