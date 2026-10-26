/* Firmware entry: 0x48156ee8 */

undefined4 FUN_ram_48156ee8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar1 = (undefined1 *)(*(uint **)(param_1 + 0x10))[1];
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x54) & 2) != 0)) {
    FUN_ram_4818ce6e(*(undefined4 *)(iVar2 + 0x24),&uStack_14);
    puVar1[0x14] = 0;
    *puVar1 = uStack_14;
    puVar1[1] = uStack_13;
    puVar1[2] = uStack_12;
    puVar1[3] = uStack_11;
    return 0;
  }
  iVar2 = FUN_ram_48138e1e(**(uint **)(param_1 + 0x10) & 0xff);
  if (iVar2 != 0) {
    FUN_ram_4ff45158(puVar1,iVar2,0x18);
  }
  return 0;
}


