/* Firmware entry: 0x480217c2 */

undefined4 FUN_ram_480217c2(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819ab6a(10);
  iVar3 = FUN_ram_4ff3c608();
  iVar4 = FUN_ram_4ff45080(1,iVar3 * 0x28);
  if (iVar4 == 0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_cli","E (%lu) %s: Memory not allocated for task list.\n",uVar5,"esp_cli"
                    );
  }
  else {
    iVar3 = FUN_ram_4ff3d886(iVar4,iVar3,0);
    FUN_ram_4819ac1a("\tName\tNumber\tPriority\tStackWaterMark");
    if (0 < iVar3) {
      puVar1 = (undefined4 *)(iVar4 + 4);
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        FUN_ram_4819aaa0("%16s\t%u\t%u\t%u\n",*puVar1,puVar1[1],puVar1[3],puVar1[7]);
        puVar1 = puVar1 + 10;
      } while (iVar3 != iVar2);
    }
    thunk_FUN_ram_4ff209c6(iVar4);
  }
  return 0;
}


