/* Firmware entry: 0x480327c0 */

undefined4 FUN_ram_480327c0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48129c8a(param_1,"capabilities");
  uVar4 = FUN_ram_48129cfa();
  pcVar3 = (char *)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 != 0) {
    for (piVar1 = *(int **)(iVar2 + 8); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      uVar4 = FUN_ram_48129ce8(piVar1,pcVar3);
      pcVar3 = (char *)((ulonglong)uVar4 >> 0x20);
      if (((int)uVar4 != 0) && (pcVar3 = "delta_sync_v1", piVar1[4] != 0)) {
        uVar4 = FUN_ram_4ff453ae();
        pcVar3 = (char *)((ulonglong)uVar4 >> 0x20);
        if ((int)uVar4 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


