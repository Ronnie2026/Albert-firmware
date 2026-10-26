/* Firmware entry: 0x4ff2c30a */

undefined4 FUN_ram_4ff2c30a(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined4 *)0x0) {
    return 0x102;
  }
  if (DAT_ram_4ff6c3e4 != 0) {
    puVar5 = &DAT_ram_4ff6c3e4;
    iVar3 = 0;
    iVar2 = 0;
    bVar1 = false;
    do {
      iVar4 = puVar5[9];
      iVar6 = iVar4;
      if (iVar4 != 0) {
        do {
          iVar6 = *(int *)(iVar6 + 0x24);
          if (iVar6 == 0) goto LAB_ram_4ff2c350;
        } while ((((iVar4 == iVar6) || (**(int **)(puVar5[10] + 4) == iVar6)) ||
                 (param_1 < *(uint *)(iVar6 + 0x18))) || (*(uint *)(iVar6 + 0x1c) <= param_1));
        bVar1 = true;
        iVar2 = iVar6;
      }
LAB_ram_4ff2c350:
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 10;
    } while (iVar3 != DAT_ram_4ff6c3e4);
    if (bVar1) {
      *param_2 = *(undefined4 *)(iVar2 + 0x14);
      return 0;
    }
  }
  return 0x105;
}


