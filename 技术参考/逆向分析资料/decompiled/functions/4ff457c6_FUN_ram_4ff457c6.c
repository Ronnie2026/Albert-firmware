/* Firmware entry: 0x4ff457c6 */

int FUN_ram_4ff457c6(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  piVar4 = (int *)PTR_PTR_ram_4ff47f1c;
  while( true ) {
    iVar3 = *piVar4;
    iVar2 = FUN_ram_4ff45788(param_1);
    puVar1 = PTR_PTR_ram_4ff53080;
    if (iVar3 == 0) break;
    if (iVar2 != 0) goto LAB_ram_4ff45832;
    *(int *)(param_1 + 4) = iVar3;
    iVar2 = (**(code **)puVar1)(param_1);
    if (iVar2 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar2;
    }
    piVar4 = piVar4 + 1;
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,uVar5);
    puVar1 = PTR_PTR_ram_4ff53080;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
    iVar2 = (**(code **)(puVar1 + 4))(param_1,0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (iVar2 == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x105;
  }
LAB_ram_4ff45832:
  if (DAT_ram_4ff47dac < 3) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  uVar5 = FUN_ram_4ff44d14();
  ets_printf("I (%lu) %s: detected chip: %s\n",uVar5,s_spi_flash_ram_4ff53094,
             **(undefined4 **)(param_1 + 4));
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 0;
}


