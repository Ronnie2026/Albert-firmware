/* Firmware entry: 0x4816f180 */

undefined4 * FUN_ram_4816f180(void)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e288 != 0) {
    return &DAT_ram_4ff6d45c;
  }
  piVar1 = &DAT_ram_4ff6d45c;
  puVar2 = &UNK_ram_48238860;
  iVar3 = 0xcca8;
  iVar5 = 0xc009;
  piVar4 = (int *)&UNK_ram_482384b0;
LAB_ram_4816f1ba:
  piVar4 = piVar4 + 4;
  if (iVar3 != iVar5) goto LAB_ram_4816f1b6;
  *piVar1 = iVar3;
  piVar1 = piVar1 + 1;
  goto LAB_ram_4816f1c4;
LAB_ram_4816f1b6:
  iVar5 = *piVar4;
  if (iVar5 == 0) {
LAB_ram_4816f1c4:
    iVar3 = *(int *)(puVar2 + 4);
    puVar2 = puVar2 + 4;
    if ((iVar3 == 0) || ((int *)0x4ff6d543 < piVar1)) {
      *piVar1 = 0;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      DAT_ram_4ff6e288 = 1;
      return &DAT_ram_4ff6d45c;
    }
    iVar5 = 0xc009;
    piVar4 = (int *)&UNK_ram_482384b0;
  }
  goto LAB_ram_4816f1ba;
}


