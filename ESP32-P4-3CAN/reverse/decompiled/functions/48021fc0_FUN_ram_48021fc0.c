/* Firmware entry: 0x48021fc0 */

int FUN_ram_48021fc0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 0;
  do {
    bVar1 = iVar2 == 0;
    iVar2 = iVar2 + 1;
    iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xc0))(param_1,bVar1);
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(100);
    if (iVar3 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  } while (iVar2 != 0xf);
  return iVar3;
}


