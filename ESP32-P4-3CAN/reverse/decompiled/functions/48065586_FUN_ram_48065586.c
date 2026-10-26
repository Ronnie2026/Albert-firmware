/* Firmware entry: 0x48065586 */

void FUN_ram_48065586(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x15) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined1 *)(param_1 + 0x16) = 1;
    puVar2 = (undefined4 *)FUN_ram_4ff206d8(0x600,0x404);
    if (puVar2 == (undefined4 *)0x0) goto LAB_ram_480655c6;
    *(undefined4 **)(param_1 + 0x18) = puVar2;
    puVar3 = puVar2 + 0x180;
    do {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[1] = 0xff;
      puVar2 = puVar2 + 4;
    } while (puVar3 != puVar2);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0x60) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar1 * 0x10);
    *(int *)(param_1 + 0x1c) = iVar1 + 1;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    puVar2[3] = param_5;
    return;
  }
LAB_ram_480655c6:
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_ram_48064fb4(param_1 + 4);
  return;
}


