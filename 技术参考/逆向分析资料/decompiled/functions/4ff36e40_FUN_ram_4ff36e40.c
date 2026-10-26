/* Firmware entry: 0x4ff36e40 */

void FUN_ram_4ff36e40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff37718();
  iVar1 = mhartid * 0x20;
  puVar2 = (undefined4 *)(&DAT_ram_4ff6c43c + iVar1);
  do {
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined4 *)(iVar1 + 0x4ff6c45c));
  return;
}


