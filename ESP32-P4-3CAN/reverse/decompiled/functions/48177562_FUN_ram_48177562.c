/* Firmware entry: 0x48177562 */

int FUN_ram_48177562(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puStack_14 = (undefined4 *)param_1[1];
  uStack_18 = *param_1;
  iVar1 = FUN_ram_481774c4(&uStack_18);
  if (2 < iVar1 - 2U) {
    ebreak();
    iVar1 = *(int *)(iVar1 + 2);
    iVar1 = FUN_ram_4817460e(iVar1,iVar1 + 0x68,iVar1 + 0x60,iVar1 + 0x1c,extraout_a3,extraout_a4);
    return iVar1;
  }
  iVar1 = FUN_ram_48175224(*puStack_14,puStack_14,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 + -0x3d00;
}


