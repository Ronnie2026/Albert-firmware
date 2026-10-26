/* Firmware entry: 0x48149b74 */

undefined4 FUN_ram_48149b74(int param_1)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (*(code **)(param_1 + 0xf4) != (code *)0x0) {
      (**(code **)(param_1 + 0xf4))(param_1,piVar1 + 1,0);
    }
    FUN_ram_48139604(0xf,piVar1);
    piVar1 = (int *)iVar2;
  }
  return 0;
}


