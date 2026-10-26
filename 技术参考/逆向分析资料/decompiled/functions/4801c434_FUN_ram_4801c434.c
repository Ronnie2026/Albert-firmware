/* Firmware entry: 0x4801c434 */

void FUN_ram_4801c434(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  code *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  piVar2 = (int *)*param_1;
  puVar1 = PTR_PTR_ram_4ff47e40;
  while (PTR_PTR_ram_4ff47e40 = puVar1, piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(puVar1 + 0x10);
    *param_1 = *piVar2;
    (*pcVar3)();
    puVar1 = PTR_PTR_ram_4ff47e40;
    piVar2 = (int *)*param_1;
  }
  *param_1 = 0;
  (**(code **)(puVar1 + 0x10))(param_1);
  return;
}


