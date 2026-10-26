/* Firmware entry: 0x4816f1ea */

undefined * FUN_ram_4816f1ea(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = &UNK_ram_482384b0;
  iVar2 = 0xc009;
  do {
    if (param_1 == iVar2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return puVar1;
    }
    iVar2 = *(int *)(puVar1 + 0x10);
    puVar1 = puVar1 + 0x10;
  } while (iVar2 != 0);
  return (undefined *)0x0;
}


