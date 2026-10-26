/* Firmware entry: 0x481309e6 */

int FUN_ram_481309e6(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (3 < *(uint *)(param_1 + 4))) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"task_wdt","E (%lu) %s: %s(%d): Invalid arguments\n",uVar3,"task_wdt",
                     "esp_task_wdt_init",0x204);
    return 0x102;
  }
  if (DAT_ram_4ff6e118 != (undefined4 *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"task_wdt","E (%lu) %s: %s(%d): TWDT already initialized\n",uVar3,"task_wdt",
                     "esp_task_wdt_init",0x205);
    return 0x103;
  }
  puVar1 = (undefined4 *)FUN_ram_4ff45080(1,0x10);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"task_wdt","E (%lu) %s: %s(%d): insufficient memory\n",uVar3,"task_wdt",
                     "esp_task_wdt_init",0x20b);
    iVar2 = 0x101;
  }
  else {
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 8);
    iVar2 = FUN_ram_4813114e(param_1,FUN_ram_48130f08,puVar1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 4);
      DAT_ram_4ff6e118 = puVar1;
      puVar1[2] = iVar2;
      if (iVar2 != 0) {
        FUN_ram_48130924();
        puVar1 = DAT_ram_4ff6e118;
      }
      if (puVar1[1] != 0) {
        *(undefined1 *)((int)puVar1 + 0xd) = 0;
        FUN_ram_481312ae(*puVar1);
        return 0;
      }
      *(undefined1 *)((int)puVar1 + 0xd) = 1;
      return 0;
    }
  }
  thunk_FUN_ram_4ff209c6(puVar1);
  return iVar2;
}


